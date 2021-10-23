`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:20 10/20/2021 
// Design Name: 
// Module Name:    ParityCheck 
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
module ParityCheck(	
	input [7:0] symbol,
	output isErr
    );
	assign isErr = (^symbol[7:0]) ? 0 : 1;

endmodule
