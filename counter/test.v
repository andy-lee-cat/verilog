`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:10:12 09/22/2021 
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
    input [3:0] a,
    input [4:7] b,
    input [8:11] c,
    output reg [3:0] o1,
    output reg [4:7] o2
);
	o1[3:0] = a[3:0];
	o1[3:0] = b[7:4];
	o1[3:0] = b[4:7];
	o2[4:7] = c[8:11];
	o2[4:7] = c[11:8];
endmodule
