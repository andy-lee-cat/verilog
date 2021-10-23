`timescale 1ns / 1ps
// Create Date:    18:21:58 10/12/2021 
module hamming_encoder(
    input clk,
    input clk2,
    input rst_n,
    input din,
    input din_valid,
    output reg dout,
    output reg dout_valid
    );

reg [2:0] out_cnt;
reg [1:0] in_cnt;
reg hamming_code_out [7:0];
reg hamming_code_in [3:0];

reg in_full;
reg dout_valid_reg;

// input clk
always @ (posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        in_cnt <= 0;
        in_full <= 0;
    end
    else begin
        if (din_valid) begin
            hamming_code_in[in_cnt] <= din;
            if (in_cnt == 2'b11) begin
                in_full <= 1;
                in_cnt <= 0;
                hamming_code_out[0] <= hamming_code_in[0] ^ hamming_code_in[1] ^ din;
                hamming_code_out[1] <= hamming_code_in[0] ^ hamming_code_in[2] ^ din;
                hamming_code_out[2] <= hamming_code_in[0];
                hamming_code_out[3] <= hamming_code_in[1] ^ hamming_code_in[2] ^ din;
                hamming_code_out[4] <= hamming_code_in[1];
                hamming_code_out[5] <= hamming_code_in[2];
                hamming_code_out[6] <= din;
                hamming_code_out[7] <= hamming_code_in[0] ^ hamming_code_in[1] ^ hamming_code_in[2] ^ din;
            end
            else begin
                in_full <= 0;
                in_cnt <= in_cnt + 1;
            end
        end
        else begin
            in_full <= 0;
            // do nothin
        end
    end
end

// output clk
always @ (posedge clk2 or negedge rst_n) begin
    if (!rst_n) begin
        dout <= 0;
        dout_valid <= 0;
        out_cnt <= 3'b000;
        dout_valid_reg <= 0;
    end
    else begin
        dout_valid <= dout_valid_reg | in_full;
        if (dout_valid_reg) begin
            dout <= hamming_code_out[out_cnt];
            if (out_cnt == 3'b111) begin
                out_cnt <= 0;
                dout_valid_reg <= 0;
            end
            else begin
                out_cnt <= out_cnt + 1;
            end
        end
    end
end

always @ (*) begin

end

endmodule
