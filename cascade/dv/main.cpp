#include "Vbiriscv_mem_top.h"
#include <verilated.h>
#include <iostream>
#include <cstdlib>
#include "load_elf.cpp"

void fail(const std::string &msg) {
    std::cerr << "[ERROR] " << msg << std::endl;
    exit(1);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    auto *top = new Vbiriscv_mem_top;

    const char *elf_filename = getenv("CASCADE_ELF_FILE");
    if (!elf_filename) {
        fail("CASCADE_ELF_FILE not set. Please set the environment variable to the ELF path.");
    }

    std::cout << "[INFO] Attempting to load ELF file: " << elf_filename << std::endl;

    if (!load_elf(top, elf_filename)) {
        fail("Failed to load ELF file: " + std::string(elf_filename));
    }

    std::cout << "[INFO] ELF loaded successfully, starting simulation..." << std::endl;

    const char *simlen_env = getenv("SIMULATION_LENGTH");
    int max_cycles = 500000;
    if (simlen_env) {
        max_cycles = atoi(simlen_env);
    }

    bool got_stop = false;
    int stop_counter = 100; // задержка после остановки
    int cycle = 0;

    while (!Verilated::gotFinish() && cycle < max_cycles) {
        top->clk_i = 0;
        top->eval();
        top->clk_i = 1;
        top->eval();

        if (!got_stop) {
            if (top->mem_req_o && top->mem_we_o && top->mem_addr_o == 0x0) {
                std::cout << "[INFO] Stop requested at cycle " << cycle << std::endl;
                got_stop = true;
            }
        } else {
            stop_counter--;
            if (stop_counter == 0) break;
        }

        cycle++;
    }

    delete top;
    std::cout << "[INFO] Simulation finished successfully." << std::endl;
    return 0;
}
