#include <iostream>
#include <fstream>
#include <vector>
#include <elf.h>
#include "Vbiriscv_tiny_soc.h"

// Простейшая функция загрузки ELF в память дизайна
bool load_elf(Vbiriscv_tiny_soc* top, const char* elf_filename) {
    std::ifstream elf_file(elf_filename, std::ios::binary);
    if (!elf_file) {
        std::cerr << "[ERROR] Cannot open ELF file: " << elf_filename << std::endl;
        return false;
    }

    // Читаем заголовок ELF
    Elf32_Ehdr ehdr;
    elf_file.read(reinterpret_cast<char*>(&ehdr), sizeof(ehdr));
    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        std::cerr << "[ERROR] Not a valid ELF file: " << elf_filename << std::endl;
        return false;
    }

    // Переходим к программным сегментам (Program Headers)
    elf_file.seekg(ehdr.e_phoff, std::ios::beg);
    for (int i = 0; i < ehdr.e_phnum; ++i) {
        Elf32_Phdr phdr;
        elf_file.read(reinterpret_cast<char*>(&phdr), sizeof(phdr));

        if (phdr.p_type != PT_LOAD) {
            continue; // Только загружаемые сегменты
        }

        // Читаем сегмент в буфер
        std::vector<uint8_t> segment(phdr.p_filesz);
        elf_file.seekg(phdr.p_offset, std::ios::beg);
        elf_file.read(reinterpret_cast<char*>(segment.data()), phdr.p_filesz);

        // Копируем в память процессора
        for (uint32_t offset = 0; offset < phdr.p_filesz; offset += 4) {
            uint32_t addr = phdr.p_paddr + offset;
            uint32_t data = 0;
            for (int b = 0; b < 4 && (offset + b) < phdr.p_filesz; ++b) {
                data |= segment[offset + b] << (8 * b);
            }

            // Обращаемся к TCM памяти через Verilator-порт
            // !!! Адаптируем под реальный топ-дизайн
            if (addr >= 0x80000000 && addr < 0x80000000 + 128 * 1024) {
                // biRISC-V: tcm_mem массив доступен через rootp
                top->rootp->biriscv_tiny_soc->u_tcm->mem[(addr - 0x80000000) >> 2] = data;
            }
        }
    }

    std::cout << "[INFO] ELF loaded successfully into memory." << std::endl;
    return true;
}
