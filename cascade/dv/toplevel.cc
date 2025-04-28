#include <verilated.h>
#include "Vbiriscv_mem_top.h"
#include "testbench.h"

#include <memory>
#include <iostream>

#define MAX_CYCLES 1000000

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

    dut->final();
    return 0;
}
