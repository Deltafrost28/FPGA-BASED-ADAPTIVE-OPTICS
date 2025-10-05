`timescale 1ns / 1ps
`define SIMULATION

module ao (
    input  wire       clk,
    input  wire       reset_n,
    input  wire [7:0] SW,
    output wire [7:0] TL,
    output wire       dac_sclk,
    output wire       dac_mosi,
    output wire       dac_cs_n
);
wire rst = ~reset_n;

    // PID gains (Q8.8 format)
    reg signed [15:0] kp_x, ki_x, kd_x;
    reg signed [15:0] kp_y, ki_y, kd_y;

    always @(posedge clk) begin
        if (rst) begin
            kp_x <= 16'd2048;  // 8.0
            ki_x <= 16'd128;   // 0.5
            kd_x <= 16'd128;   // 0.5
            kp_y <= 16'd2048;
            ki_y <= 16'd128;
            kd_y <= 16'd128;
				end
    end

    wire signed [15:0] error_x = { {8{SW[7]}}, SW } <<< 8;
    wire signed [15:0] error_y = { {8{SW[7]}}, SW } <<< 8;
wire signed [15:0] ctrl_x;
    wire signed [15:0] ctrl_y;
    wire pid_valid_x;
    wire pid_valid_y;
	  pid_controller pid_x (
        .clk(clk),
        .rst(rst),
        .enable(1'b1),
        .error_in(error_x),
        .kp(kp_x),
        .ki(ki_x),
        .kd(kd_x),
        .out_valid(pid_valid_x),
        .control_out(ctrl_x)
    );
	 pid_controller pid_y (
        .clk(clk),
        .rst(rst),
        .enable(1'b1),
        .error_in(error_y),
        .kp(kp_y),
        .ki(ki_y),
        .kd(kd_y),
        .out_valid(pid_valid_y),
        .control_out(ctrl_y)
    );
`ifdef SIMULATION
    assign TL[3:0] = error_x[15:12];
    assign TL[7:4] = ctrl_x[15:12];
    assign dac_sclk = 1'b0;
    assign dac_mosi = 1'b0;
    assign dac_cs_n = 1'b1;
`else
assign TL = SW;
    assign dac_sclk = 1'b0;
    assign dac_mosi = 1'b0;
    assign dac_cs_n = 1'b1;
`endif

endmodule
