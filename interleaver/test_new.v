`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:34:05 10/19/2021
// Design Name:   interleaver
// Module Name:   E:/DigTeleProject/interleaver/test_new.v
// Project Name:  interleaver
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: interleaver
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_new;

	// Inputs
	reg clk2;
	reg rst_n;
	reg din;
	reg din_valid;

	// Outputs
	wire dout;
	wire dout_valid;

	// Instantiate the Unit Under Test (UUT)
	interleaver uut (
		.clk2(clk2), 
		.rst_n(rst_n), 
		.din(din), 
		.din_valid(din_valid), 
		.dout(dout), 
		.dout_valid(dout_valid)
	);

	initial begin
		// Initialize Inputs
		clk2 = 0;
		rst_n = 0;
		din = 0;
		din_valid = 0;

		// Wait 100 ns for global reset to finish
		#5 rst_n = 1;
		#5 din_valid = 1;
		din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
		#2 din = 0;
		#14 din = 1;
        
		// Add stimulus here
	
	end
    always #1 clk2 = ~clk2;   
endmodule

