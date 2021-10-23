`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:05:01 10/20/2021
// Design Name:   ParityCheck
// Module Name:   E:/DigTeleProject/ParityCheck/tb.v
// Project Name:  ParityCheck
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ParityCheck
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [7:0] symbol;

	// Outputs
	wire isErr;

	// Instantiate the Unit Under Test (UUT)
	ParityCheck uut (
		.symbol(symbol), 
		.isErr(isErr)
	);

	initial begin
		// Initialize Inputs
		symbol = 0;

		#10 symbol = 8'b00000001;
		#10 symbol = 8'b11111111;
		#10 symbol = 8'b11111110;
        
		// Add stimulus here

	end
      
endmodule

