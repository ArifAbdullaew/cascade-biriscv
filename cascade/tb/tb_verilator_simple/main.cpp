#include "Vbiriscv_tiny_soc.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <memory>

#define MAX_CYCLES 100000

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // Создание модели
    auto top = std::make_unique<Vbiriscv_tiny_soc>();

    // Инициализация сигналов
    top->clk_i = 0;
    top->rst_i = 1;  // Сначала в ресете
    top->rst_cpu_i = 1;

    // Здесь можно загрузить ELF напрямую в память (позже допишем)

    // Сброс
    for (int i = 0; i < 10; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    // Выход из ресета
    top->rst_i = 0;
    top->rst_cpu_i = 0;

    uint64_t cycles = 0;

    while (!Verilated::gotFinish() && cycles < MAX_CYCLES) {
        // Генерируем такты
        top->clk_i = !top->clk_i;
        top->eval();
        
        // На фронте клока (например, когда clk_i == 1)
        if (top->clk_i) {
            // Дамп каждые 1000 циклов
            if (cycles % 1000 == 0) {
                std::cout << "Cycle: " << cycles << std::endl;
                for (int i = 0; i < 32; ++i) {
                    std::cout << "x" << i << ": 0x" << std::hex << top->x_regs[i] << std::dec << std::endl;
                }
                std::cout << "------------------------------" << std::endl;
            }
        }
        cycles++;
    }

    top->final();
    return 0;
}
