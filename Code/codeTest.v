`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:08:39 10/06/2021
// Design Name:   code
// Module Name:   E:/DigTeleProject/Code/codeTest.v
// Project Name:  Code
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module codeTest;

	// Inputs
	reg [0:0] Clk;
	reg [0:0] Reset;
	reg [0:0] Slt;
	reg [0:0] En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 1;
		Slt = 0;
		En = 0;  
		// Add stimulus here
	end
  always #5 Clk = ~Clk;
	always #20 En = ~En;  
	always #100 Clk = ~Clk;
	always #200 Reset = ~Reset;
endmodule

