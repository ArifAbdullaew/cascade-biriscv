#include "Vbiriscv_mem_top.h"
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <cstring>
#include <iostream>

#define BASE_ADDR 0x80000000

bool load_elf(Vbiriscv_mem_top *top, const char *filename) {
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

        std::cout << "[INFO] Loading segment at 0x" << std::hex << addr
                  << " (" << std::dec << filesz << " bytes)" << std::endl;

        lseek(fd, phdr.p_offset, SEEK_SET);

        for (uint32_t offset = 0; offset < filesz; offset += 4) {
            uint32_t data;
            read(fd, &data, sizeof(data));

            uint32_t mem_addr = (addr - BASE_ADDR + offset) >> 2; // 32-битные слова

            if (mem_addr >= (1 << 20)) {
                std::cerr << "ERROR: Memory overflow during ELF load!" << std::endl;
                close(fd);
                return false;
            }

            top->u_ram->mem[mem_addr] = data;
        }
    }

    close(fd);
    return true;
}
