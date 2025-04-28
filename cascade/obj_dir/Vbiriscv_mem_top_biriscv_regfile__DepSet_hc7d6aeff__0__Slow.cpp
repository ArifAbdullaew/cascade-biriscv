// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_regfile.h"

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_issue__u_regfile(Vbiriscv_mem_top_biriscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_issue__u_regfile\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.REGFILE__DOT__x0_zero_w = 0U;
}

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_regfile___ctor_var_reset(Vbiriscv_mem_top_biriscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->rd0_i = VL_RAND_RESET_I(5);
    vlSelf->rd1_i = VL_RAND_RESET_I(5);
    vlSelf->rd0_value_i = VL_RAND_RESET_I(32);
    vlSelf->rd1_value_i = VL_RAND_RESET_I(32);
    vlSelf->ra0_i = VL_RAND_RESET_I(5);
    vlSelf->rb0_i = VL_RAND_RESET_I(5);
    vlSelf->ra1_i = VL_RAND_RESET_I(5);
    vlSelf->rb1_i = VL_RAND_RESET_I(5);
    vlSelf->ra0_value_o = VL_RAND_RESET_I(32);
    vlSelf->rb0_value_o = VL_RAND_RESET_I(32);
    vlSelf->ra1_value_o = VL_RAND_RESET_I(32);
    vlSelf->rb1_value_o = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r1_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r2_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r3_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r4_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r5_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r6_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r7_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r8_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r9_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r10_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r11_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r12_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r13_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r14_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r15_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r16_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r17_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r18_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r19_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r20_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r21_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r22_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r23_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r24_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r25_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r26_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r27_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r28_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r29_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r30_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__reg_r31_q = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x0_zero_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x1_ra_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x2_sp_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x3_gp_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x4_tp_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x5_t0_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x6_t1_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x7_t2_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x8_s0_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x9_s1_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x10_a0_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x11_a1_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x12_a2_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x13_a3_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x14_a4_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x15_a5_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x16_a6_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x17_a7_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x18_s2_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x19_s3_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x20_s4_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x21_s5_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x22_s6_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x23_s7_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x24_s8_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x25_s9_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x26_s10_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x27_s11_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x28_t3_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x29_t4_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x30_t5_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__x31_t6_w = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__ra0_value_r = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__rb0_value_r = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__ra1_value_r = VL_RAND_RESET_I(32);
    vlSelf->REGFILE__DOT__rb1_value_r = VL_RAND_RESET_I(32);
}
