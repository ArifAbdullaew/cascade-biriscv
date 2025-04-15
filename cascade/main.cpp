#include <verilated.h>
#include "Vbiriscv_tiny_soc.h"
#include "biriscv_tiny_soc_rtl.h"

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

    biriscv_tiny_soc_rtl wrapper(top);

    for (int i = 1; i <= 31; ++i) {
        printf("Dump of reg x%02d: 0x%08x\n", i, wrapper.get_register(i));
    }

    printf("Found a stop request.\n");

    delete top;
    return 0;
}
