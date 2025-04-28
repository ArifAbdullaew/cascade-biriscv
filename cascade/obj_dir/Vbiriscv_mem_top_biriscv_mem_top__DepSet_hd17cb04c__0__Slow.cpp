// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_mem_top.h"

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_mem_top___eval_static__TOP__biriscv_mem_top(Vbiriscv_mem_top_biriscv_mem_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_mem_top_biriscv_mem_top___eval_static__TOP__biriscv_mem_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_ready = 1U;
}

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_mem_top___ctor_var_reset(Vbiriscv_mem_top_biriscv_mem_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_mem_top_biriscv_mem_top___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->mem_req_o = VL_RAND_RESET_I(1);
    vlSelf->mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->mem_strb_o = VL_RAND_RESET_I(4);
    vlSelf->mem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->mem_inst_rdata_i = VL_RAND_RESET_Q(64);
    vlSelf->mem_ready = VL_RAND_RESET_I(1);
}
