`timescale 1ns/1ps
module pid_controller(
    input  wire          clk,
    input  wire          rst,        // active-high reset
    input  wire          enable,
    input  wire signed [15:0] error_in,
    input  wire signed [15:0] kp,
    input  wire signed [15:0] ki,
    input  wire signed [15:0] kd,
    output reg            out_valid,
    output reg signed [15:0] control_out
);
 // Internal registers
    reg signed [31:0] p_tmp;
    reg signed [31:0] i_tmp;
    reg signed [31:0] d_tmp;
    reg signed [47:0] integrator;
    reg signed [47:0] control_acc;
    reg signed [15:0] last_err;

    localparam integer GSHIFT = 4; // scaling factor (divide by 256)
	 // integrator clamp limits
    localparam signed [47:0] INTEGRATOR_MAX = 48'sd140737488355327; 
    localparam signed [47:0] INTEGRATOR_MIN = -48'sd140737488355328;

    always @(posedge clk) begin
        if (rst) begin
            p_tmp      <= 32'sd0;
            i_tmp      <= 32'sd0;
            d_tmp      <= 32'sd0;
            integrator <= 48'sd0;
            control_acc<= 48'sd0;
            control_out<= 16'sd0;
            last_err   <= 16'sd0;
            out_valid  <= 1'b0;
				end else begin
            out_valid <= 1'b0;
            if (enable) begin
                // --- Compute P/I/D terms ---
                p_tmp <= error_in * kp;
                i_tmp <= error_in * ki;
                d_tmp <= (error_in - last_err) * kd;
// --- Integrator update ---
                integrator <= integrator + ({{16{i_tmp[31]}}, i_tmp} >>> GSHIFT);
                // Anti-windup clamp
                if (integrator > INTEGRATOR_MAX) integrator <= INTEGRATOR_MAX;
                if (integrator < INTEGRATOR_MIN) integrator <= INTEGRATOR_MIN;
// --- PID sum (scaled) ---
                control_acc <= ({{16{p_tmp[31]}}, p_tmp} >>> GSHIFT)
                             + integrator
                             + ({{16{d_tmp[31]}}, d_tmp} >>> GSHIFT);
 // --- Saturate output ---
                if (control_acc > 48'sd32767)
                    control_out <= 16'sd32767;
                else if (control_acc < -48'sd32768)
                    control_out <= -16'sd32768;
                else
                    control_out <= control_acc[15:0];

                last_err <= error_in;
                out_valid <= 1'b1;
					
                // --- Display for simulation only ---
                $display("Time=%0t | Error=%0d | P=%0d | I=%0d | D=%0d | Out=%0d",
                          $time, error_in, p_tmp>>>GSHIFT, i_tmp>>>GSHIFT, d_tmp>>>GSHIFT, control_out);

            end
        end
    end

endmodule
