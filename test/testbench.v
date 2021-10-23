`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:04:22 10/18/2021
// Design Name:   test
// Module Name:   E:/DigTeleProject/test/testbench.v
// Project Name:  test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg a;
	reg clk;

	// Outputs
	wire b;
	wire c;
	wire d;
	wire e;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
    #10; a = 1;
		#50; a = 0;
		#50; a = 1;
		#80; a = 0;
		#50; a = 1;
		// Add stimulus here

	end
      always #10 clk = ~clk;
endmodule

