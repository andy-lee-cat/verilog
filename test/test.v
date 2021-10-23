`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:59:27 10/18/2021 
// Design Name: 
// Module Name:    test 
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
module test(
	input a,
	input clk,
	output reg b,
	output reg c,
	output reg d,
	output reg e
    );
	always @ (posedge clk) begin
		b <= a;
		c <= a;
		d <= a;
		e <= d;
	end

endmodule
