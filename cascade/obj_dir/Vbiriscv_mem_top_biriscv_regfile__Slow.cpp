// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_regfile.h"

// Parameter definitions for Vbiriscv_mem_top_biriscv_regfile
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_regfile::SUPPORT_REGFILE_XILINX;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_regfile::SUPPORT_DUAL_ISSUE;


void Vbiriscv_mem_top_biriscv_regfile___ctor_var_reset(Vbiriscv_mem_top_biriscv_regfile* vlSelf);

Vbiriscv_mem_top_biriscv_regfile::Vbiriscv_mem_top_biriscv_regfile(Vbiriscv_mem_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_mem_top_biriscv_regfile___ctor_var_reset(this);
}

void Vbiriscv_mem_top_biriscv_regfile::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbiriscv_mem_top_biriscv_regfile::~Vbiriscv_mem_top_biriscv_regfile() {
}
