`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:46:28 10/05/2021
// Design Name:   alu
// Module Name:   E:/DigTeleProject/ALU/alu_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] input_a;
	reg [31:0] input_b;
	reg [1:0] op;
	reg clk;
	reg en;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.input_a(input_a), 
		.input_b(input_b), 
		.op(op), 
		.clk(clk), 
		.en(en), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		input_a = 0;
		input_b = 0;
		op = 0;
		clk = 0;
		en = 0;

		#10;
		en = 1'b1;
		
		input_a = 32'd19260817;
		input_b = 32'd99999999;
		
		#8;
		op = 2'd1;
		
		#12;
		en = 1'b0;
		input_a = 32'd100;
        
		// Add stimulus here

	end
	always #5 clk = ~clk;
endmodule

