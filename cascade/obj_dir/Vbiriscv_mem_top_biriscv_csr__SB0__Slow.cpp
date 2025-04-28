// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_csr__SB0.h"

// Parameter definitions for Vbiriscv_mem_top_biriscv_csr__SB0
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_csr__SB0::SUPPORT_MULDIV;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_csr__SB0::SUPPORT_SUPER;


void Vbiriscv_mem_top_biriscv_csr__SB0___ctor_var_reset(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);

Vbiriscv_mem_top_biriscv_csr__SB0::Vbiriscv_mem_top_biriscv_csr__SB0(Vbiriscv_mem_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_mem_top_biriscv_csr__SB0___ctor_var_reset(this);
}

void Vbiriscv_mem_top_biriscv_csr__SB0::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbiriscv_mem_top_biriscv_csr__SB0::~Vbiriscv_mem_top_biriscv_csr__SB0() {
}
