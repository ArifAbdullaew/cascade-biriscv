#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc__Syms.h" // важно!
#include "verilated.h"
#include <iostream>
#include <iomanip>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    // Сброс
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

    Vbiriscv_tiny_soc__Syms* symsp = top->vlSymsp.get();
    auto& regfile = symsp->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile;

    for (int i = 1; i <= 31; ++i) {
        uint32_t val = regfile.get_register(i);
        std::cout << "Dump of reg x" << std::dec << i << ": 0x" 
                  << std::hex << std::setw(8) << std::setfill('0') << val << std::endl;
    }

    delete top;
    return 0;
}
