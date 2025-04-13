#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc__Syms.h" 
#include <verilated.h>
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vbiriscv_tiny_soc* top = new Vbiriscv_tiny_soc;

    top->clk_i = 0;
    top->rst_i = 1;

    for (int i = 0; i < 5; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    top->rst_i = 0;

    for (int i = 0; i < 100; i++) {
        top->clk_i = !top->clk_i;
        top->eval();
    }

    auto& regfile = top->vlSymsp->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile;

    for (int i = 1; i <= 31; ++i) {
        uint32_t val = 0;
        switch (i) {
            case 1:  val = regfile.__PVT__REGFILE__DOT__reg_r1_q; break;
            case 2:  val = regfile.__PVT__REGFILE__DOT__reg_r2_q; break;
            case 3:  val = regfile.__PVT__REGFILE__DOT__reg_r3_q; break;
            case 4:  val = regfile.__PVT__REGFILE__DOT__reg_r4_q; break;
            case 5:  val = regfile.__PVT__REGFILE__DOT__reg_r5_q; break;
            case 6:  val = regfile.__PVT__REGFILE__DOT__reg_r6_q; break;
            case 7:  val = regfile.__PVT__REGFILE__DOT__reg_r7_q; break;
            case 8:  val = regfile.__PVT__REGFILE__DOT__reg_r8_q; break;
            case 9:  val = regfile.__PVT__REGFILE__DOT__reg_r9_q; break;
            case 10: val = regfile.__PVT__REGFILE__DOT__reg_r10_q; break;
            case 11: val = regfile.__PVT__REGFILE__DOT__reg_r11_q; break;
            case 12: val = regfile.__PVT__REGFILE__DOT__reg_r12_q; break;
            case 13: val = regfile.__PVT__REGFILE__DOT__reg_r13_q; break;
            case 14: val = regfile.__PVT__REGFILE__DOT__reg_r14_q; break;
            case 15: val = regfile.__PVT__REGFILE__DOT__reg_r15_q; break;
            case 16: val = regfile.__PVT__REGFILE__DOT__reg_r16_q; break;
            case 17: val = regfile.__PVT__REGFILE__DOT__reg_r17_q; break;
            case 18: val = regfile.__PVT__REGFILE__DOT__reg_r18_q; break;
            case 19: val = regfile.__PVT__REGFILE__DOT__reg_r19_q; break;
            case 20: val = regfile.__PVT__REGFILE__DOT__reg_r20_q; break;
            case 21: val = regfile.__PVT__REGFILE__DOT__reg_r21_q; break;
            case 22: val = regfile.__PVT__REGFILE__DOT__reg_r22_q; break;
            case 23: val = regfile.__PVT__REGFILE__DOT__reg_r23_q; break;
            case 24: val = regfile.__PVT__REGFILE__DOT__reg_r24_q; break;
            case 25: val = regfile.__PVT__REGFILE__DOT__reg_r25_q; break;
            case 26: val = regfile.__PVT__REGFILE__DOT__reg_r26_q; break;
            case 27: val = regfile.__PVT__REGFILE__DOT__reg_r27_q; break;
            case 28: val = regfile.__PVT__REGFILE__DOT__reg_r28_q; break;
            case 29: val = regfile.__PVT__REGFILE__DOT__reg_r29_q; break;
            case 30: val = regfile.__PVT__REGFILE__DOT__reg_r30_q; break;
            case 31: val = regfile.__PVT__REGFILE__DOT__reg_r31_q; break;
        }

        std::cout << "Dump of reg x" << std::dec << i << ": 0x"
                  << std::hex << val << std::endl;
    }

    std::cout << "Found a stop request." << std::endl;

    delete top;
    return 0;
}
