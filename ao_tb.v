`timescale 1ns/1ps
`define SIMULATION
module ao_tb();


    reg clk, reset_n;
    reg signed[7:0] SW;
    wire [7:0] TL;
    wire dac_sclk, dac_mosi, dac_cs_n;

    // Instantiate DUT
    ao dut (
        .clk(clk),
        .reset_n(reset_n),
        .SW(SW),
        .TL(TL),
        .dac_sclk(dac_sclk),
        .dac_mosi(dac_mosi),
		  .dac_cs_n(dac_cs_n)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz
    end
	 
	  // Stimulus
    initial begin
        $display("Time\tSW\tError\tCtrl_X\tCtrl_Y");
        reset_n = 0; SW = 8'd0;
        #50 reset_n = 1;

        #100 SW = 8'd20;   // positive error
        #200 SW = -8'd20;  // negative error
        #200 SW = 8'd10;   // small error
        #200 SW = 8'd0;    // back to zero
        #2000 $stop;
    end
	 
	 // Monitor values whenever they change
    always @(posedge clk ) begin
	 if(dut.pid_valid_x) begin
        $display("%0t\t%d\t%d\t%d\t%d",
                 $time,
                 $signed(SW),
                 $signed(dut.error_x),  // internal error
                 $signed(dut.ctrl_x),   // X correction
                 $signed(dut.ctrl_y));  // Y correction
    end
 end

endmodule
