#include <verilated.h>
#include "Vbiriscv_mem_top.h"
#include "testbench.h"

#include <memory>
#include <iostream>
#include <fstream>
#include <cstring>
#include <elf.h>
#include <cstdlib> // getenv

#define MAX_CYCLES 1000000
#define BASE_ADDR 0x80000000

bool load_elf_to_memory(Testbench* tb, const char* filename) {
    std::ifstream elf(filename, std::ios::binary);
    if (!elf) {
        std::cerr << "ERROR: Cannot open ELF file: " << filename << std::endl;
        return false;
    }

    Elf32_Ehdr ehdr;
    elf.read(reinterpret_cast<char*>(&ehdr), sizeof(ehdr));
    if (std::memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0 || ehdr.e_machine != EM_RISCV) {
        std::cerr << "ERROR: Not a valid RISC-V ELF file: " << filename << std::endl;
        return false;
    }

    elf.seekg(ehdr.e_phoff, std::ios::beg);

    for (int i = 0; i < ehdr.e_phnum; ++i) {
        Elf32_Phdr phdr;
        elf.read(reinterpret_cast<char*>(&phdr), sizeof(phdr));

        if (phdr.p_type != PT_LOAD) continue;

        std::cout << "[INFO] Loading segment: addr=0x" << std::hex << phdr.p_paddr
                  << ", size=" << std::dec << phdr.p_filesz << " bytes" << std::endl;

        elf.seekg(phdr.p_offset, std::ios::beg);

        for (uint32_t offset = 0; offset < phdr.p_filesz; offset += 4) {
            uint32_t data = 0;
            elf.read(reinterpret_cast<char*>(&data), sizeof(data));
            uint32_t addr = phdr.p_paddr + offset;

            tb->memory[addr] = data;
        }
    }

    return true;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    auto dut = std::make_unique<Vbiriscv_mem_top>();
    auto tb = std::make_unique<Testbench>(dut.get());

    tb->reset_memory();
    tb->dut_reset();

    std::cout << "Starting simulation..." << std::endl;

    while (!tb->done() && tb->cycle < MAX_CYCLES) {
        tb->clock_tick();
    }

    if (tb->done()) {
        std::cout << "Found a stop request." << std::endl;
    } else {
        std::cout << "Reached maximum cycle count." << std::endl;
    }

    tb->dump_registers();

    dut->final();
    return 0;
}

