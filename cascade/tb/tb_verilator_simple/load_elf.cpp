#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc_biriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc_tcm_mem.h"
#include "Vbiriscv_tiny_soc_tcm_mem_ram.h"
#include "Vbiriscv_tiny_soc___024root.h"
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <cstring>
#include <iostream>

#define BASE_ADDR 0x80000000

bool load_elf(Vbiriscv_tiny_soc *top, const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        std::cerr << "ERROR: Failed to open ELF file " << filename << std::endl;
        return false;
    }

    Elf32_Ehdr ehdr;
    read(fd, &ehdr, sizeof(ehdr));
    assert(memcmp(ehdr.e_ident, ELFMAG, SELFMAG) == 0);
    assert(ehdr.e_machine == EM_RISCV);

    lseek(fd, ehdr.e_phoff, SEEK_SET);

    for (int i = 0; i < ehdr.e_phnum; i++) {
        Elf32_Phdr phdr;
        read(fd, &phdr, sizeof(phdr));

        if (phdr.p_type != PT_LOAD)
            continue;

        uint32_t addr = phdr.p_paddr;
        uint32_t filesz = phdr.p_filesz;

        if (addr < BASE_ADDR) {
            std::cerr << "Skipping loading segment at low address 0x" << std::hex << addr << std::endl;
            continue;
        }

        std::cout << "Loading segment at 0x" << std::hex << addr << " (" << std::dec << filesz << " bytes)" << std::endl;

        lseek(fd, phdr.p_offset, SEEK_SET);

        for (uint32_t offset = 0; offset < filesz; offset += 4) {
            uint32_t data;
            read(fd, &data, sizeof(data));

            uint32_t mem_addr = (addr - BASE_ADDR + offset) >> 3; // 64 бит => сдвиг на 3
            if (mem_addr >= 131072) { // размер RAM (128KB)
                std::cerr << "Memory overflow during ELF load!" << std::endl;
                close(fd);
                return false;
            }

            // Записываем в младшие 32 бита 64-битного слова
            top->rootp->biriscv_tiny_soc->u_tcm->u_ram->ram[mem_addr] &= 0xFFFFFFFF00000000ULL;
            top->rootp->biriscv_tiny_soc->u_tcm->u_ram->ram[mem_addr] |= data;
        }
    }

    close(fd);
    return true;
}
