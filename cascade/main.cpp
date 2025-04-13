#include "Vbiriscv_tiny_soc.h"
#include "verilated.h"
#include <iostream>
#include <cstdint>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    top->clk_i = 0;
    top->rst_i = 1;

    for (int i = 0; i < 5; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    top->rst_i = 0;

    for (int i = 0; i < 100; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    std::cout << "Found a stop request." << std::endl;

    for (int i = 1; i <= 31; ++i) {
        uint32_t val = top->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile.REGFILE__DOT__get_register(i);
        printf("Dump of reg x%02d: 0x%08x\n", i, val);
    }

    delete top;
    return 0;
}
