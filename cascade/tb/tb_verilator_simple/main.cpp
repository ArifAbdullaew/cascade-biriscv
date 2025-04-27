#include "Vbiriscv_tiny_soc.h"
#include "verilated.h"
#include <iostream>
#include <cstdlib> // Для getenv()

extern bool load_elf(Vbiriscv_tiny_soc* top, const char* elf_filename);

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    const char* elf_path = nullptr;
    
    if (argc > 1) {
        elf_path = argv[1];
    } else {
        elf_path = getenv("CASCADE_ELF");
    }

    if (elf_path) {
        if (!load_elf(top, elf_path)) {
            std::cerr << "[ERROR] Failed to load ELF!" << std::endl;
            return 1;
        }
    } else {
        std::cerr << "[WARN] No ELF path provided (no argument, no CASCADE_ELF)." << std::endl;
    }

    uint64_t cycle = 0;
    while (cycle < 20000) {
        top->clk_i = 0;
        top->eval();
        top->clk_i = 1;
        top->eval();
        cycle++;

        if (cycle % 1000 == 0) {
            std::cout << "Cycle: " << cycle << std::endl;
            for (int i = 0; i < 32; ++i) {
                std::cout << "[DEBUG] Parsed int reg x" << i << ": " 
                          << std::hex << top->x_regs[i] << std::dec << std::endl;
            }
            std::cout << "------------------------------" << std::endl;
        }
    }

    delete top;
    return 0;
}
