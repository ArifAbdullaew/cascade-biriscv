// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_riscv_core.h"

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmu_ifetch_flush_w = ((IData)(vlSelfRef.ifence_w) 
                                    | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_q));
    vlSelfRef.u_mmu__DOT__fetch_in_flush_i = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.mem_i_flush_o = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_frontend__DOT__icache_flush_o = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_flush_o 
        = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_mmu__DOT__fetch_out_flush_o = vlSelfRef.mmu_ifetch_flush_w;
}
