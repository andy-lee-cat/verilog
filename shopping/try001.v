module mod_name (
    input clk,
    input rstn,
    input [1:0] coin,
    
    output reg [1:0] change,
    output reg sell //1
);

parameter IDLE = 3'd0;
parameter GET05 = 3'd1;
parameter GET10 = 3'd2;
parameter GET15 = 3'd3;

reg [2:0] st_next;
reg [2:0] st_cur;

always @(posedge clk or negedge rstn) begin
    if (!rstn) begin
        st_cur <= 'b0;
    end
    else begin
        st_cur <= st_next;
    end
end

always @(posedge clk or negedge rstn) begin
    if (!rstn) begin
        change <= 0;
        sell <= 0;
    end
    else begin
        //
    end
end

always @(*) begin
    case
end
endmodule