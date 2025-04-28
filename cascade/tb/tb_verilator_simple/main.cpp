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

constexpr uint32_t STOP_ADDR = 0x1000;

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
        std::cerr << "[ERRNO] " << strerror(errno) << std::endl;
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

    bool found_stop_request = false;

    for (int cycle = 0; cycle < max_cycles; cycle++) {
        top->clk_i = 0;
        top->eval();
        top->clk_i = 1;
        top->eval();

        if (top->rootp->biriscv_tiny_soc->u_core->writeback_mem_valid_w) {
            uint32_t addr = top->rootp->biriscv_tiny_soc->u_core->u_lsu->mem_addr_q;
            if (addr == STOP_ADDR) {
                std::cout << "[INFO] Found a stop request." << std::endl;
                found_stop_request = true;
                break;
            }
        }

        if (cycle % 1000 == 0) {
            bool printed = false;
            for (int i = 0; i < 32; i++) {
                uint32_t reg = top->rootp->biriscv_tiny_soc->u_core->u_issue->u_regfile->REGFILE__DOT__get_register(i);
                if (reg != 0) {
                    if (!printed) {
                        std::cout << "[REGS] Non-zero registers at cycle " << cycle << ":" << std::endl;
                        printed = true;
                    }
                    std::cout << "x" << i << ": 0x" << std::hex << reg << std::dec << std::endl;
                }
            }
            if (printed) {
                std::cout << "------------------------------" << std::endl;
            }
        }
    }

    delete top;

    if (!found_stop_request) {
        std::cerr << "[ERROR] Simulation finished without finding a stop request." << std::endl;
        return 1; 
    }

    std::cout << "[INFO] Simulation finished successfully." << std::endl;
    return 0; 
}
