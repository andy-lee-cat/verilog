`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:48:42 10/12/2021
// Design Name:   interleaver
// Module Name:   E:/DigTeleProject/interleaver/interleaverTest.v
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

module interleaverTest;

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
	integer i;
	initial begin
		// Initialize Inputs
		clk2 = 0;
		rst_n = 0;
		din = 0;
		din_valid = 0;
	i = 0;
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
 
		#2 din = 1;
		#14 din = 0; 
		#2 din = 1;
		#14 din = 0; 
		#2 din = 1;
		#14 din = 0; 
		#2 din = 1;
		#14 din = 0;
		#2 din = 1;
		#14 din = 0; 
		#2 din = 1;
		#14 din = 0; 
		#2 din = 1;
		#14 din = 0; 
		#2 din = 1;
		#14 din = 0;
		while (i < 64) begin
			#2;
			i = i + 1;
			din = ~din;
		end
		// Add stimulus here
	
	end
   always #1 clk2 = ~clk2;    
endmodule

