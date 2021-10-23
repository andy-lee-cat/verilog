`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:06:38 10/12/2021
// Design Name:   hamming_encoder
// Module Name:   E:/DigTeleProject/hamming_encoder/hammingtest.v
// Project Name:  hamming_encoder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hamming_encoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module hammingtest;

	// Inputs
	reg clk;
	reg clk2;
	reg rst_n;
	reg din;
	reg din_valid;
	
	// Outputs
	wire dout;
	wire dout_valid;
//È«ÊÇ¡Ì¢à
	// Instantiate the Unit Under Test (UUT)
	hamming_encoder uut (
		.clk(clk), 
		.clk2(clk2), 
		.rst_n(rst_n), 
		.din(din), 
		.din_valid(din_valid), 
		.dout(dout), 
		.dout_valid(dout_valid)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clk2 = 1;
		rst_n = 0;
		din = 0;
		din_valid = 0;

		// Wait 100 ns for global reset to finish
		#20; rst_n = ~rst_n;
		
		#20; din_valid = ~din_valid;
		#40; din = ~din;
		#40; din = ~din;
		#40; din = ~din;
		#80; din = ~din;
    #80; din = ~din;
		#40; din_valid = ~din_valid;
		// Add stimulus here
		
	end

    always #20 clk = ~clk;  
	always #10 clk2 = ~clk2;

endmodule

