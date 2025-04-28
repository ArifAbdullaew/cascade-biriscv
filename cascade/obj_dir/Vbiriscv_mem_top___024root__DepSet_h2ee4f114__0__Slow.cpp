// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top___024root.h"

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_mem_top___eval_static__TOP__biriscv_mem_top(Vbiriscv_mem_top_biriscv_mem_top* vlSelf);

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_static(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbiriscv_mem_top_biriscv_mem_top___eval_static__TOP__biriscv_mem_top((&vlSymsp->TOP__biriscv_mem_top));
}

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_mem_top___eval_initial__TOP__biriscv_mem_top(Vbiriscv_mem_top_biriscv_mem_top* vlSelf);
VL_ATTR_COLD void Vbiriscv_mem_top_riscv_core___eval_initial__TOP__biriscv_mem_top__u_core(Vbiriscv_mem_top_riscv_core* vlSelf);
VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_issue___eval_initial__TOP__biriscv_mem_top__u_core__u_issue(Vbiriscv_mem_top_biriscv_issue* vlSelf);
VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_csr__SB0___eval_initial__TOP__biriscv_mem_top__u_core__u_csr(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf);
VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_csr_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf);
VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_issue__u_regfile(Vbiriscv_mem_top_biriscv_regfile* vlSelf);

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_initial(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbiriscv_mem_top_biriscv_mem_top___eval_initial__TOP__biriscv_mem_top((&vlSymsp->TOP__biriscv_mem_top));
    Vbiriscv_mem_top_riscv_core___eval_initial__TOP__biriscv_mem_top__u_core((&vlSymsp->TOP__biriscv_mem_top__u_core));
    Vbiriscv_mem_top_biriscv_issue___eval_initial__TOP__biriscv_mem_top__u_core__u_issue((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue));
    Vbiriscv_mem_top_biriscv_csr__SB0___eval_initial__TOP__biriscv_mem_top__u_core__u_csr((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr));
    Vbiriscv_mem_top_biriscv_csr_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile((&vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile));
    Vbiriscv_mem_top_biriscv_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_issue__u_regfile((&vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile));
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w;
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__1 
        = vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w;
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
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__stl(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_triggers__stl(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__0 
        = vlSymsp->TOP__biriscv_mem_top__u_core.u_lsu__DOT__complete_ok_e2_w;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbiriscv_mem_top___024root___dump_triggers__stl(vlSelf);
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

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_stl(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
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
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
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
