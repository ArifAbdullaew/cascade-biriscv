// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top___024root.h"

void Vbiriscv_mem_top___024root___eval_triggers__ico(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top___024root___eval_ico(Vbiriscv_mem_top___024root* vlSelf);

bool Vbiriscv_mem_top___024root___eval_phase__ico(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbiriscv_mem_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbiriscv_mem_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbiriscv_mem_top___024root___eval_triggers__act(Vbiriscv_mem_top___024root* vlSelf);
void Vbiriscv_mem_top___024root___eval_act(Vbiriscv_mem_top___024root* vlSelf);

bool Vbiriscv_mem_top___024root___eval_phase__act(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbiriscv_mem_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbiriscv_mem_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vbiriscv_mem_top___024root___eval_nba(Vbiriscv_mem_top___024root* vlSelf);

bool Vbiriscv_mem_top___024root___eval_phase__nba(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbiriscv_mem_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__ico(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__nba(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbiriscv_mem_top___024root___dump_triggers__act(Vbiriscv_mem_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vbiriscv_mem_top___024root___eval(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vbiriscv_mem_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("dv/sv/biriscv_mem_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbiriscv_mem_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbiriscv_mem_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/sv/biriscv_mem_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbiriscv_mem_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/sv/biriscv_mem_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbiriscv_mem_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbiriscv_mem_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbiriscv_mem_top___024root___eval_debug_assertions(Vbiriscv_mem_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbiriscv_mem_top___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelfRef.rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
