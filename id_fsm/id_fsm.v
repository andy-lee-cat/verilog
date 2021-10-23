`timescale 1ns / 1ps
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );

reg [1:0] status = 2'b00;
wire [1:0] charType;
assign out = (status == 2'b10) ? 1'b1 : 1'b0;

/*
 charType 2'b00 -> char is illegal
 charType 2'b01 -> char is alphabat
 charType 2'b10 -> char is digital
*/
assign charType = (char >= 8'd48 && char <= 8'd57) ? 2'b10 : 
               ((char >= 8'd65 && char <= 8'd90) || 
               (char >= 8'd97 && char <= 8'd122)) ? 
               2'b01 : 2'b00;
/*
status 2'b00 -> illegal or nothing
status 2'b01 -> only alphabets
status 2'b10 -> right output

| status | input | next status | output |
| ------ | ----- | ----------- | ------ |
| 2'b00  | 2'b00 | 2'b00       | 0      |
| 2'b00  | 2'b01 | 2'b01       | 0      |
| 2'b00  | 2'b10 | 2'b00       | 0      |
| 2'b01  | 2'b00 | 2'b00       | 0      |
| 2'b01  | 2'b01 | 2'b01       | 0      |
| 2'b01  | 2'b10 | 2'b10       | 1      |
| 2'b10  | 2'b00 | 2'b00       | 0      |
| 2'b10  | 2'b01 | 2'b01       | 0      |
| 2'b10  | 2'b10 | 2'b10       | 1      |
*/
always@(posedge clk) begin
    case (status)
        2'b00: 
        case (charType)
            2'b00: status <= 2'b00;
            2'b01: status <= 2'b01;
            2'b10: status <= 2'b00;
            default: ;
        endcase
        2'b01:
        case (charType)
            2'b00: status <= 2'b00;
            2'b01: status <= 2'b01;
            2'b10: status <= 2'b10;
            default: ;
        endcase
        2'b10:
        case (charType)
            2'b00: status <= 2'b00;
            2'b01: status <= 2'b01;
            2'b10: status <= 2'b10;
            default: ;
        endcase
        default: ;
    endcase
end

endmodule
