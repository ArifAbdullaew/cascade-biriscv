// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top___024root.h"

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_final(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__stl(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbiriscv_mem_top___024root___eval_phase__stl(Vbiriscv_mem_top___024root* vlSelf);

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_settle(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vbiriscv_mem_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/sv/biriscv_mem_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbiriscv_mem_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__stl(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] biriscv_mem_top.u_core.u_lsu.complete_ok_e2_w)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_triggers__stl(Vbiriscv_mem_top___024root* vlSelf);
VL_ATTR_COLD void Vbiriscv_mem_top___024root___eval_stl(Vbiriscv_mem_top___024root* vlSelf);

VL_ATTR_COLD bool Vbiriscv_mem_top___024root___eval_phase__stl(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbiriscv_mem_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbiriscv_mem_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__ico(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] biriscv_mem_top.u_core.u_lsu.complete_ok_e2_w)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__act(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] biriscv_mem_top.u_core.u_lsu.complete_ok_e2_w)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge biriscv_mem_top.u_core.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge biriscv_mem_top.u_core.rst_i)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge biriscv_mem_top.u_core.u_issue.clk_i)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge biriscv_mem_top.u_core.u_issue.rst_i)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge biriscv_mem_top.u_core.u_csr.clk_i)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge biriscv_mem_top.u_core.u_csr.rst_i)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge biriscv_mem_top.u_core.u_csr.u_csrfile.clk_i)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge biriscv_mem_top.u_core.u_csr.u_csrfile.rst_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge biriscv_mem_top.u_core.u_issue.u_regfile.clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__nba(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] biriscv_mem_top.u_core.u_lsu.complete_ok_e2_w)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge biriscv_mem_top.u_core.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge biriscv_mem_top.u_core.rst_i)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge biriscv_mem_top.u_core.u_issue.clk_i)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge biriscv_mem_top.u_core.u_issue.rst_i)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge biriscv_mem_top.u_core.u_csr.clk_i)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge biriscv_mem_top.u_core.u_csr.rst_i)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge biriscv_mem_top.u_core.u_csr.u_csrfile.clk_i)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge biriscv_mem_top.u_core.u_csr.u_csrfile.rst_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge biriscv_mem_top.u_core.u_issue.u_regfile.clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbiriscv_mem_top___024root___ctor_var_reset(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___ctor_var_reset\n"); );
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
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__u_regfile__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
