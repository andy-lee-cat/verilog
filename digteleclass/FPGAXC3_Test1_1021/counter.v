`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:02:02 03/27/2019 
// Design Name: 
// Module Name:    counter 
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

module counter(
     clr,
     clk,
     Q
    );
	 
	  input clr;
    input clk;
	 output[3:0] Q;
reg [3:0] Q;    
always @( posedge clk or negedge clr )
	if ( !clr ) Q <= 0;
	else if ( Q == 12 ) 
	   Q <= 0; 
   else 
      Q <= Q + 1;
endmodule

module SY_D_FF ( data,clear,clock,qb,q);
input data,clock,clear;
output q, qb;
reg q;
assign qb = ~q;
always @( posedge clock  )
begin 
if (! clear)
q <= 0;
else
q <= data;
end
endmodule 

