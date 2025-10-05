`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:58:26 10/04/2025 
// Design Name: 
// Module Name:    spi_dac 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps
module spi_dac #(
    parameter integer SCLK_DIV = 50
)(
    input  wire       clk,
    input  wire       rst,
    input  wire       start,      // 1-cycle pulse to send data_in
    input  wire [15:0] data_in,
    output reg        busy,
    output reg        sclk,
    output reg        mosi,
    output reg        cs_n
);

localparam IDLE = 2'd0, ASSERT_CS = 2'd1, SHIFT = 2'd2, DONE = 2'd3;
    reg [1:0] state;
    reg [15:0] shift_reg;
    reg [4:0] bit_cnt;
    integer   div_cnt;
	 
	 always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            cs_n  <= 1'b1;
            sclk  <= 1'b0;
            mosi  <= 1'b0;
            busy  <= 1'b0;
            div_cnt <= 0;end else begin
            case (state)
                IDLE: begin
                    cs_n <= 1'b1;
                    sclk <= 1'b0;
                    busy <= 1'b0;
                    if (start) begin
                        shift_reg <= data_in;
                        bit_cnt <= 5'd15;
                        state <= ASSERT_CS;
                    end
                end
					   ASSERT_CS: begin
                    cs_n <= 1'b0;
                    busy <= 1'b1;
                    div_cnt <= 0;
                    sclk <= 1'b0;
                    mosi <= shift_reg[15];
                    state <= SHIFT;
                end
					 SHIFT: begin
                    if (div_cnt >= (SCLK_DIV/2 - 1)) begin
                        sclk <= ~sclk;
                        div_cnt <= 0;
                        // shift on falling edge (after toggle)
                        if (sclk == 1'b1) begin
                            if (bit_cnt == 0) state <= DONE;
                            else begin
									  shift_reg <= { shift_reg[14:0], 1'b0 };
                                bit_cnt <= bit_cnt - 1;
                                mosi <= shift_reg[14];
                            end
                        end
                    end else begin
						      div_cnt <= div_cnt + 1;
                    end
                end
					 DONE: begin
                    sclk <= 1'b0;
                    cs_n <= 1'b1;
                    busy <= 1'b0;
                    state <= IDLE;
                end
            endcase
        end
    end
endmodule
				