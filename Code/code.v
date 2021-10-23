module code(
    input [0:0] Clk,
    input [0:0] Reset,
    input [0:0] Slt,
    input [0:0] En,
    output reg [63:0] Output0,
    output reg [63:0] Output1
    );
    
reg [1:0] op = 2'b01;

always@(posedge Clk) begin
    if (Reset == 1'b1) begin
		Output0 <= 64'h0;
		Output1 <= 64'h0;
	end
	else if (En == 1'b1) begin
		if (Slt == 1'b0) begin
			Output0 <= Output0 + 64'h1;
        end
        else begin
            op <= op + 2'b01;
            if (op == 2'b00) begin
                Output1 <= Output1 + 64'h1;
            end
        end
    end
end

endmodule
