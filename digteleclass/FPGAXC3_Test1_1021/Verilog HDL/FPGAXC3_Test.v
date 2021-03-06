module FPGAXC3_Test(Sys_CLK,Sys_RST,COM,SEG,Switch,LED,AD_SDO,AD_SCLK,AD_CS,AD_SDI,Key,Uart_Tx,Uart_Rx);

input Sys_CLK;
input Sys_RST;
input [1:0]Switch;
input [1:0]Key;
output [7:0]SEG;
output [1:0]COM;
output [3:0]LED;
input AD_SDO;
output AD_SCLK;
output AD_CS;
output AD_SDI;
input Uart_Rx;
output Uart_Tx;
//output Key_Signal;


reg Div_CLK;
reg [24:0]Div_Cnt;
reg [11:0]Num;

wire [3:0]AD_Address;
wire [11:0]AD_BCDOut;



initial
begin
	Div_CLK <= 1'b0;
	Div_Cnt <= 25'b0;
	Num <= 12'b0;
end

always@(posedge Sys_CLK)
begin
	if(Div_Cnt < 25'd25000000)
		Div_Cnt = Div_Cnt + 1'b1;
	else
	begin
		Div_CLK = ~Div_CLK;
		Div_Cnt = 25'b0;
	end
end

/*always@(posedge Div_CLK)
begin
	if(Num <= 11'h063)    // 63(Hex) = 99(Dec)
		Num = Num + 1'b1;
	else
		Num = 11'b0;
end*/
//LED_Nixietube LED_Nixietube(.Sys_CLK(Sys_CLK),.Data_Bin(AD_BCDOut),.EN(1'b1),.COM(COM),.SEG(SEG));

LED_Nixietube LED_Nixietube(.Sys_CLK(Sys_CLK),.Data_Bin({LED,LED,LED}),.EN(1'b1),.COM(COM),.SEG(SEG));

/*
assign LED[0] = (Switch == 2'b00)?1'b1:1'b0;
assign LED[1] = (Switch == 2'b01)?1'b1:1'b0;
assign LED[2] = (Switch == 2'b10)?1'b1:1'b0;
assign LED[3] = (Switch == 2'b11)?1'b1:1'b0;	*/

//wire AD_Send_Flag;
//wire Uart_Idle_Flag;

//assign LED = AD_Address;
Red_LED Red_LED(.LED(LED),.Sys_CLK(Sys_CLK),.Sys_RST(Sys_RST),.Key_In(Key));

AD_Top AD_Top(.CLK(Sys_CLK),.SCLK(AD_SCLK),.CS(AD_CS),.SDO(AD_SDI),.SDI(AD_SDO),.AD_BCDOut(AD_BCDOut),.AD_Address(AD_Address),.Switch(Switch));

Uart_Top Uart_Top(.Sys_CLK(Sys_CLK),.Sys_RST(Sys_RST),.Signal_Tx(Uart_Tx),.Signal_Rx(Uart_Rx));

wire[3:0] QQ;
//counter cc(.clk(Sys_CLK),.clr(Sys_RST),.Q(LED));

//SY_D_FF SY_D_FF1 ( .data(Sys_RST), .clear(Sys_RST), .clock(Sys_CLK), .qb(LED[0]), .q(LED[1]));

endmodule