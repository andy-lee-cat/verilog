`timescale 1ns / 1ps
`include "scrambler.v"
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:10:30 10/13/2021
// Design Name:   scrambler
// Module Name:   E:/DigTeleProject/scrambler/scramblertest.v
// Project Name:  scrambler
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: scrambler
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module scramblertest;

	// Inputs
	reg clk;
	reg rst_n;
	reg [6:0] seed;
	reg load;
	reg din;
	reg din_valid;

	// Outputs
	wire dout;
	wire dout_valid;

	// Instantiate the Unit Under Test (UUT)
	scrambler uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.seed(seed), 
		.load(load), 
		.din(din), 
		.din_valid(din_valid), 
		.dout(dout), 
		.dout_valid(dout_valid)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 1;
		seed = 7'h7f;
		load = 0;
		din = 0;
		din_valid = 0;

		// Wait 100 ns for global reset to finish
		#2;
        load = 1;
		#2; load = 0;
		#2; din_valid = 1;
		// Add stimulus here

	end
	always #1 clk = ~clk;  
endmodule

