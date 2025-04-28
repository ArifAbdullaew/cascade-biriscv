// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_regfile.h"

uint32_t Vbiriscv_mem_top_biriscv_regfile::REGFILE__DOT__get_register(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile::REGFILE__DOT__get_register\n"); );
    VL_OUT(get_register__Vfuncrtn,31,0);
    // Body
    get_register__Vfuncrtn = ((0x10U & (IData)(r)) ? 
                              ((8U & (IData)(r)) ? 
                               ((4U & (IData)(r)) ? 
                                ((2U & (IData)(r)) ? 
                                 ((1U & (IData)(r))
                                   ? this->REGFILE__DOT__reg_r31_q
                                   : this->REGFILE__DOT__reg_r30_q)
                                  : ((1U & (IData)(r))
                                      ? this->REGFILE__DOT__reg_r29_q
                                      : this->REGFILE__DOT__reg_r28_q))
                                 : ((2U & (IData)(r))
                                     ? ((1U & (IData)(r))
                                         ? this->REGFILE__DOT__reg_r27_q
                                         : this->REGFILE__DOT__reg_r26_q)
                                     : ((1U & (IData)(r))
                                         ? this->REGFILE__DOT__reg_r25_q
                                         : this->REGFILE__DOT__reg_r24_q)))
                                : ((4U & (IData)(r))
                                    ? ((2U & (IData)(r))
                                        ? ((1U & (IData)(r))
                                            ? this->REGFILE__DOT__reg_r23_q
                                            : this->REGFILE__DOT__reg_r22_q)
                                        : ((1U & (IData)(r))
                                            ? this->REGFILE__DOT__reg_r21_q
                                            : this->REGFILE__DOT__reg_r20_q))
                                    : ((2U & (IData)(r))
                                        ? ((1U & (IData)(r))
                                            ? this->REGFILE__DOT__reg_r19_q
                                            : this->REGFILE__DOT__reg_r18_q)
                                        : ((1U & (IData)(r))
                                            ? this->REGFILE__DOT__reg_r17_q
                                            : this->REGFILE__DOT__reg_r16_q))))
                               : ((8U & (IData)(r))
                                   ? ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r15_q
                                               : this->REGFILE__DOT__reg_r14_q)
                                           : ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r13_q
                                               : this->REGFILE__DOT__reg_r12_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r11_q
                                               : this->REGFILE__DOT__reg_r10_q)
                                           : ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r9_q
                                               : this->REGFILE__DOT__reg_r8_q)))
                                   : ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r7_q
                                               : this->REGFILE__DOT__reg_r6_q)
                                           : ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r5_q
                                               : this->REGFILE__DOT__reg_r4_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r3_q
                                               : this->REGFILE__DOT__reg_r2_q)
                                           : ((1U & (IData)(r))
                                               ? this->REGFILE__DOT__reg_r1_q
                                               : 0U)))));
    // Final
    return (get_register__Vfuncrtn);
}

