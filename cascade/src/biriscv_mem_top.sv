module biriscv_mem_top (
    input  logic clk_i,
    input  logic rst_ni
);

// Публичные сигналы для Verilator / Fuzzer
logic mem_req_o /*verilator public*/;
logic mem_we_o /*verilator public*/;
logic [31:0] mem_addr_o /*verilator public*/;
logic [31:0] mem_wdata_o /*verilator public*/;
logic [3:0] mem_strb_o /*verilator public*/;
logic [31:0] mem_rdata_i;

// Ядро процессора
riscv_core u_core (
    .clk_i(clk_i),
    .rst_i(rst_ni),
    .testmode_i(1'b0),
    .irq_i('0),
    .irq_ack_i(1'b0),
    .irq_id_o(), // не используем
    .irq_ack_o(), // не используем

    // Инструкции (загрузка инструкций)
    .instr_gnt_i(mem_req_o),
    .instr_rvalid_i(mem_req_o),
    .instr_rdata_i(mem_rdata_i),
    .instr_req_o(), // игнорировать
    .instr_addr_o(), // игнорировать

    // Данные (чтение/запись памяти)
    .data_gnt_i(mem_req_o),
    .data_rvalid_i(mem_req_o),
    .data_rdata_i(mem_rdata_i),
    .data_req_o(mem_req_o),
    .data_we_o(mem_we_o),
    .data_be_o(mem_strb_o),
    .data_addr_o(mem_addr_o),
    .data_wdata_o(mem_wdata_o),

    .debug_o() 
);

// (RAM)
biriscv_ram #(
    .ADDR_WIDTH(20), // 1MB 
    .DATA_WIDTH(32)
) u_ram (
    .clk_i(clk_i),
    .req_i(mem_req_o),
    .we_i(mem_we_o),
    .addr_i(mem_addr_o[21:2]),
    .wdata_i(mem_wdata_o),
    .wstrb_i(mem_strb_o),
    .rdata_o(mem_rdata_i)
);

endmodule
