#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc___024root.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>

vluint64_t main_time = 0; 

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    top->clk_i = 0;
    top->rst_i = 1;
    for (int i = 0; i < 10; i++) {
        top->clk_i ^= 1;
        top->eval();
        main_time++;
    }
    top->rst_i = 0;

    std::cout << "[INFO] Starting simulation..." << std::endl;

    const int max_cycles = 1000000;
    int cycle = 0;

    while (!Verilated::gotFinish() && cycle < max_cycles) {
        top->clk_i ^= 1;
        top->eval();
        main_time++;
        cycle++;

        auto* regfile = &(top->rootp->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile);
        if (regfile->get_register(10) == 0xDEADCAFE) {
            std::cout << "[INFO] Program signaled end via x10 = 0xDEADCAFE" << std::endl;
            break;
        }
    }

    std::cout << "[INFO] Simulation finished after " << cycle << " cycles" << std::endl;

    auto* regfile = &(top->rootp->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile);
    for (int i = 1; i < 32; i++) {
        uint32_t val = regfile->get_register(i);
        std::cout << "[DEBUG] Parsed int reg x" << std::setw(2) << i << ": 0x"
                  << std::hex << std::setfill('0') << std::setw(8) << val << std::dec << std::endl;
    }

    delete top;
    return 0;
}
