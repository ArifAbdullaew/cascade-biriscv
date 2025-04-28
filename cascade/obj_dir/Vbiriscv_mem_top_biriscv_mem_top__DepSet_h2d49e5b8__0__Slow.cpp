// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_mem_top.h"

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_mem_top___eval_initial__TOP__biriscv_mem_top(Vbiriscv_mem_top_biriscv_mem_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_mem_top_biriscv_mem_top___eval_initial__TOP__biriscv_mem_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core.cpu_id_i = 0U;
    vlSymsp->TOP__biriscv_mem_top__u_core.reset_vector_i = 0x80000000U;
    vlSymsp->TOP__biriscv_mem_top__u_core.intr_i = 0U;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_resp_tag_i = 0U;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_error_i = 0U;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_i_error_i = 0U;
}
