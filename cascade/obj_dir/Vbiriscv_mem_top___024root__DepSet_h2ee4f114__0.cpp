// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__ico(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vbiriscv_mem_top___024root___eval_triggers__ico(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__1 
        = vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VicoDidInit))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbiriscv_mem_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vbiriscv_mem_top___024root___ico_sequent__TOP__0(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__0(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
void Vbiriscv_mem_top_biriscv_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0(Vbiriscv_mem_top_biriscv_regfile* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_mem_top___ico_sequent__TOP__biriscv_mem_top__0(Vbiriscv_mem_top_biriscv_mem_top* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top___024root___ico_sequent__TOP__1(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__2(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__0(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_mem_top___ico_comb__TOP__biriscv_mem_top__0(Vbiriscv_mem_top_biriscv_mem_top* vlSelf);
void Vbiriscv_mem_top___024root___ico_comb__TOP__0(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0(Vbiriscv_mem_top_biriscv_regfile* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_csr_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__3(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__2(Vbiriscv_mem_top_biriscv_issue* vlSelf);

void Vbiriscv_mem_top___024root___eval_ico(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbiriscv_mem_top___024root___ico_sequent__TOP__0(vlSelf);
        Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__0((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_biriscv_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_mem_top___ico_sequent__TOP__biriscv_mem_top__0((&vlSymsp->TOP__biriscv_mem_top));
        Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__1((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top___024root___ico_sequent__TOP__1(vlSelf);
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__2((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__0((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_mem_top___ico_comb__TOP__biriscv_mem_top__0((&vlSymsp->TOP__biriscv_mem_top));
        Vbiriscv_mem_top___024root___ico_comb__TOP__0(vlSelf);
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__1((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__2((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_biriscv_csr_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__3((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
}

VL_INLINE_OPT void Vbiriscv_mem_top___024root___ico_sequent__TOP__0(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_we_o = vlSymsp->TOP__biriscv_mem_top.mem_we_o;
    vlSymsp->TOP__biriscv_mem_top.rst_ni = vlSelfRef.rst_ni;
    vlSymsp->TOP__biriscv_mem_top.clk_i = vlSelfRef.clk_i;
    vlSymsp->TOP__biriscv_mem_top.mem_rdata_i = vlSelfRef.mem_rdata_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top___024root___ico_sequent__TOP__1(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___ico_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__biriscv_mem_top.mem_wdata_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__biriscv_mem_top.mem_addr_o;
}

VL_INLINE_OPT void Vbiriscv_mem_top___024root___ico_comb__TOP__0(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___ico_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_strb_o = vlSymsp->TOP__biriscv_mem_top.mem_strb_o;
    vlSelfRef.mem_req_o = vlSymsp->TOP__biriscv_mem_top.mem_req_o;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__act(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vbiriscv_mem_top___024root___eval_triggers__act(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__2)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core.clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__clk_i__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core.rst_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__rst_i__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__clk_i__0))));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.rst_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__rst_i__0))));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__clk_i__0))));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.rst_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__rst_i__0))));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__clk_i__0))));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.rst_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__rst_i__0))));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__u_regfile__clk_i__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__2 
        = vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__clk_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__rst_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core.rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__clk_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__rst_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__clk_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__rst_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__clk_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__rst_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__u_regfile__clk_i__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.clk_i;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbiriscv_mem_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vbiriscv_mem_top___024root___eval_act(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__0((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_mem_top___ico_comb__TOP__biriscv_mem_top__0((&vlSymsp->TOP__biriscv_mem_top));
        Vbiriscv_mem_top___024root___ico_comb__TOP__0(vlSelf);
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__1((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__2((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_biriscv_csr_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__3((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
}

void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__0(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_mem_top___nba_sequent__TOP__biriscv_mem_top__0(Vbiriscv_mem_top_biriscv_mem_top* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__3(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__2(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__3(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0(Vbiriscv_mem_top_biriscv_regfile* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__4(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__4(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__5(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__2(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__6(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__3(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__3(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_csr_regfile___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__4(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__2(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__4(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__3(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__5(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__4(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__6(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__5(Vbiriscv_mem_top_biriscv_issue* vlSelf);
void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__7(Vbiriscv_mem_top_riscv_core* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__2(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__3(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);

void Vbiriscv_mem_top___024root___eval_nba(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__0((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_mem_top___nba_sequent__TOP__biriscv_mem_top__0((&vlSymsp->TOP__biriscv_mem_top));
        Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__1((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__2((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__3((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__3((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__0((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_mem_top___ico_comb__TOP__biriscv_mem_top__0((&vlSymsp->TOP__biriscv_mem_top));
        Vbiriscv_mem_top___024root___ico_comb__TOP__0(vlSelf);
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__1((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__4((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__4((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x66ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__2((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__5((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__6((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__3((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
    if ((0x1eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__3((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x198ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_csr_regfile___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__4((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__4((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x78ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__3((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__5((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x1f8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__4((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__6((&vlSymsp->TOP__biriscv_mem_top__u_core));
    }
    if ((0x7fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__5((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__7((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
    }
    if ((0x27fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__1((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
        Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__3((&vlSymsp->TOP__biriscv_mem_top__u_core));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
        Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__2((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    }
    if ((0x1ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbiriscv_mem_top_biriscv_csr_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
        Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__3((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
    }
}
