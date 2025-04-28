module biriscv_mem_top (
    input logic clk_i,
    input logic rst_ni
);

// Публичные сигналы для Verilator/Fuzzer
logic mem_req_o /*verilator public*/;
logic mem_we_o /*verilator public*/;
logic [31:0] mem_addr_o /*verilator public*/;
logic [31:0] mem_wdata_o /*verilator public*/;
logic [3:0] mem_strb_o /*verilator public*/;
logic [31:0] mem_rdata_i /*verilator public*/;

// Прочие сигналы для интерфейса процессора
logic [63:0] mem_inst_rdata_i;
assign mem_inst_rdata_i = {32'b0, mem_rdata_i}; // расширение до 64 бит

// Готовность памяти всегда активна
logic mem_ready = 1'b1;

// Ядро процессора
riscv_core u_core (
    .clk_i(clk_i),
    .rst_i(rst_ni),

    // Инструкции (память инструкций)
    .mem_i_accept_i(mem_ready),
    .mem_i_valid_i(mem_req_o),
    .mem_i_error_i(1'b0),
    .mem_i_inst_i(mem_inst_rdata_i),

    // Данные (память данных)
    .mem_d_data_rd_i(mem_rdata_i),
    .mem_d_accept_i(mem_ready),
    .mem_d_ack_i(mem_req_o),
    .mem_d_error_i(1'b0),
    .mem_d_resp_tag_i(11'd0),

    // Управление
    .intr_i(1'b0),
    .reset_vector_i(32'h80000000),
    .cpu_id_i(32'd0),

    // Выходы на память
    .mem_d_addr_o(mem_addr_o),
    .mem_d_data_wr_o(mem_wdata_o),
    .mem_d_rd_o(mem_req_o),
    .mem_d_wr_o(mem_strb_o),
    .mem_d_cacheable_o(),
    .mem_d_req_tag_o(),
    .mem_d_invalidate_o(),
    .mem_d_writeback_o(),
    .mem_d_flush_o(),

    .mem_i_rd_o(),     // не используем
    .mem_i_flush_o(),  // не используем
    .mem_i_invalidate_o(), // не используем
    .mem_i_pc_o()      // не используем
);

endmodule
