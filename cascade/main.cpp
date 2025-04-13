#include "Vbiriscv_tiny_soc.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    top->clk_i = 0;
    top->rst_i = 1;

    for (int i = 0; i < 5; ++i) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    top->rst_i = 0;

    for (int i = 0; i < 100; ++i) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    std::cout << "Found a stop request." << std::endl;

    auto& regfile = top->u_core->u_issue->u_regfile;

    for (int i = 1; i <= 31; ++i) {
        uint32_t val = regfile.get_register(i);
        std::cout << "Dump of reg x" << i << ": 0x" << std::hex << val << std::endl;
    }

    delete top;
    return 0;
}
