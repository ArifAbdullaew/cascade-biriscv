#include "Vbiriscv_tiny_soc.h"
#include "verilated.h"

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

    delete top;
    return 0;
}
