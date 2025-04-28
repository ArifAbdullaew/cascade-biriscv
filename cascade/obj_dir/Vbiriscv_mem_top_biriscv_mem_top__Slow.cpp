// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_mem_top.h"

void Vbiriscv_mem_top_biriscv_mem_top___ctor_var_reset(Vbiriscv_mem_top_biriscv_mem_top* vlSelf);

Vbiriscv_mem_top_biriscv_mem_top::Vbiriscv_mem_top_biriscv_mem_top(Vbiriscv_mem_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_mem_top_biriscv_mem_top___ctor_var_reset(this);
}

void Vbiriscv_mem_top_biriscv_mem_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbiriscv_mem_top_biriscv_mem_top::~Vbiriscv_mem_top_biriscv_mem_top() {
}
