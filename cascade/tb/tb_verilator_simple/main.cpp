#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc_riscv_core.h"
#include "Vbiriscv_tiny_soc_biriscv_tiny_soc.h" 
#include "Vbiriscv_tiny_soc___024root.h"        
#include <verilated.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <cstring>
#include <cassert>
#include <elf.h>

extern bool load_elf(Vbiriscv_tiny_soc *top, const char *filename);

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    auto *top = new Vbiriscv_tiny_soc;

    const char *elf_filename = getenv("CASCADE_ELF_FILE");
    if (!elf_filename) {
        if (argc < 2) {
            std::cerr << "ERROR: No ELF file provided." << std::endl;
            return 1;
        }
        elf_filename = argv[1];
    }

    if (!load_elf(top, elf_filename)) {
        std::cerr << "Failed to load ELF!" << std::endl;
        return 1;
    }

    for (int cycle = 0; cycle < 20000; cycle++) {
        top->clk_i = 0;
        top->eval();
        top->clk_i = 1;
        top->eval();

        if (cycle % 1000 == 0) {
            std::cout << "Cycle: " << cycle << std::endl;
            for (int i = 0; i < 32; i++) {
                uint32_t reg = top->rootp->biriscv_tiny_soc->u_core->u_issue->u_regfile->get_register(i);
                std::cout << "[DEBUG] Parsed int reg x" << i << ": " << reg << std::endl;
            }
            std::cout << "------------------------------" << std::endl;
        }
    }

    delete top;
    return 0;
}
