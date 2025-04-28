#pragma once

#include <verilated.h>
#include <cstdint>
#include <unordered_map>
#include "Vbiriscv_mem_top.h"

class Testbench {
public:
    Vbiriscv_mem_top *dut;
    uint64_t cycle = 0;
    std::unordered_map<uint32_t, uint32_t> memory;

    Testbench(Vbiriscv_mem_top *dut_) : dut(dut_) {}

    void reset_memory() {
        memory.clear();
    }

    void dut_reset() {
        dut->rst_ni = 0;
        for (int i = 0; i < 5; ++i) {
            clock_tick();
        }
        dut->rst_ni = 1;
    }

    void clock_tick() {
        dut->clk_i = 0;
        dut->eval();
        dut->clk_i = 1;
        dut->eval();
        cycle++;

        handle_memory();
    }

    void handle_memory() {
        if (dut->mem_req_o) {
            if (dut->mem_we_o) {
                store_word(dut->mem_addr_o, dut->mem_wdata_o, dut->mem_strb_o);
            } else {
                dut->mem_rdata_i = load_word(dut->mem_addr_o);
            }
        }
    }

    uint32_t load_word(uint32_t addr) {
        if (memory.find(addr) != memory.end())
            return memory[addr];
        else
            return 0;
    }

    void store_word(uint32_t addr, uint32_t data, uint8_t strb) {
        uint32_t current = load_word(addr);

        if (strb & 0x1) current = (current & 0xFFFFFF00) | (data & 0x000000FF);
        if (strb & 0x2) current = (current & 0xFFFF00FF) | (data & 0x0000FF00);
        if (strb & 0x4) current = (current & 0xFF00FFFF) | (data & 0x00FF0000);
        if (strb & 0x8) current = (current & 0x00FFFFFF) | (data & 0xFF000000);

        memory[addr] = current;
    }

    bool done() {
        return Verilated::gotFinish();
    }
};
