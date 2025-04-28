// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_mem_top.h"

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_mem_top___ico_sequent__TOP__biriscv_mem_top__0(Vbiriscv_mem_top_biriscv_mem_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_mem_top_biriscv_mem_top___ico_sequent__TOP__biriscv_mem_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_i_accept_i 
        = vlSelfRef.mem_ready;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_accept_i 
        = vlSelfRef.mem_ready;
    vlSymsp->TOP__biriscv_mem_top__u_core.rst_i = vlSelfRef.rst_ni;
    vlSymsp->TOP__biriscv_mem_top__u_core.clk_i = vlSelfRef.clk_i;
    vlSelfRef.mem_inst_rdata_i = (QData)((IData)(vlSelfRef.mem_rdata_i));
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_data_rd_i 
        = vlSelfRef.mem_rdata_i;
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_data_wr_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_addr_o;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_i_inst_i 
        = vlSelfRef.mem_inst_rdata_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_mem_top___ico_comb__TOP__biriscv_mem_top__0(Vbiriscv_mem_top_biriscv_mem_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_mem_top_biriscv_mem_top___ico_comb__TOP__biriscv_mem_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_strb_o = vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_wr_o;
    vlSelfRef.mem_req_o = vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_rd_o;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_i_valid_i 
        = vlSelfRef.mem_req_o;
    vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_ack_i 
        = vlSelfRef.mem_req_o;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_mem_top___nba_sequent__TOP__biriscv_mem_top__0(Vbiriscv_mem_top_biriscv_mem_top* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbiriscv_mem_top_biriscv_mem_top___nba_sequent__TOP__biriscv_mem_top__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_data_wr_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__biriscv_mem_top__u_core.mem_d_addr_o;
}