bool Vbiriscv_mem_top_biriscv_regfile::REGFILE__DOT__set_register(uint32_t r, uint32_t value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile::REGFILE__DOT__set_register\n"); );
    VL_OUT8(set_register__Vfuncrtn,0,0);
    // Final
    return (set_register__Vfuncrtn);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0(Vbiriscv_mem_top_biriscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.REGFILE__DOT__x1_ra_w = vlSelfRef.REGFILE__DOT__reg_r1_q;
    vlSelfRef.REGFILE__DOT__x2_sp_w = vlSelfRef.REGFILE__DOT__reg_r2_q;
    vlSelfRef.REGFILE__DOT__x3_gp_w = vlSelfRef.REGFILE__DOT__reg_r3_q;
    vlSelfRef.REGFILE__DOT__x4_tp_w = vlSelfRef.REGFILE__DOT__reg_r4_q;
    vlSelfRef.REGFILE__DOT__x5_t0_w = vlSelfRef.REGFILE__DOT__reg_r5_q;
    vlSelfRef.REGFILE__DOT__x6_t1_w = vlSelfRef.REGFILE__DOT__reg_r6_q;
    vlSelfRef.REGFILE__DOT__x7_t2_w = vlSelfRef.REGFILE__DOT__reg_r7_q;
    vlSelfRef.REGFILE__DOT__x8_s0_w = vlSelfRef.REGFILE__DOT__reg_r8_q;
    vlSelfRef.REGFILE__DOT__x9_s1_w = vlSelfRef.REGFILE__DOT__reg_r9_q;
    vlSelfRef.REGFILE__DOT__x10_a0_w = vlSelfRef.REGFILE__DOT__reg_r10_q;
    vlSelfRef.REGFILE__DOT__x11_a1_w = vlSelfRef.REGFILE__DOT__reg_r11_q;
    vlSelfRef.REGFILE__DOT__x12_a2_w = vlSelfRef.REGFILE__DOT__reg_r12_q;
    vlSelfRef.REGFILE__DOT__x13_a3_w = vlSelfRef.REGFILE__DOT__reg_r13_q;
    vlSelfRef.REGFILE__DOT__x14_a4_w = vlSelfRef.REGFILE__DOT__reg_r14_q;
    vlSelfRef.REGFILE__DOT__x15_a5_w = vlSelfRef.REGFILE__DOT__reg_r15_q;
    vlSelfRef.REGFILE__DOT__x16_a6_w = vlSelfRef.REGFILE__DOT__reg_r16_q;
    vlSelfRef.REGFILE__DOT__x17_a7_w = vlSelfRef.REGFILE__DOT__reg_r17_q;
    vlSelfRef.REGFILE__DOT__x18_s2_w = vlSelfRef.REGFILE__DOT__reg_r18_q;
    vlSelfRef.REGFILE__DOT__x19_s3_w = vlSelfRef.REGFILE__DOT__reg_r19_q;
    vlSelfRef.REGFILE__DOT__x20_s4_w = vlSelfRef.REGFILE__DOT__reg_r20_q;
    vlSelfRef.REGFILE__DOT__x21_s5_w = vlSelfRef.REGFILE__DOT__reg_r21_q;
    vlSelfRef.REGFILE__DOT__x22_s6_w = vlSelfRef.REGFILE__DOT__reg_r22_q;
    vlSelfRef.REGFILE__DOT__x23_s7_w = vlSelfRef.REGFILE__DOT__reg_r23_q;
    vlSelfRef.REGFILE__DOT__x24_s8_w = vlSelfRef.REGFILE__DOT__reg_r24_q;
    vlSelfRef.REGFILE__DOT__x25_s9_w = vlSelfRef.REGFILE__DOT__reg_r25_q;
    vlSelfRef.REGFILE__DOT__x26_s10_w = vlSelfRef.REGFILE__DOT__reg_r26_q;
    vlSelfRef.REGFILE__DOT__x27_s11_w = vlSelfRef.REGFILE__DOT__reg_r27_q;
    vlSelfRef.REGFILE__DOT__x28_t3_w = vlSelfRef.REGFILE__DOT__reg_r28_q;
    vlSelfRef.REGFILE__DOT__x29_t4_w = vlSelfRef.REGFILE__DOT__reg_r29_q;
    vlSelfRef.REGFILE__DOT__x30_t5_w = vlSelfRef.REGFILE__DOT__reg_r30_q;
    vlSelfRef.REGFILE__DOT__x31_t6_w = vlSelfRef.REGFILE__DOT__reg_r31_q;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0(Vbiriscv_mem_top_biriscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.REGFILE__DOT__rb1_value_r = ((0x10U & (IData)(vlSelfRef.rb1_i))
                                            ? ((8U 
                                                & (IData)(vlSelfRef.rb1_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r31_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r29_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r27_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r25_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r23_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r21_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r19_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r17_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r16_q))))
                                            : ((8U 
                                                & (IData)(vlSelfRef.rb1_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r15_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r13_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r11_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r9_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r7_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r5_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r3_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.REGFILE__DOT__ra1_value_r = ((0x10U & (IData)(vlSelfRef.ra1_i))
                                            ? ((8U 
                                                & (IData)(vlSelfRef.ra1_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r31_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r29_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r27_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r25_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r23_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r21_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r19_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r17_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r16_q))))
                                            : ((8U 
                                                & (IData)(vlSelfRef.ra1_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r15_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r13_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r11_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r9_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra1_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r7_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r5_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra1_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r3_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra1_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.REGFILE__DOT__rb0_value_r = ((0x10U & (IData)(vlSelfRef.rb0_i))
                                            ? ((8U 
                                                & (IData)(vlSelfRef.rb0_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r31_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r29_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r27_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r25_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r23_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r21_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r19_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r17_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r16_q))))
                                            : ((8U 
                                                & (IData)(vlSelfRef.rb0_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r15_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r13_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r11_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r9_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.rb0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r7_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r5_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.rb0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r3_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.rb0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.REGFILE__DOT__ra0_value_r = ((0x10U & (IData)(vlSelfRef.ra0_i))
                                            ? ((8U 
                                                & (IData)(vlSelfRef.ra0_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r31_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r29_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r27_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r25_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r23_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r21_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r19_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r17_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r16_q))))
                                            : ((8U 
                                                & (IData)(vlSelfRef.ra0_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r15_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r13_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r11_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r9_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.ra0_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r7_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r5_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.ra0_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r3_q
                                                      : vlSelfRef.REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.ra0_i))
                                                      ? vlSelfRef.REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.rb1_value_o = vlSelfRef.REGFILE__DOT__rb1_value_r;
    vlSelfRef.ra1_value_o = vlSelfRef.REGFILE__DOT__ra1_value_r;
    vlSelfRef.rb0_value_o = vlSelfRef.REGFILE__DOT__rb0_value_r;
    vlSelfRef.ra0_value_o = vlSelfRef.REGFILE__DOT__ra0_value_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0(Vbiriscv_mem_top_biriscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__u_regfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_i) {
        vlSelfRef.REGFILE__DOT__reg_r31_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r30_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r29_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r12_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r11_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r7_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r10_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r5_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r8_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r3_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r6_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r1_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r4_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r2_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r9_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r13_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r14_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r15_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r16_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r17_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r18_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r19_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r20_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r21_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r22_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r23_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r24_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r25_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r26_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r27_q = 0U;
        vlSelfRef.REGFILE__DOT__reg_r28_q = 0U;
    } else {
        if ((0x1fU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r31_q = vlSelfRef.rd0_value_i;
        } else if ((0x1fU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r31_q = vlSelfRef.rd1_value_i;
        }
        if ((0x1eU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r30_q = vlSelfRef.rd0_value_i;
        } else if ((0x1eU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r30_q = vlSelfRef.rd1_value_i;
        }
        if ((0x1dU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r29_q = vlSelfRef.rd0_value_i;
        } else if ((0x1dU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r29_q = vlSelfRef.rd1_value_i;
        }
        if ((0xcU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r12_q = vlSelfRef.rd0_value_i;
        } else if ((0xcU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r12_q = vlSelfRef.rd1_value_i;
        }
        if ((0xbU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r11_q = vlSelfRef.rd0_value_i;
        } else if ((0xbU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r11_q = vlSelfRef.rd1_value_i;
        }
        if ((7U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r7_q = vlSelfRef.rd0_value_i;
        } else if ((7U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r7_q = vlSelfRef.rd1_value_i;
        }
        if ((0xaU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r10_q = vlSelfRef.rd0_value_i;
        } else if ((0xaU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r10_q = vlSelfRef.rd1_value_i;
        }
        if ((5U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r5_q = vlSelfRef.rd0_value_i;
        } else if ((5U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r5_q = vlSelfRef.rd1_value_i;
        }
        if ((8U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r8_q = vlSelfRef.rd0_value_i;
        } else if ((8U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r8_q = vlSelfRef.rd1_value_i;
        }
        if ((3U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r3_q = vlSelfRef.rd0_value_i;
        } else if ((3U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r3_q = vlSelfRef.rd1_value_i;
        }
        if ((6U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r6_q = vlSelfRef.rd0_value_i;
        } else if ((6U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r6_q = vlSelfRef.rd1_value_i;
        }
        if ((1U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r1_q = vlSelfRef.rd0_value_i;
        } else if ((1U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r1_q = vlSelfRef.rd1_value_i;
        }
        if ((4U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r4_q = vlSelfRef.rd0_value_i;
        } else if ((4U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r4_q = vlSelfRef.rd1_value_i;
        }
        if ((2U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r2_q = vlSelfRef.rd0_value_i;
        } else if ((2U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r2_q = vlSelfRef.rd1_value_i;
        }
        if ((9U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r9_q = vlSelfRef.rd0_value_i;
        } else if ((9U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r9_q = vlSelfRef.rd1_value_i;
        }
        if ((0xdU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r13_q = vlSelfRef.rd0_value_i;
        } else if ((0xdU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r13_q = vlSelfRef.rd1_value_i;
        }
        if ((0xeU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r14_q = vlSelfRef.rd0_value_i;
        } else if ((0xeU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r14_q = vlSelfRef.rd1_value_i;
        }
        if ((0xfU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r15_q = vlSelfRef.rd0_value_i;
        } else if ((0xfU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r15_q = vlSelfRef.rd1_value_i;
        }
        if ((0x10U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r16_q = vlSelfRef.rd0_value_i;
        } else if ((0x10U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r16_q = vlSelfRef.rd1_value_i;
        }
        if ((0x11U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r17_q = vlSelfRef.rd0_value_i;
        } else if ((0x11U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r17_q = vlSelfRef.rd1_value_i;
        }
        if ((0x12U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r18_q = vlSelfRef.rd0_value_i;
        } else if ((0x12U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r18_q = vlSelfRef.rd1_value_i;
        }
        if ((0x13U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r19_q = vlSelfRef.rd0_value_i;
        } else if ((0x13U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r19_q = vlSelfRef.rd1_value_i;
        }
        if ((0x14U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r20_q = vlSelfRef.rd0_value_i;
        } else if ((0x14U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r20_q = vlSelfRef.rd1_value_i;
        }
        if ((0x15U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r21_q = vlSelfRef.rd0_value_i;
        } else if ((0x15U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r21_q = vlSelfRef.rd1_value_i;
        }
        if ((0x16U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r22_q = vlSelfRef.rd0_value_i;
        } else if ((0x16U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r22_q = vlSelfRef.rd1_value_i;
        }
        if ((0x17U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r23_q = vlSelfRef.rd0_value_i;
        } else if ((0x17U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r23_q = vlSelfRef.rd1_value_i;
        }
        if ((0x18U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r24_q = vlSelfRef.rd0_value_i;
        } else if ((0x18U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r24_q = vlSelfRef.rd1_value_i;
        }
        if ((0x19U == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r25_q = vlSelfRef.rd0_value_i;
        } else if ((0x19U == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r25_q = vlSelfRef.rd1_value_i;
        }
        if ((0x1aU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r26_q = vlSelfRef.rd0_value_i;
        } else if ((0x1aU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r26_q = vlSelfRef.rd1_value_i;
        }
        if ((0x1bU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r27_q = vlSelfRef.rd0_value_i;
        } else if ((0x1bU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r27_q = vlSelfRef.rd1_value_i;
        }
        if ((0x1cU == (IData)(vlSelfRef.rd0_i))) {
            vlSelfRef.REGFILE__DOT__reg_r28_q = vlSelfRef.rd0_value_i;
        } else if ((0x1cU == (IData)(vlSelfRef.rd1_i))) {
            vlSelfRef.REGFILE__DOT__reg_r28_q = vlSelfRef.rd1_value_i;
        }
    }
    vlSelfRef.REGFILE__DOT__x31_t6_w = vlSelfRef.REGFILE__DOT__reg_r31_q;
    vlSelfRef.REGFILE__DOT__x30_t5_w = vlSelfRef.REGFILE__DOT__reg_r30_q;
    vlSelfRef.REGFILE__DOT__x29_t4_w = vlSelfRef.REGFILE__DOT__reg_r29_q;
    vlSelfRef.REGFILE__DOT__x12_a2_w = vlSelfRef.REGFILE__DOT__reg_r12_q;
    vlSelfRef.REGFILE__DOT__x11_a1_w = vlSelfRef.REGFILE__DOT__reg_r11_q;
    vlSelfRef.REGFILE__DOT__x7_t2_w = vlSelfRef.REGFILE__DOT__reg_r7_q;
    vlSelfRef.REGFILE__DOT__x10_a0_w = vlSelfRef.REGFILE__DOT__reg_r10_q;
    vlSelfRef.REGFILE__DOT__x5_t0_w = vlSelfRef.REGFILE__DOT__reg_r5_q;
    vlSelfRef.REGFILE__DOT__x8_s0_w = vlSelfRef.REGFILE__DOT__reg_r8_q;
    vlSelfRef.REGFILE__DOT__x3_gp_w = vlSelfRef.REGFILE__DOT__reg_r3_q;
    vlSelfRef.REGFILE__DOT__x6_t1_w = vlSelfRef.REGFILE__DOT__reg_r6_q;
    vlSelfRef.REGFILE__DOT__x1_ra_w = vlSelfRef.REGFILE__DOT__reg_r1_q;
    vlSelfRef.REGFILE__DOT__x4_tp_w = vlSelfRef.REGFILE__DOT__reg_r4_q;
    vlSelfRef.REGFILE__DOT__x2_sp_w = vlSelfRef.REGFILE__DOT__reg_r2_q;
    vlSelfRef.REGFILE__DOT__x9_s1_w = vlSelfRef.REGFILE__DOT__reg_r9_q;
    vlSelfRef.REGFILE__DOT__x13_a3_w = vlSelfRef.REGFILE__DOT__reg_r13_q;
    vlSelfRef.REGFILE__DOT__x14_a4_w = vlSelfRef.REGFILE__DOT__reg_r14_q;
    vlSelfRef.REGFILE__DOT__x15_a5_w = vlSelfRef.REGFILE__DOT__reg_r15_q;
    vlSelfRef.REGFILE__DOT__x16_a6_w = vlSelfRef.REGFILE__DOT__reg_r16_q;
    vlSelfRef.REGFILE__DOT__x17_a7_w = vlSelfRef.REGFILE__DOT__reg_r17_q;
    vlSelfRef.REGFILE__DOT__x18_s2_w = vlSelfRef.REGFILE__DOT__reg_r18_q;
    vlSelfRef.REGFILE__DOT__x19_s3_w = vlSelfRef.REGFILE__DOT__reg_r19_q;
    vlSelfRef.REGFILE__DOT__x20_s4_w = vlSelfRef.REGFILE__DOT__reg_r20_q;
    vlSelfRef.REGFILE__DOT__x21_s5_w = vlSelfRef.REGFILE__DOT__reg_r21_q;
    vlSelfRef.REGFILE__DOT__x22_s6_w = vlSelfRef.REGFILE__DOT__reg_r22_q;
    vlSelfRef.REGFILE__DOT__x23_s7_w = vlSelfRef.REGFILE__DOT__reg_r23_q;
    vlSelfRef.REGFILE__DOT__x24_s8_w = vlSelfRef.REGFILE__DOT__reg_r24_q;
    vlSelfRef.REGFILE__DOT__x25_s9_w = vlSelfRef.REGFILE__DOT__reg_r25_q;
    vlSelfRef.REGFILE__DOT__x26_s10_w = vlSelfRef.REGFILE__DOT__reg_r26_q;
    vlSelfRef.REGFILE__DOT__x27_s11_w = vlSelfRef.REGFILE__DOT__reg_r27_q;
    vlSelfRef.REGFILE__DOT__x28_t3_w = vlSelfRef.REGFILE__DOT__reg_r28_q;
}
