#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc_biriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc_riscv_core.h"
#include "Vbiriscv_tiny_soc_biriscv_issue.h"
#include "Vbiriscv_tiny_soc_biriscv_regfile.h"
#include "Vbiriscv_tiny_soc___024root.h"

#include <verilated.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cassert>
#include <elf.h>
#include <cstdlib>

extern bool load_elf(Vbiriscv_tiny_soc *top, const char *filename);

void fail(const std::string &msg) {
    std::cerr << "[ERROR] " << msg << std::endl;
    exit(1);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    auto *top = new Vbiriscv_tiny_soc;

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
    int max_cycles = 20000;
    if (simlen_env) {
        max_cycles = atoi(simlen_env);
        std::cout << "[INFO] Simulation length set to " << max_cycles << " cycles from environment." << std::endl;
    } else {
        std::cout << "[WARN] SIMULATION_LENGTH not set, defaulting to " << max_cycles << " cycles." << std::endl;
    }

    for (int cycle = 0; cycle < max_cycles; cycle++) {
        top->clk_i = 0;
        top->eval();
        top->clk_i = 1;
        top->eval();

        if (cycle % 1000 == 0) {
            std::cout << "Cycle: " << cycle << std::endl;
            for (int i = 0; i < 32; i++) {
                uint32_t reg = top->rootp->biriscv_tiny_soc->u_core->u_issue->u_regfile->REGFILE__DOT__get_register(i);
                std::cout << "[DEBUG] Parsed int reg x" << i << ": " << reg << std::endl;
            }
            std::cout << "------------------------------" << std::endl;
        }
    }

    delete top;
    std::cout << "[INFO] Found a stop request." << std::endl;
    std::cout << "[INFO] Simulation finished successfully." << std::endl;
    return 0;
}
