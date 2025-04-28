// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_issue.h"

// Parameter definitions for Vbiriscv_mem_top_biriscv_issue
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::SUPPORT_MULDIV;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::SUPPORT_DUAL_ISSUE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::SUPPORT_LOAD_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::SUPPORT_MUL_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::SUPPORT_REGFILE_XILINX;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::u_pipe0_ctrl__DOT__SUPPORT_LOAD_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::u_pipe0_ctrl__DOT__SUPPORT_MUL_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::u_pipe1_ctrl__DOT__SUPPORT_LOAD_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_biriscv_issue::u_pipe1_ctrl__DOT__SUPPORT_MUL_BYPASS;


void Vbiriscv_mem_top_biriscv_issue___ctor_var_reset(Vbiriscv_mem_top_biriscv_issue* vlSelf);

Vbiriscv_mem_top_biriscv_issue::Vbiriscv_mem_top_biriscv_issue(Vbiriscv_mem_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_mem_top_biriscv_issue___ctor_var_reset(this);
}

void Vbiriscv_mem_top_biriscv_issue::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbiriscv_mem_top_biriscv_issue::~Vbiriscv_mem_top_biriscv_issue() {
}
