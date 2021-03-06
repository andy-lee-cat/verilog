module LED_Nixietube(Sys_CLK,Data_Bin,EN,COM,SEG);

input Sys_CLK;
input EN;
input [11:0]Data_Bin;
output [1:0]COM;
output [7:0]SEG;

wire [7:0]Num_Display;
//wire [19:0]Num_BCD;
//wire [15:0]Num_Bin;

reg [7:0]SEG;
reg COM_Cnt;

reg Div_CLK;
reg [12:0]Div_Cnt;

//assign Num_Bin = {4'b0,Data_Bin};
assign Num_Display = Data_Bin[11:4];

//BinToBCD BinToBCD(.Data_Bin(Num_Bin),.Data_BCD(Num_BCD),.Sys_CLK(Sys_CLK));

parameter Display_0 = 8'b11111100;
parameter Display_1 = 8'b01100000;
parameter Display_2 = 8'b11011010;
parameter Display_3 = 8'b11110010;
parameter Display_4 = 8'b01100110;
parameter Display_5 = 8'b10110110;
parameter Display_6 = 8'b10111110;
parameter Display_7 = 8'b11100000;
parameter Display_8 = 8'b11111110;
parameter Display_9 = 8'b11110110;
parameter Display_DP = 8'b00000001;

assign COM = (EN)?((COM_Cnt)?2'b10:2'b01):2'b00;

initial
begin
	SEG <= 8'b0;
	COM_Cnt <= 1'b0;
	Div_CLK <= 1'b0;
	Div_Cnt <= 13'b0;
end

always@(posedge Sys_CLK)
begin
	if(Div_Cnt < 13'd5000)
		Div_Cnt = Div_Cnt + 1'b1;
	else
	begin
		Div_CLK = ~Div_CLK;
		Div_Cnt = 13'b0;
	end
end

always@(posedge Div_CLK)
begin
	if(EN)
	begin
		if(COM_Cnt)
		begin
			case(Num_Display[7:4])
				4'b0000:SEG <= Display_0;
				4'b0001:SEG <= Display_0;
				4'b0010:SEG <= Display_0;
				4'b0011:SEG <= Display_0;
				4'b0100:SEG <= Display_0;
				4'b0101:SEG <= Display_0;
				4'b0110:SEG <= Display_0;
				4'b0111:SEG <= Display_0;
				4'b1000:SEG <= Display_0;
				4'b1001:SEG <= Display_0;
				4'b1010:SEG <= Display_1;
				4'b1011:SEG <= Display_1;
				4'b1100:SEG <= Display_1;
				4'b1101:SEG <= Display_1;
				4'b1110:SEG <= Display_1;
				4'b1111:SEG <= Display_1;
				default:SEG <= 4'h0;
			endcase
		end
		else
		begin
			case(Num_Display[7:4])
				4'b0000:SEG <= Display_0;
				4'b0001:SEG <= Display_1;
				4'b0010:SEG <= Display_2;
				4'b0011:SEG <= Display_3;
				4'b0100:SEG <= Display_4;
				4'b0101:SEG <= Display_5;
				4'b0110:SEG <= Display_6;
				4'b0111:SEG <= Display_7;
				4'b1000:SEG <= Display_8;
				4'b1001:SEG <= Display_9;
				4'b1010:SEG <= Display_0;
				4'b1011:SEG <= Display_1;
				4'b1100:SEG <= Display_2;
				4'b1101:SEG <= Display_3;
				4'b1110:SEG <= Display_4;
				4'b1111:SEG <= Display_5;
				default:SEG <= 4'h0;
			endcase
		end
		COM_Cnt = COM_Cnt + 1'b1;
	end
	else 
		COM_Cnt = 1'b0;
end




endmodule