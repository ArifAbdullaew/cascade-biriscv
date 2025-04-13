#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc__Syms.h"
#include "verilated.h"
#include <iostream>

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

    for (int i = 1; i <= 31; i++) {
        uint32_t val = top->rootp->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile.*(
            &Vbiriscv_tiny_soc_biriscv_regfile::__PVT__REGFILE__DOT__reg_r1_q + (i - 1)
        );
        std::cout << "Dump of reg x" << std::dec << i << ": 0x"
                  << std::hex << val << std::endl;
    }

    std::cout << "Found a stop request." << std::endl;

    delete top;
    return 0;
}
