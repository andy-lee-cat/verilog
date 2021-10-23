`timescale 1ns / 1ps
// Create Date:    15:19:06 10/13/2021 
module scrambler(
    input clk,
    input rst_n,
    input [6:0] seed,
    input load,
    input din,
    input din_valid,
    output reg dout,
    output reg dout_valid
    );

integer i;

reg [6:0] lfsr;

always @ (posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        dout <= 0;
        dout_valid <= 0;
        lfsr <= seed;
    end
    else if (load == 1) begin
        lfsr <= seed;
    end
    else if (din_valid == 1) begin
        dout_valid <= 1;
        for (i = 6; i > 0; i = i - 1) begin
            lfsr[i] <= lfsr[i - 1];
        end
        lfsr[0] <= lfsr[3] ^ lfsr[6];
        dout <= lfsr[3] ^ lfsr[6] ^ din;
    end
    else begin
        dout_valid <= 0;
        dout <= 0;
    end
end

endmodule
