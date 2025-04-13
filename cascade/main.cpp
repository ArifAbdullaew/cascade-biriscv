#include "Vbiriscv_tiny_soc.h"
#include "verilated.h"
#include <cstdio>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    top->clk_i = 0;
    top->rst_i = 1;
    top->rst_cpu_i = 1;

    for (int i = 0; i < 10; ++i) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    top->rst_i = 0;
    top->rst_cpu_i = 0;

    for (int i = 0; i < 1000; ++i) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    printf("Register file:\n");
    for (int i = 0; i < 32; ++i) {
        printf("x[%2d] = 0x%08x\n", i, top->x_regs[i]);
    }

    delete top;
    return 0;
}
