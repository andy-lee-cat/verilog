`timescale 1ns / 1ps
// Create Date:    22:24:17 10/12/2021 
module interleaver(
    input clk2,
    input rst_n,
    input din,
    input din_valid,
    output reg dout,
    output reg dout_valid
    );

parameter SIZE = 8;
reg [127:0] temp ;

reg [5:0] in_state;
reg [6:0] out_state;
reg op_state;

wire [6:0] num;
//assign num = (out_state[5:0] % 8) * 8 + out_state[5:0] / 8 + (~op_state) * 64;
assign num = {~op_state, out_state[2:0], out_state[5:3]};

always @ (posedge clk2 or negedge rst_n) begin
    if (!rst_n) begin
        in_state <= 0;
        out_state <= 7'b1000000;
        op_state <= 0;
    end
    else begin
        if (in_state < 63 && out_state[6]) begin
            if (din_valid) begin
                in_state <= in_state + 1;
                // out_state <= out_state;
                // op_state <= op_state;
                temp[in_state + 64 * op_state] <= din;
            end
            else begin
                // in_state <= in_state;
                // out_state <= out_state;
                // op_state <= op_state;
            end
        end
        else if (in_state == 63 && out_state[6]) begin
            if (din_valid) begin
                in_state <= 0;
                out_state <= 0;
                op_state <= ~op_state;
                temp[in_state + 64 * op_state] <= din;
            end
            else begin
                // in_state <= in_state;
                // out_state <= out_state;
                // op_state <= op_state;
            end
        end
        else if (out_state < 63 && !out_state[6]) begin
            if (din_valid) begin
                in_state <= in_state + 1;
                out_state <= out_state + 1;
                // op_state <= op_state;
                temp[in_state + 64 * op_state] <= din;
            end
            else begin
                // in_state <= in_state;
                out_state <= out_state + 1;
                // op_state <= op_state;
            end
        end
        else if (out_state == 63 && !out_state[6] && in_state < 63) begin
            if (din_valid) begin
                in_state <= in_state + 1;
                out_state <= 7'b1000000;
                // op_state <= op_state;
                temp[in_state + 64 * op_state] <= din;
            end
            else begin
                // in_state <= in_state;
                out_state <= 7'b1000000;
                // op_state <= op_state;
            end
        end
        else if (out_state == 63 && !out_state[6] && in_state == 63) begin
            if (din_valid) begin
                in_state <= 0;
                out_state <= 7'b0000000;
                op_state <= ~op_state;
                temp[in_state + 64 * op_state] <= din;
            end
            else begin
                // in_state <= in_state;
                out_state <= 7'b1000000;
                // op_state <= op_state;
            end
        end
    end
end

always @(posedge clk2 or negedge rst_n) begin
    if (!rst_n) begin
        dout <= 0;
        dout_valid <= 0;
    end
    else if (out_state[6]) begin
        dout <= 0;
        dout_valid <= 0;
    end 
    else begin
        dout_valid <= 1;
        dout <= temp[num];
    end
end
endmodule
