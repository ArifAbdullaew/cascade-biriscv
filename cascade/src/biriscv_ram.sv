module biriscv_ram #(
    parameter ADDR_WIDTH = 20, 
    parameter DATA_WIDTH = 32
)(
    input  logic clk_i,
    input  logic req_i,
    input  logic we_i,
    input  logic [ADDR_WIDTH-1:0] addr_i,
    input  logic [DATA_WIDTH-1:0] wdata_i,
    input  logic [(DATA_WIDTH/8)-1:0] wstrb_i,
    output logic [DATA_WIDTH-1:0] rdata_o
);

logic [DATA_WIDTH-1:0] mem [(2**ADDR_WIDTH)-1:0];

always_ff @(posedge clk_i) begin
    if (req_i) begin
        if (we_i) begin
            if (wstrb_i[0]) mem[addr_i][7:0]   <= wdata_i[7:0];
            if (wstrb_i[1]) mem[addr_i][15:8]  <= wdata_i[15:8];
            if (wstrb_i[2]) mem[addr_i][23:16] <= wdata_i[23:16];
            if (wstrb_i[3]) mem[addr_i][31:24] <= wdata_i[31:24];
        end
        rdata_o <= mem[addr_i];
    end
end

endmodule
