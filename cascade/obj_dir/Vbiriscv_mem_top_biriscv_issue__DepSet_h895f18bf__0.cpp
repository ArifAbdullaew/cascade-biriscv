// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_issue.h"

bool Vbiriscv_mem_top_biriscv_issue::complete_valid0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_valid0\n"); );
    VL_OUT8(complete_valid0__Vfuncrtn,0,0);
    // Body
    complete_valid0__Vfuncrtn = this->pipe0_valid_wb_w;
    // Final
    return (complete_valid0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_pc0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_pc0\n"); );
    VL_OUT(complete_pc0__Vfuncrtn,31,0);
    // Body
    complete_pc0__Vfuncrtn = this->pipe0_pc_wb_w;
    // Final
    return (complete_pc0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_opcode0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_opcode0\n"); );
    VL_OUT(complete_opcode0__Vfuncrtn,31,0);
    // Body
    complete_opcode0__Vfuncrtn = this->pipe0_opc_wb_w;
    // Final
    return (complete_opcode0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_ra0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_ra0\n"); );
    VL_OUT8(complete_ra0__Vfuncrtn,4,0);
    // Body
    complete_ra0__Vfuncrtn = this->v_pipe0_rs1_w;
    // Final
    return (complete_ra0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rb0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rb0\n"); );
    VL_OUT8(complete_rb0__Vfuncrtn,4,0);
    // Body
    complete_rb0__Vfuncrtn = this->v_pipe0_rs2_w;
    // Final
    return (complete_rb0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rd0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rd0\n"); );
    VL_OUT8(complete_rd0__Vfuncrtn,4,0);
    // Body
    complete_rd0__Vfuncrtn = this->pipe0_rd_wb_w;
    // Final
    return (complete_rd0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_ra_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_ra_val0\n"); );
    VL_OUT(complete_ra_val0__Vfuncrtn,31,0);
    // Body
    complete_ra_val0__Vfuncrtn = this->pipe0_ra_val_wb_w;
    // Final
    return (complete_ra_val0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rb_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rb_val0\n"); );
    VL_OUT(complete_rb_val0__Vfuncrtn,31,0);
    // Body
    complete_rb_val0__Vfuncrtn = this->pipe0_rb_val_wb_w;
    // Final
    return (complete_rb_val0__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rd_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rd_val0\n"); );
    VL_OUT(complete_rd_val0__Vfuncrtn,31,0);
    // Body
    complete_rd_val0__Vfuncrtn = ((0U != (IData)(this->pipe0_rd_wb_w))
                                   ? this->pipe0_result_wb_w
                                   : 0U);
    // Final
    return (complete_rd_val0__Vfuncrtn);
}

bool Vbiriscv_mem_top_biriscv_issue::complete_valid1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_valid1\n"); );
    VL_OUT8(complete_valid1__Vfuncrtn,0,0);
    // Body
    complete_valid1__Vfuncrtn = this->pipe1_valid_wb_w;
    // Final
    return (complete_valid1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_pc1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_pc1\n"); );
    VL_OUT(complete_pc1__Vfuncrtn,31,0);
    // Body
    complete_pc1__Vfuncrtn = this->pipe1_pc_wb_w;
    // Final
    return (complete_pc1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_opcode1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_opcode1\n"); );
    VL_OUT(complete_opcode1__Vfuncrtn,31,0);
    // Body
    complete_opcode1__Vfuncrtn = this->pipe1_opc_wb_w;
    // Final
    return (complete_opcode1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_ra1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_ra1\n"); );
    VL_OUT8(complete_ra1__Vfuncrtn,4,0);
    // Body
    complete_ra1__Vfuncrtn = this->v_pipe1_rs1_w;
    // Final
    return (complete_ra1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rb1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rb1\n"); );
    VL_OUT8(complete_rb1__Vfuncrtn,4,0);
    // Body
    complete_rb1__Vfuncrtn = this->v_pipe1_rs2_w;
    // Final
    return (complete_rb1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rd1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rd1\n"); );
    VL_OUT8(complete_rd1__Vfuncrtn,4,0);
    // Body
    complete_rd1__Vfuncrtn = this->pipe1_rd_wb_w;
    // Final
    return (complete_rd1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_ra_val1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_ra_val1\n"); );
    VL_OUT(complete_ra_val1__Vfuncrtn,31,0);
    // Body
    complete_ra_val1__Vfuncrtn = this->pipe1_ra_val_wb_w;
    // Final
    return (complete_ra_val1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rb_val1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rb_val1\n"); );
    VL_OUT(complete_rb_val1__Vfuncrtn,31,0);
    // Body
    complete_rb_val1__Vfuncrtn = this->pipe1_rb_val_wb_w;
    // Final
    return (complete_rb_val1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_rd_val1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_rd_val1\n"); );
    VL_OUT(complete_rd_val1__Vfuncrtn,31,0);
    // Body
    complete_rd_val1__Vfuncrtn = ((0U != (IData)(this->pipe1_rd_wb_w))
                                   ? this->pipe1_result_wb_w
                                   : 0U);
    // Final
    return (complete_rd_val1__Vfuncrtn);
}

uint32_t Vbiriscv_mem_top_biriscv_issue::complete_exception() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue::complete_exception\n"); );
    VL_OUT8(complete_exception__Vfuncrtn,5,0);
    // Body
    complete_exception__Vfuncrtn = ((IData)(this->pipe0_exception_wb_w) 
                                    | (IData)(this->pipe1_exception_wb_w));
    // Final
    return (complete_exception__Vfuncrtn);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__2(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_pipe1_ctrl__DOT__issue_branch_target_i 
        = vlSelfRef.branch_d_exec1_pc_i;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_branch_taken_i 
        = vlSelfRef.branch_d_exec1_request_i;
    vlSelfRef.u_pipe1_ctrl__DOT__branch_misaligned_w 
        = ((IData)(vlSelfRef.branch_d_exec1_request_i) 
           & (0U != (3U & vlSelfRef.branch_d_exec1_pc_i)));
    vlSelfRef.u_pipe0_ctrl__DOT__issue_branch_target_i 
        = vlSelfRef.branch_d_exec0_pc_i;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_branch_taken_i 
        = vlSelfRef.branch_d_exec0_request_i;
    vlSelfRef.u_pipe0_ctrl__DOT__branch_misaligned_w 
        = ((IData)(vlSelfRef.branch_d_exec0_request_i) 
           & (0U != (3U & vlSelfRef.branch_d_exec0_pc_i)));
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.issue_b_exec_w = vlSelfRef.fetch1_instr_exec_i;
    vlSelfRef.issue_b_div_w = vlSelfRef.fetch1_instr_div_i;
    vlSelfRef.issue_b_invalid_w = vlSelfRef.fetch1_instr_invalid_i;
    vlSelfRef.pipe1_ok_w = ((IData)(vlSelfRef.fetch1_instr_branch_i) 
                            | ((IData)(vlSelfRef.fetch1_instr_exec_i) 
                               | ((IData)(vlSelfRef.fetch1_instr_lsu_i) 
                                  | (IData)(vlSelfRef.fetch1_instr_mul_i))));
    vlSelfRef.issue_b_csr_w = vlSelfRef.fetch1_instr_csr_i;
    vlSelfRef.u_pipe0_ctrl__DOT__mem_exception_e2_i 
        = vlSelfRef.writeback_mem_exception_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mem_exception_e2_i 
        = vlSelfRef.writeback_mem_exception_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum;
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum;
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum;
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum;
    __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum;
    __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum;
    __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum = 0;
    IData/*31:0*/ __Vdly__pc_x_q;
    __Vdly__pc_x_q = 0;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    VlWide<3>/*95:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_418;
    VlWide<3>/*95:0*/ __Vtemp_464;
    VlWide<3>/*95:0*/ __Vtemp_511;
    VlWide<3>/*95:0*/ __Vtemp_557;
    VlWide<3>/*95:0*/ __Vtemp_604;
    VlWide<3>/*95:0*/ __Vtemp_650;
    VlWide<3>/*95:0*/ __Vtemp_697;
    VlWide<3>/*95:0*/ __Vtemp_743;
    VlWide<3>/*95:0*/ __Vtemp_790;
    VlWide<3>/*95:0*/ __Vtemp_836;
    VlWide<3>/*95:0*/ __Vtemp_883;
    VlWide<3>/*95:0*/ __Vtemp_929;
    VlWide<3>/*95:0*/ __Vtemp_976;
    VlWide<3>/*95:0*/ __Vtemp_1022;
    VlWide<3>/*95:0*/ __Vtemp_1069;
    VlWide<3>/*95:0*/ __Vtemp_1115;
    // Body
    __Vdly__pc_x_q = vlSelfRef.pc_x_q;
    if (vlSelfRef.rst_i) {
        __Vdly__pc_x_q = 0U;
        vlSelfRef.priv_x_q = 3U;
        vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_wb_q = 0U;
        vlSelfRef.csr_pending_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_wb_q = 0U;
        vlSelfRef.div_pending_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__npc_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__npc_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__valid_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__valid_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__ctrl_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__ctrl_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__npc_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__pc_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__opcode_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__npc_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__pc_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__opcode_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__result_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__result_e2_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__npc_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__npc_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__valid_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__exception_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__valid_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__exception_e1_q = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q = 0U;
    } else {
        if (vlSelfRef.branch_csr_request_i) {
            __Vdly__pc_x_q = vlSelfRef.branch_csr_pc_i;
            vlSelfRef.priv_x_q = vlSelfRef.branch_csr_priv_i;
        } else if (vlSelfRef.branch_d_exec1_request_i) {
            __Vdly__pc_x_q = vlSelfRef.branch_d_exec1_pc_i;
        } else if (vlSelfRef.branch_d_exec0_request_i) {
            __Vdly__pc_x_q = vlSelfRef.branch_d_exec0_pc_i;
        } else if (vlSelfRef.dual_issue_w) {
            __Vdly__pc_x_q = ((IData)(8U) + vlSelfRef.pc_x_q);
        } else if (vlSelfRef.single_issue_w) {
            __Vdly__pc_x_q = ((IData)(4U) + vlSelfRef.pc_x_q);
        }
        if ((1U & (~ (IData)(vlSelfRef.stall_w)))) {
            vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r;
            vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_e2_q;
            vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_wb_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_e2_q;
            if (vlSelfRef.pipe0_squash_e1_e2_w) {
                vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__npc_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_wb_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r;
                vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_e2_q;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e2_q;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e2_q;
                vlSelfRef.u_pipe1_ctrl__DOT__npc_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__npc_e2_q;
                vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__pc_e2_q;
                vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__opcode_e2_q;
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_wb_q 
                    = ((0U != (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r))
                        ? (0x37fU & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q))
                        : (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q));
                vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q 
                    = (((IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_w) 
                        & (IData)((0U != (6U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q)))))
                        ? vlSelfRef.writeback_mem_value_i
                        : (((IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_w) 
                            & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                               >> 5U)) ? vlSelfRef.writeback_mul_value_i
                            : vlSelfRef.u_pipe1_ctrl__DOT__result_e2_q));
            }
            vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_wb_q 
                = ((1U & (~ (IData)(vlSelfRef.pipe0_squash_e1_e2_w))) 
                   && (IData)(vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_e2_q));
            vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e2_q;
            vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e2_q;
            vlSelfRef.u_pipe0_ctrl__DOT__npc_wb_q = vlSelfRef.u_pipe0_ctrl__DOT__npc_e2_q;
            vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q = vlSelfRef.u_pipe0_ctrl__DOT__pc_e2_q;
            vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__opcode_e2_q;
            vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_q 
                = vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_w;
            vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_q 
                = vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_w;
            vlSelfRef.u_pipe0_ctrl__DOT__valid_wb_q 
                = ((0x20U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r))
                    ? (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q)
                    : ((0x10U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r))
                        ? ((8U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r))
                            ? ((4U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r))
                                ? ((1U & (~ (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r))) 
                                   && (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q))
                                : (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q))
                            : ((1U & (~ ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r) 
                                         >> 2U))) && (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q)))
                        : (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q)));
            vlSelfRef.u_pipe1_ctrl__DOT__valid_wb_q 
                = ((1U & (~ (IData)(vlSelfRef.pipe0_squash_e1_e2_w))) 
                   && ((0x20U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r))
                        ? (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q)
                        : ((0x10U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r))
                            ? ((8U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r))
                                ? ((4U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r))
                                    ? ((1U & (~ (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r))) 
                                       && (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q))
                                    : (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q))
                                : ((1U & (~ ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r) 
                                             >> 2U))) 
                                   && (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q)))
                            : (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q))));
            if (((IData)(vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_o) 
                 | (IData)(vlSelfRef.pipe0_squash_e1_e2_w))) {
                vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__npc_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__pc_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__opcode_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__result_e2_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_q 
                    = ((0x100U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q))
                        ? 0x20U : ((0U != (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e1_q))
                                    ? (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e1_q)
                                    : (IData)(vlSelfRef.csr_result_e1_exception_i)));
                vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_e2_q 
                    = vlSelfRef.csr_result_e1_wdata_i;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q;
                vlSelfRef.u_pipe1_ctrl__DOT__npc_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__npc_e1_q;
                vlSelfRef.u_pipe1_ctrl__DOT__pc_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q;
                vlSelfRef.u_pipe1_ctrl__DOT__opcode_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q;
                vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__valid_e1_q;
                if ((1U & (~ ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                              >> 8U)))) {
                    if ((0U != (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e1_q))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q = 0U;
                    }
                }
                vlSelfRef.u_pipe1_ctrl__DOT__result_e2_q 
                    = ((0x10U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q))
                        ? vlSelfRef.writeback_div_value_i
                        : ((8U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q))
                            ? vlSelfRef.csr_result_e1_value_i
                            : vlSelfRef.writeback_exec1_value_i));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q 
                    = vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q;
            }
            vlSelfRef.u_pipe0_ctrl__DOT__ctrl_wb_q 
                = ((0U != (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r))
                    ? (0x37fU & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q))
                    : (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q));
            vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q 
                = (((IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_w) 
                    & (IData)((0U != (6U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q)))))
                    ? vlSelfRef.writeback_mem_value_i
                    : (((IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_w) 
                        & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                           >> 5U)) ? vlSelfRef.writeback_mul_value_i
                        : vlSelfRef.u_pipe0_ctrl__DOT__result_e2_q));
            if (((IData)(vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_o) 
                 | (IData)(vlSelfRef.pipe1_squash_e1_e2_w))) {
                vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__npc_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__pc_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__opcode_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__result_e2_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_q 
                    = ((0x100U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q))
                        ? 0x20U : ((0U != (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e1_q))
                                    ? (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e1_q)
                                    : (IData)(vlSelfRef.csr_result_e1_exception_i)));
                vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_e2_q 
                    = vlSelfRef.csr_result_e1_wdata_i;
                vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q;
                vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q;
                vlSelfRef.u_pipe0_ctrl__DOT__npc_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__npc_e1_q;
                vlSelfRef.u_pipe0_ctrl__DOT__pc_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q;
                vlSelfRef.u_pipe0_ctrl__DOT__opcode_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q;
                vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__valid_e1_q;
                if ((1U & (~ ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                              >> 8U)))) {
                    if ((0U != (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e1_q))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q = 0U;
                    }
                }
                vlSelfRef.u_pipe0_ctrl__DOT__result_e2_q 
                    = ((0x10U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q))
                        ? vlSelfRef.writeback_div_value_i
                        : ((8U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q))
                            ? vlSelfRef.csr_result_e1_value_i
                            : vlSelfRef.writeback_exec0_value_i));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q 
                    = vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q;
            }
            vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_e2_q 
                = ((1U & (~ ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_o) 
                             | (IData)(vlSelfRef.pipe1_squash_e1_e2_w)))) 
                   && (IData)(vlSelfRef.csr_result_e1_write_i));
            vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_e2_q 
                = ((1U & (~ ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_o) 
                             | (IData)(vlSelfRef.pipe0_squash_e1_e2_w)))) 
                   && (IData)(vlSelfRef.csr_result_e1_write_i));
            if ((((IData)(vlSelfRef.opcode_a_issue_r) 
                  & (IData)(vlSelfRef.opcode_a_accept_r)) 
                 & (~ ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_o) 
                       | (IData)(vlSelfRef.pipe1_squash_e1_e2_w))))) {
                vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q 
                    = vlSelfRef.opcode0_ra_operand_o;
                vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q 
                    = vlSelfRef.opcode0_rb_operand_o;
                vlSelfRef.u_pipe0_ctrl__DOT__npc_e1_q 
                    = ((IData)(vlSelfRef.branch_d_exec0_request_i)
                        ? vlSelfRef.branch_d_exec0_pc_i
                        : ((IData)(4U) + vlSelfRef.opcode0_pc_o));
                vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q 
                    = vlSelfRef.opcode0_pc_o;
                vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q 
                    = vlSelfRef.opcode0_opcode_o;
                vlSelfRef.u_pipe0_ctrl__DOT__exception_e1_q 
                    = ((0U != (IData)(vlSelfRef.issue_a_fault_w))
                        ? (IData)(vlSelfRef.issue_a_fault_w)
                        : ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__branch_misaligned_w)
                            ? 0x10U : 0U));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3feU & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | (1U & (~ ((((IData)(vlSelfRef.issue_a_lsu_w) 
                                     | (IData)(vlSelfRef.issue_a_csr_w)) 
                                    | (IData)(vlSelfRef.issue_a_div_w)) 
                                   | (IData)(vlSelfRef.issue_a_mul_w)))));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fdU & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.issue_a_lsu_w) 
                            & (IData)(vlSelfRef.issue_a_sb_alloc_w)) 
                           & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                          << 1U));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fbU & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.issue_a_lsu_w) 
                            & (~ (IData)(vlSelfRef.issue_a_sb_alloc_w))) 
                           & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                          << 2U));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3e7U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.issue_a_div_w) 
                            & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                           << 4U) | (((IData)(vlSelfRef.issue_a_csr_w) 
                                      & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                                     << 3U)));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x39fU & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.issue_a_branch_w) 
                            & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                           << 6U) | (((IData)(vlSelfRef.issue_a_mul_w) 
                                      & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                                     << 5U)));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x27fU & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | (((IData)(vlSelfRef.take_interrupt_i) 
                           << 8U) | (((IData)(vlSelfRef.issue_a_sb_alloc_w) 
                                      & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                                     << 7U)));
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = (0x200U | (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q));
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__npc_e1_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__exception_e1_q = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q = 0U;
            }
            if ((((IData)(vlSelfRef.opcode_b_issue_r) 
                  & (IData)(vlSelfRef.opcode_b_accept_r)) 
                 & (~ ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_o) 
                       | (IData)(vlSelfRef.pipe0_squash_e1_e2_w))))) {
                vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q 
                    = vlSelfRef.opcode1_ra_operand_o;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q 
                    = vlSelfRef.opcode1_rb_operand_o;
                vlSelfRef.u_pipe1_ctrl__DOT__npc_e1_q 
                    = ((IData)(vlSelfRef.branch_d_exec1_request_i)
                        ? vlSelfRef.branch_d_exec1_pc_i
                        : ((IData)(4U) + vlSelfRef.opcode1_pc_o));
                vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q 
                    = vlSelfRef.opcode1_pc_o;
                vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q 
                    = vlSelfRef.opcode1_opcode_o;
                vlSelfRef.u_pipe1_ctrl__DOT__exception_e1_q 
                    = ((0U != (IData)(vlSelfRef.issue_b_fault_w))
                        ? (IData)(vlSelfRef.issue_b_fault_w)
                        : ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__branch_misaligned_w)
                            ? 0x10U : 0U));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fcU & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | (((((IData)(vlSelfRef.issue_b_lsu_w) 
                             & (IData)(vlSelfRef.issue_b_sb_alloc_w)) 
                            & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                           << 1U) | (1U & (~ ((IData)(vlSelfRef.issue_b_lsu_w) 
                                              | (IData)(vlSelfRef.issue_b_mul_w))))));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fbU & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.issue_b_lsu_w) 
                            & (~ (IData)(vlSelfRef.issue_b_sb_alloc_w))) 
                           & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                          << 2U));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = (0x3e7U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x39fU & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.issue_b_branch_w) 
                            & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                           << 6U) | (((IData)(vlSelfRef.issue_b_mul_w) 
                                      & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                                     << 5U)));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x27fU & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | (((IData)(vlSelfRef.take_interrupt_i) 
                           << 8U) | (((IData)(vlSelfRef.issue_b_sb_alloc_w) 
                                      & (~ (IData)(vlSelfRef.take_interrupt_i))) 
                                     << 7U)));
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = (0x200U | (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q));
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__npc_e1_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__exception_e1_q = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q = 0U;
            }
            vlSelfRef.u_pipe0_ctrl__DOT__valid_e1_q 
                = (((IData)(vlSelfRef.opcode_a_issue_r) 
                    & (IData)(vlSelfRef.opcode_a_accept_r)) 
                   & (~ ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_o) 
                         | (IData)(vlSelfRef.pipe1_squash_e1_e2_w))));
            vlSelfRef.u_pipe1_ctrl__DOT__valid_e1_q 
                = (((IData)(vlSelfRef.opcode_b_issue_r) 
                    & (IData)(vlSelfRef.opcode_b_accept_r)) 
                   & (~ ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_o) 
                         | (IData)(vlSelfRef.pipe0_squash_e1_e2_w))));
        }
        if (((IData)(vlSelfRef.pipe0_squash_e1_e2_w) 
             | (IData)(vlSelfRef.pipe1_squash_e1_e2_w))) {
            vlSelfRef.csr_pending_q = 0U;
            vlSelfRef.div_pending_q = 0U;
        } else {
            if (((IData)(vlSelfRef.csr_opcode_valid_o) 
                 & (IData)(vlSelfRef.issue_a_csr_w))) {
                vlSelfRef.csr_pending_q = 1U;
            } else if (vlSelfRef.pipe0_csr_wb_w) {
                vlSelfRef.csr_pending_q = 0U;
            }
            if (((IData)(vlSelfRef.div_opcode_valid_o) 
                 & (IData)(vlSelfRef.issue_a_div_w))) {
                vlSelfRef.div_pending_q = 1U;
            } else if (vlSelfRef.writeback_div_valid_i) {
                vlSelfRef.div_pending_q = 0U;
            }
        }
    }
    vlSelfRef.pc_x_q = __Vdly__pc_x_q;
    vlSelfRef.pipe0_exception_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_q;
    vlSelfRef.csr_writeback_wdata_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_write_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_wb_q;
    vlSelfRef.csr_writeback_write_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_wb_q;
    vlSelfRef.pipe1_exception_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q;
    vlSelfRef.csr_writeback_exception_o = ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q) 
                                           | (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q));
    vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_write_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_wb_q;
    vlSelfRef.pipe0_ra_val_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.pipe0_rb_val_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.pipe0_pc_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q;
    vlSelfRef.pipe0_opc_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q;
    vlSelfRef.v_pipe0_rs2_w = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U));
    vlSelfRef.v_pipe0_rs1_w = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                                        >> 0xfU));
    vlSelfRef.csr_writeback_waddr_o = (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                                       >> 0x14U);
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w 
        = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                    >> 7U));
    vlSelfRef.pipe1_ra_val_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.pipe1_rb_val_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.pipe1_pc_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q;
    if ((0U != (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q))) {
        vlSelfRef.csr_writeback_exception_pc_o = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q;
        vlSelfRef.csr_writeback_exception_addr_o = vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q;
    } else {
        vlSelfRef.csr_writeback_exception_pc_o = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q;
        vlSelfRef.csr_writeback_exception_addr_o = vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q;
    }
    vlSelfRef.u_pipe1_ctrl__DOT__csr_waddr_wb_o = (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                                   >> 0x14U);
    vlSelfRef.pipe1_opc_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q;
    vlSelfRef.v_pipe1_rs2_w = (0x1fU & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U));
    vlSelfRef.v_pipe1_rs1_w = (0x1fU & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                        >> 0xfU));
    vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w = (0x1fU 
                                                   & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                                      >> 7U));
    vlSelfRef.u_pipe0_ctrl__DOT__result_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q;
    vlSelfRef.pipe0_result_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__result_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q;
    vlSelfRef.pipe1_result_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q;
    vlSelfRef.u_pipe0_dec0_verif__DOT__pc_i = vlSelfRef.pipe0_pc_wb_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__pc_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_o;
    vlSelfRef.u_pipe0_dec0_verif__DOT__opcode_i = vlSelfRef.pipe0_opc_wb_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__opcode_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rb_idx_w 
        = vlSelfRef.v_pipe0_rs2_w;
    vlSelfRef.u_pipe0_dec0_verif__DOT__rb_idx_w = vlSelfRef.v_pipe0_rs2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__ra_idx_w 
        = vlSelfRef.v_pipe0_rs1_w;
    vlSelfRef.u_pipe0_dec0_verif__DOT__ra_idx_w = vlSelfRef.v_pipe0_rs1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_waddr_wb_o = vlSelfRef.csr_writeback_waddr_o;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U] 
            = __Vtemp_46[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U] 
            = __Vtemp_46[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U] 
            = __Vtemp_46[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U] 
            = __Vtemp_92[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U] 
            = __Vtemp_92[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U] 
            = __Vtemp_92[2U];
    }
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U];
    vlSelfRef.u_pipe0_dec0_verif__DOT__rd_idx_w = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__pc_i = vlSelfRef.pipe1_pc_wb_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__pc_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_o;
    vlSelfRef.u_pipe0_dec1_verif__DOT__opcode_i = vlSelfRef.pipe1_opc_wb_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__opcode_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__rb_idx_w 
        = vlSelfRef.v_pipe1_rs2_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__rb_idx_w = vlSelfRef.v_pipe1_rs2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__ra_idx_w 
        = vlSelfRef.v_pipe1_rs1_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__ra_idx_w = vlSelfRef.v_pipe1_rs1_w;
    __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum 
        = vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    __Vtemp_139[1U] = 0U;
    __Vtemp_139[2U] = 0U;
    __Vtemp_185[1U] = 0U;
    __Vtemp_185[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__regnum))) {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[0U] 
            = __Vtemp_139[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[1U] 
            = __Vtemp_139[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[2U] 
            = __Vtemp_139[2U];
    } else {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[0U] 
            = __Vtemp_185[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[1U] 
            = __Vtemp_185[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[2U] 
            = __Vtemp_185[2U];
    }
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__17__Vfuncout[2U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__rd_idx_w 
        = vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    __Vtemp_232[1U] = 0U;
    __Vtemp_232[2U] = 0U;
    __Vtemp_278[1U] = 0U;
    __Vtemp_278[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U] 
            = __Vtemp_232[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U] 
            = __Vtemp_232[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U] 
            = __Vtemp_232[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U] 
            = __Vtemp_278[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U] 
            = __Vtemp_278[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U] 
            = __Vtemp_278[2U];
    }
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U];
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum 
        = vlSelfRef.u_pipe0_dec0_verif__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
                    __Vtemp_325[0U] = 0x7436U;
                    __Vtemp_371[0U] = 0x6135U;
                } else {
                    __Vtemp_325[0U] = 0x7435U;
                    __Vtemp_371[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
                __Vtemp_325[0U] = 0x7434U;
                __Vtemp_371[0U] = 0x6133U;
            } else {
                __Vtemp_325[0U] = 0x7433U;
                __Vtemp_371[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
                __Vtemp_325[0U] = 0x733131U;
                __Vtemp_371[0U] = 0x6131U;
            } else {
                __Vtemp_325[0U] = 0x733130U;
                __Vtemp_371[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
            __Vtemp_325[0U] = 0x7339U;
            __Vtemp_371[0U] = 0x7331U;
        } else {
            __Vtemp_325[0U] = 0x7338U;
            __Vtemp_371[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
                __Vtemp_325[0U] = 0x7337U;
                __Vtemp_371[0U] = 0x7432U;
            } else {
                __Vtemp_325[0U] = 0x7336U;
                __Vtemp_371[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
            __Vtemp_325[0U] = 0x7335U;
            __Vtemp_371[0U] = 0x7430U;
        } else {
            __Vtemp_325[0U] = 0x7334U;
            __Vtemp_371[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
            __Vtemp_325[0U] = 0x7333U;
            __Vtemp_371[0U] = 0x6770U;
        } else {
            __Vtemp_325[0U] = 0x7332U;
            __Vtemp_371[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
        __Vtemp_325[0U] = 0x6137U;
        __Vtemp_371[0U] = 0x7261U;
    } else {
        __Vtemp_325[0U] = 0x6136U;
        __Vtemp_371[0U] = 0x7a65726fU;
    }
    __Vtemp_325[1U] = 0U;
    __Vtemp_325[2U] = 0U;
    __Vtemp_371[1U] = 0U;
    __Vtemp_371[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__regnum))) {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[0U] 
            = __Vtemp_325[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[1U] 
            = __Vtemp_325[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[2U] 
            = __Vtemp_325[2U];
    } else {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[0U] 
            = __Vtemp_371[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[1U] 
            = __Vtemp_371[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[2U] 
            = __Vtemp_371[2U];
    }
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__13__Vfuncout[2U];
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                    __Vtemp_418[0U] = 0x7436U;
                    __Vtemp_464[0U] = 0x6135U;
                } else {
                    __Vtemp_418[0U] = 0x7435U;
                    __Vtemp_464[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_418[0U] = 0x7434U;
                __Vtemp_464[0U] = 0x6133U;
            } else {
                __Vtemp_418[0U] = 0x7433U;
                __Vtemp_464[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_418[0U] = 0x733131U;
                __Vtemp_464[0U] = 0x6131U;
            } else {
                __Vtemp_418[0U] = 0x733130U;
                __Vtemp_464[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_418[0U] = 0x7339U;
            __Vtemp_464[0U] = 0x7331U;
        } else {
            __Vtemp_418[0U] = 0x7338U;
            __Vtemp_464[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_418[0U] = 0x7337U;
                __Vtemp_464[0U] = 0x7432U;
            } else {
                __Vtemp_418[0U] = 0x7336U;
                __Vtemp_464[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_418[0U] = 0x7335U;
            __Vtemp_464[0U] = 0x7430U;
        } else {
            __Vtemp_418[0U] = 0x7334U;
            __Vtemp_464[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_418[0U] = 0x7333U;
            __Vtemp_464[0U] = 0x6770U;
        } else {
            __Vtemp_418[0U] = 0x7332U;
            __Vtemp_464[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vtemp_418[0U] = 0x6137U;
        __Vtemp_464[0U] = 0x7261U;
    } else {
        __Vtemp_418[0U] = 0x6136U;
        __Vtemp_464[0U] = 0x7a65726fU;
    }
    __Vtemp_418[1U] = 0U;
    __Vtemp_418[2U] = 0U;
    __Vtemp_464[1U] = 0U;
    __Vtemp_464[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_418[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_418[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_418[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_464[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_464[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_464[2U];
    }
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U];
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum 
        = vlSelfRef.u_pipe0_dec0_verif__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                    __Vtemp_511[0U] = 0x7436U;
                    __Vtemp_557[0U] = 0x6135U;
                } else {
                    __Vtemp_511[0U] = 0x7435U;
                    __Vtemp_557[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                __Vtemp_511[0U] = 0x7434U;
                __Vtemp_557[0U] = 0x6133U;
            } else {
                __Vtemp_511[0U] = 0x7433U;
                __Vtemp_557[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                __Vtemp_511[0U] = 0x733131U;
                __Vtemp_557[0U] = 0x6131U;
            } else {
                __Vtemp_511[0U] = 0x733130U;
                __Vtemp_557[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            __Vtemp_511[0U] = 0x7339U;
            __Vtemp_557[0U] = 0x7331U;
        } else {
            __Vtemp_511[0U] = 0x7338U;
            __Vtemp_557[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                __Vtemp_511[0U] = 0x7337U;
                __Vtemp_557[0U] = 0x7432U;
            } else {
                __Vtemp_511[0U] = 0x7336U;
                __Vtemp_557[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            __Vtemp_511[0U] = 0x7335U;
            __Vtemp_557[0U] = 0x7430U;
        } else {
            __Vtemp_511[0U] = 0x7334U;
            __Vtemp_557[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            __Vtemp_511[0U] = 0x7333U;
            __Vtemp_557[0U] = 0x6770U;
        } else {
            __Vtemp_511[0U] = 0x7332U;
            __Vtemp_557[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        __Vtemp_511[0U] = 0x6137U;
        __Vtemp_557[0U] = 0x7261U;
    } else {
        __Vtemp_511[0U] = 0x6136U;
        __Vtemp_557[0U] = 0x7a65726fU;
    }
    __Vtemp_511[1U] = 0U;
    __Vtemp_511[2U] = 0U;
    __Vtemp_557[1U] = 0U;
    __Vtemp_557[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[0U] 
            = __Vtemp_511[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[1U] 
            = __Vtemp_511[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[2U] 
            = __Vtemp_511[2U];
    } else {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[0U] 
            = __Vtemp_557[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[1U] 
            = __Vtemp_557[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[2U] 
            = __Vtemp_557[2U];
    }
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[2U];
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum 
        = vlSelfRef.u_pipe0_dec0_verif__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                    __Vtemp_604[0U] = 0x7436U;
                    __Vtemp_650[0U] = 0x6135U;
                } else {
                    __Vtemp_604[0U] = 0x7435U;
                    __Vtemp_650[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                __Vtemp_604[0U] = 0x7434U;
                __Vtemp_650[0U] = 0x6133U;
            } else {
                __Vtemp_604[0U] = 0x7433U;
                __Vtemp_650[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                __Vtemp_604[0U] = 0x733131U;
                __Vtemp_650[0U] = 0x6131U;
            } else {
                __Vtemp_604[0U] = 0x733130U;
                __Vtemp_650[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            __Vtemp_604[0U] = 0x7339U;
            __Vtemp_650[0U] = 0x7331U;
        } else {
            __Vtemp_604[0U] = 0x7338U;
            __Vtemp_650[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                __Vtemp_604[0U] = 0x7337U;
                __Vtemp_650[0U] = 0x7432U;
            } else {
                __Vtemp_604[0U] = 0x7336U;
                __Vtemp_650[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            __Vtemp_604[0U] = 0x7335U;
            __Vtemp_650[0U] = 0x7430U;
        } else {
            __Vtemp_604[0U] = 0x7334U;
            __Vtemp_650[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            __Vtemp_604[0U] = 0x7333U;
            __Vtemp_650[0U] = 0x6770U;
        } else {
            __Vtemp_604[0U] = 0x7332U;
            __Vtemp_650[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        __Vtemp_604[0U] = 0x6137U;
        __Vtemp_650[0U] = 0x7261U;
    } else {
        __Vtemp_604[0U] = 0x6136U;
        __Vtemp_650[0U] = 0x7a65726fU;
    }
    __Vtemp_604[1U] = 0U;
    __Vtemp_604[2U] = 0U;
    __Vtemp_650[1U] = 0U;
    __Vtemp_650[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[0U] 
            = __Vtemp_604[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[1U] 
            = __Vtemp_604[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[2U] 
            = __Vtemp_604[2U];
    } else {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[0U] 
            = __Vtemp_650[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[1U] 
            = __Vtemp_650[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[2U] 
            = __Vtemp_650[2U];
    }
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[2U];
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                    __Vtemp_697[0U] = 0x7436U;
                    __Vtemp_743[0U] = 0x6135U;
                } else {
                    __Vtemp_697[0U] = 0x7435U;
                    __Vtemp_743[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                __Vtemp_697[0U] = 0x7434U;
                __Vtemp_743[0U] = 0x6133U;
            } else {
                __Vtemp_697[0U] = 0x7433U;
                __Vtemp_743[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                __Vtemp_697[0U] = 0x733131U;
                __Vtemp_743[0U] = 0x6131U;
            } else {
                __Vtemp_697[0U] = 0x733130U;
                __Vtemp_743[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            __Vtemp_697[0U] = 0x7339U;
            __Vtemp_743[0U] = 0x7331U;
        } else {
            __Vtemp_697[0U] = 0x7338U;
            __Vtemp_743[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                __Vtemp_697[0U] = 0x7337U;
                __Vtemp_743[0U] = 0x7432U;
            } else {
                __Vtemp_697[0U] = 0x7336U;
                __Vtemp_743[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            __Vtemp_697[0U] = 0x7335U;
            __Vtemp_743[0U] = 0x7430U;
        } else {
            __Vtemp_697[0U] = 0x7334U;
            __Vtemp_743[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            __Vtemp_697[0U] = 0x7333U;
            __Vtemp_743[0U] = 0x6770U;
        } else {
            __Vtemp_697[0U] = 0x7332U;
            __Vtemp_743[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        __Vtemp_697[0U] = 0x6137U;
        __Vtemp_743[0U] = 0x7261U;
    } else {
        __Vtemp_697[0U] = 0x6136U;
        __Vtemp_743[0U] = 0x7a65726fU;
    }
    __Vtemp_697[1U] = 0U;
    __Vtemp_697[2U] = 0U;
    __Vtemp_743[1U] = 0U;
    __Vtemp_743[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[0U] 
            = __Vtemp_697[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[1U] 
            = __Vtemp_697[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[2U] 
            = __Vtemp_697[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[0U] 
            = __Vtemp_743[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[1U] 
            = __Vtemp_743[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[2U] 
            = __Vtemp_743[2U];
    }
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[0U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[1U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[2U];
    __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum 
        = vlSelfRef.u_pipe0_dec1_verif__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                    __Vtemp_790[0U] = 0x7436U;
                    __Vtemp_836[0U] = 0x6135U;
                } else {
                    __Vtemp_790[0U] = 0x7435U;
                    __Vtemp_836[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                __Vtemp_790[0U] = 0x7434U;
                __Vtemp_836[0U] = 0x6133U;
            } else {
                __Vtemp_790[0U] = 0x7433U;
                __Vtemp_836[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                __Vtemp_790[0U] = 0x733131U;
                __Vtemp_836[0U] = 0x6131U;
            } else {
                __Vtemp_790[0U] = 0x733130U;
                __Vtemp_836[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            __Vtemp_790[0U] = 0x7339U;
            __Vtemp_836[0U] = 0x7331U;
        } else {
            __Vtemp_790[0U] = 0x7338U;
            __Vtemp_836[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                __Vtemp_790[0U] = 0x7337U;
                __Vtemp_836[0U] = 0x7432U;
            } else {
                __Vtemp_790[0U] = 0x7336U;
                __Vtemp_836[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            __Vtemp_790[0U] = 0x7335U;
            __Vtemp_836[0U] = 0x7430U;
        } else {
            __Vtemp_790[0U] = 0x7334U;
            __Vtemp_836[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            __Vtemp_790[0U] = 0x7333U;
            __Vtemp_836[0U] = 0x6770U;
        } else {
            __Vtemp_790[0U] = 0x7332U;
            __Vtemp_836[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        __Vtemp_790[0U] = 0x6137U;
        __Vtemp_836[0U] = 0x7261U;
    } else {
        __Vtemp_790[0U] = 0x6136U;
        __Vtemp_836[0U] = 0x7a65726fU;
    }
    __Vtemp_790[1U] = 0U;
    __Vtemp_790[2U] = 0U;
    __Vtemp_836[1U] = 0U;
    __Vtemp_836[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[0U] 
            = __Vtemp_790[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[1U] 
            = __Vtemp_790[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[2U] 
            = __Vtemp_790[2U];
    } else {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[0U] 
            = __Vtemp_836[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[1U] 
            = __Vtemp_836[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[2U] 
            = __Vtemp_836[2U];
    }
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[2U];
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                    __Vtemp_883[0U] = 0x7436U;
                    __Vtemp_929[0U] = 0x6135U;
                } else {
                    __Vtemp_883[0U] = 0x7435U;
                    __Vtemp_929[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                __Vtemp_883[0U] = 0x7434U;
                __Vtemp_929[0U] = 0x6133U;
            } else {
                __Vtemp_883[0U] = 0x7433U;
                __Vtemp_929[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                __Vtemp_883[0U] = 0x733131U;
                __Vtemp_929[0U] = 0x6131U;
            } else {
                __Vtemp_883[0U] = 0x733130U;
                __Vtemp_929[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            __Vtemp_883[0U] = 0x7339U;
            __Vtemp_929[0U] = 0x7331U;
        } else {
            __Vtemp_883[0U] = 0x7338U;
            __Vtemp_929[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                __Vtemp_883[0U] = 0x7337U;
                __Vtemp_929[0U] = 0x7432U;
            } else {
                __Vtemp_883[0U] = 0x7336U;
                __Vtemp_929[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            __Vtemp_883[0U] = 0x7335U;
            __Vtemp_929[0U] = 0x7430U;
        } else {
            __Vtemp_883[0U] = 0x7334U;
            __Vtemp_929[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            __Vtemp_883[0U] = 0x7333U;
            __Vtemp_929[0U] = 0x6770U;
        } else {
            __Vtemp_883[0U] = 0x7332U;
            __Vtemp_929[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        __Vtemp_883[0U] = 0x6137U;
        __Vtemp_929[0U] = 0x7261U;
    } else {
        __Vtemp_883[0U] = 0x6136U;
        __Vtemp_929[0U] = 0x7a65726fU;
    }
    __Vtemp_883[1U] = 0U;
    __Vtemp_883[2U] = 0U;
    __Vtemp_929[1U] = 0U;
    __Vtemp_929[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[0U] 
            = __Vtemp_883[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[1U] 
            = __Vtemp_883[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[2U] 
            = __Vtemp_883[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[0U] 
            = __Vtemp_929[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[1U] 
            = __Vtemp_929[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[2U] 
            = __Vtemp_929[2U];
    }
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[0U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[1U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[2U];
    __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum 
        = vlSelfRef.u_pipe0_dec1_verif__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                    __Vtemp_976[0U] = 0x7436U;
                    __Vtemp_1022[0U] = 0x6135U;
                } else {
                    __Vtemp_976[0U] = 0x7435U;
                    __Vtemp_1022[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                __Vtemp_976[0U] = 0x7434U;
                __Vtemp_1022[0U] = 0x6133U;
            } else {
                __Vtemp_976[0U] = 0x7433U;
                __Vtemp_1022[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                __Vtemp_976[0U] = 0x733131U;
                __Vtemp_1022[0U] = 0x6131U;
            } else {
                __Vtemp_976[0U] = 0x733130U;
                __Vtemp_1022[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            __Vtemp_976[0U] = 0x7339U;
            __Vtemp_1022[0U] = 0x7331U;
        } else {
            __Vtemp_976[0U] = 0x7338U;
            __Vtemp_1022[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                __Vtemp_976[0U] = 0x7337U;
                __Vtemp_1022[0U] = 0x7432U;
            } else {
                __Vtemp_976[0U] = 0x7336U;
                __Vtemp_1022[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            __Vtemp_976[0U] = 0x7335U;
            __Vtemp_1022[0U] = 0x7430U;
        } else {
            __Vtemp_976[0U] = 0x7334U;
            __Vtemp_1022[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            __Vtemp_976[0U] = 0x7333U;
            __Vtemp_1022[0U] = 0x6770U;
        } else {
            __Vtemp_976[0U] = 0x7332U;
            __Vtemp_1022[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        __Vtemp_976[0U] = 0x6137U;
        __Vtemp_1022[0U] = 0x7261U;
    } else {
        __Vtemp_976[0U] = 0x6136U;
        __Vtemp_1022[0U] = 0x7a65726fU;
    }
    __Vtemp_976[1U] = 0U;
    __Vtemp_976[2U] = 0U;
    __Vtemp_1022[1U] = 0U;
    __Vtemp_1022[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[0U] 
            = __Vtemp_976[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[1U] 
            = __Vtemp_976[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[2U] 
            = __Vtemp_976[2U];
    } else {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[0U] 
            = __Vtemp_1022[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[1U] 
            = __Vtemp_1022[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[2U] 
            = __Vtemp_1022[2U];
    }
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[2U];
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
                    __Vtemp_1069[0U] = 0x7436U;
                    __Vtemp_1115[0U] = 0x6135U;
                } else {
                    __Vtemp_1069[0U] = 0x7435U;
                    __Vtemp_1115[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
                __Vtemp_1069[0U] = 0x7434U;
                __Vtemp_1115[0U] = 0x6133U;
            } else {
                __Vtemp_1069[0U] = 0x7433U;
                __Vtemp_1115[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
                __Vtemp_1069[0U] = 0x733131U;
                __Vtemp_1115[0U] = 0x6131U;
            } else {
                __Vtemp_1069[0U] = 0x733130U;
                __Vtemp_1115[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
            __Vtemp_1069[0U] = 0x7339U;
            __Vtemp_1115[0U] = 0x7331U;
        } else {
            __Vtemp_1069[0U] = 0x7338U;
            __Vtemp_1115[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
                __Vtemp_1069[0U] = 0x7337U;
                __Vtemp_1115[0U] = 0x7432U;
            } else {
                __Vtemp_1069[0U] = 0x7336U;
                __Vtemp_1115[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
            __Vtemp_1069[0U] = 0x7335U;
            __Vtemp_1115[0U] = 0x7430U;
        } else {
            __Vtemp_1069[0U] = 0x7334U;
            __Vtemp_1115[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
            __Vtemp_1069[0U] = 0x7333U;
            __Vtemp_1115[0U] = 0x6770U;
        } else {
            __Vtemp_1069[0U] = 0x7332U;
            __Vtemp_1115[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
        __Vtemp_1069[0U] = 0x6137U;
        __Vtemp_1115[0U] = 0x7261U;
    } else {
        __Vtemp_1069[0U] = 0x6136U;
        __Vtemp_1115[0U] = 0x7a65726fU;
    }
    __Vtemp_1069[1U] = 0U;
    __Vtemp_1069[2U] = 0U;
    __Vtemp_1115[1U] = 0U;
    __Vtemp_1115[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[0U] 
            = __Vtemp_1069[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[1U] 
            = __Vtemp_1069[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[2U] 
            = __Vtemp_1069[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[0U] 
            = __Vtemp_1115[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[1U] 
            = __Vtemp_1115[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[2U] 
            = __Vtemp_1115[2U];
    }
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[0U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[1U];
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__11__Vfuncout[2U];
    vlSelfRef.pipe0_mul_e2_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U));
    vlSelfRef.pipe0_load_e2_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                       >> 1U));
    vlSelfRef.pipe1_mul_e2_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U));
    vlSelfRef.pipe1_load_e2_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                       >> 1U));
    vlSelfRef.u_pipe0_ctrl__DOT__mul_e2_o = vlSelfRef.pipe0_mul_e2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__load_e2_o = vlSelfRef.pipe0_load_e2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__load_store_e2_w = 
        (1U & ((IData)(vlSelfRef.pipe0_load_e2_w) | 
               ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                >> 2U)));
    vlSelfRef.u_pipe1_ctrl__DOT__mul_e2_o = vlSelfRef.pipe1_mul_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__load_e2_o = vlSelfRef.pipe1_load_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__load_store_e2_w = 
        (1U & ((IData)(vlSelfRef.pipe1_load_e2_w) | 
               ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                >> 2U)));
    vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.pipe0_operand_ra_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.pipe0_operand_rb_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q;
    vlSelfRef.pipe0_pc_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q;
    vlSelfRef.pipe0_opcode_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.pipe1_operand_ra_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.pipe1_operand_rb_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q;
    vlSelfRef.pipe1_pc_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q;
    vlSelfRef.pipe1_opcode_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__alu_e1_w = (1U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q));
    vlSelfRef.u_pipe0_ctrl__DOT__csr_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                   >> 3U));
    vlSelfRef.pipe0_branch_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                         >> 6U));
    vlSelfRef.pipe0_load_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                       >> 1U));
    vlSelfRef.pipe0_mul_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U));
    vlSelfRef.pipe0_store_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                        >> 2U));
    vlSelfRef.pipe0_rd_e1_w = (0x1fU & ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                       >> 7U)))) 
                                        & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q 
                                           >> 7U)));
    vlSelfRef.u_pipe0_ctrl__DOT__div_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                   >> 4U));
    vlSelfRef.u_pipe1_ctrl__DOT__alu_e1_w = (1U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q));
    vlSelfRef.u_pipe1_ctrl__DOT__csr_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 3U));
    vlSelfRef.pipe1_branch_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                         >> 6U));
    vlSelfRef.pipe1_load_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                       >> 1U));
    vlSelfRef.pipe1_mul_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U));
    vlSelfRef.pipe1_store_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                        >> 2U));
    vlSelfRef.pipe1_rd_e1_w = (0x1fU & ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                       >> 7U)))) 
                                        & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q 
                                           >> 7U)));
    vlSelfRef.u_pipe1_ctrl__DOT__div_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 4U));
    vlSelfRef.u_pipe0_ctrl__DOT__branch_e1_o = vlSelfRef.pipe0_branch_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__load_e1_o = vlSelfRef.pipe0_load_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__mul_e1_o = vlSelfRef.pipe0_mul_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__store_e1_o = vlSelfRef.pipe0_store_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__rd_e1_o = vlSelfRef.pipe0_rd_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__branch_e1_o = vlSelfRef.pipe1_branch_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__load_e1_o = vlSelfRef.pipe1_load_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__mul_e1_o = vlSelfRef.pipe1_mul_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__store_e1_o = vlSelfRef.pipe1_store_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__rd_e1_o = vlSelfRef.pipe1_rd_e1_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_pipe0_ctrl__DOT__mem_complete_i = vlSelfRef.writeback_mem_valid_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mem_complete_i = vlSelfRef.writeback_mem_valid_i;
    vlSelfRef.u_pipe0_ctrl__DOT__mem_result_e2_i = vlSelfRef.writeback_mem_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mem_result_e2_i = vlSelfRef.writeback_mem_value_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__2(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_exception_e1_i 
        = vlSelfRef.csr_result_e1_exception_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_exception_e1_i 
        = vlSelfRef.csr_result_e1_exception_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_wdata_e1_i 
        = vlSelfRef.csr_result_e1_wdata_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_wdata_e1_i 
        = vlSelfRef.csr_result_e1_wdata_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_write_e1_i 
        = vlSelfRef.csr_result_e1_write_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_write_e1_i 
        = vlSelfRef.csr_result_e1_write_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_value_e1_i 
        = vlSelfRef.csr_result_e1_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_value_e1_i 
        = vlSelfRef.csr_result_e1_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__take_interrupt_i = vlSelfRef.take_interrupt_i;
    vlSelfRef.u_pipe1_ctrl__DOT__take_interrupt_i = vlSelfRef.take_interrupt_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__3(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_sequent__TOP__biriscv_mem_top__u_core__u_issue__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.issue_b_branch_w = vlSelfRef.fetch1_instr_branch_i;
    vlSelfRef.issue_b_lsu_w = vlSelfRef.fetch1_instr_lsu_i;
    vlSelfRef.issue_b_sb_alloc_w = vlSelfRef.fetch1_instr_rd_valid_i;
    vlSelfRef.issue_b_mul_w = vlSelfRef.fetch1_instr_mul_i;
    vlSelfRef.u_pipe0_ctrl__DOT__div_complete_i = vlSelfRef.writeback_div_valid_i;
    vlSelfRef.u_pipe1_ctrl__DOT__div_complete_i = vlSelfRef.writeback_div_valid_i;
    vlSelfRef.u_pipe0_ctrl__DOT__mul_result_e2_i = vlSelfRef.writeback_mul_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mul_result_e2_i = vlSelfRef.writeback_mul_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__alu_result_e1_i = vlSelfRef.writeback_exec0_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__div_result_i = vlSelfRef.writeback_div_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__div_result_i = vlSelfRef.writeback_div_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__alu_result_e1_i = vlSelfRef.writeback_exec1_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_branch_i = vlSelfRef.issue_b_branch_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_lsu_i = vlSelfRef.issue_b_lsu_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_rd_valid_i = vlSelfRef.issue_b_sb_alloc_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_mul_i = vlSelfRef.issue_b_mul_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h8df87ebf_1_0;
    __VdfgRegularize_h8df87ebf_1_0 = 0;
    // Body
    vlSelfRef.branch_info_is_taken_o = (((IData)(vlSelfRef.branch_exec1_is_taken_i) 
                                         & (IData)(vlSelfRef.pipe1_branch_e1_w)) 
                                        | ((IData)(vlSelfRef.branch_exec0_is_taken_i) 
                                           & (IData)(vlSelfRef.pipe0_branch_e1_w)));
    vlSelfRef.branch_info_is_not_taken_o = (((IData)(vlSelfRef.branch_exec1_is_not_taken_i) 
                                             & (IData)(vlSelfRef.pipe1_branch_e1_w)) 
                                            | ((IData)(vlSelfRef.branch_exec0_is_not_taken_i) 
                                               & (IData)(vlSelfRef.pipe0_branch_e1_w)));
    vlSelfRef.branch_info_is_jmp_o = (((IData)(vlSelfRef.branch_exec1_is_jmp_i) 
                                       & (IData)(vlSelfRef.pipe1_branch_e1_w)) 
                                      | ((IData)(vlSelfRef.branch_exec0_is_jmp_i) 
                                         & (IData)(vlSelfRef.pipe0_branch_e1_w)));
    vlSelfRef.branch_info_is_call_o = (((IData)(vlSelfRef.branch_exec1_is_call_i) 
                                        & (IData)(vlSelfRef.pipe1_branch_e1_w)) 
                                       | ((IData)(vlSelfRef.branch_exec0_is_call_i) 
                                          & (IData)(vlSelfRef.pipe0_branch_e1_w)));
    vlSelfRef.branch_info_is_ret_o = (((IData)(vlSelfRef.branch_exec1_is_ret_i) 
                                       & (IData)(vlSelfRef.pipe1_branch_e1_w)) 
                                      | ((IData)(vlSelfRef.branch_exec0_is_ret_i) 
                                         & (IData)(vlSelfRef.pipe0_branch_e1_w)));
    __VdfgRegularize_h8df87ebf_1_0 = ((IData)(vlSelfRef.branch_exec1_request_i) 
                                      & (IData)(vlSelfRef.pipe1_branch_e1_w));
    if (__VdfgRegularize_h8df87ebf_1_0) {
        vlSelfRef.branch_info_pc_o = vlSelfRef.branch_exec1_pc_i;
        vlSelfRef.branch_info_source_o = vlSelfRef.branch_exec1_source_i;
    } else {
        vlSelfRef.branch_info_pc_o = vlSelfRef.branch_exec0_pc_i;
        vlSelfRef.branch_info_source_o = vlSelfRef.branch_exec0_source_i;
    }
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__3(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_pc_o = ((IData)(vlSelfRef.branch_csr_request_i)
                              ? vlSelfRef.branch_csr_pc_i
                              : vlSelfRef.pc_x_q);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__4(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___nba_comb__TOP__biriscv_mem_top__u_core__u_issue__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_priv_o = ((IData)(vlSelfRef.branch_csr_request_i)
                                ? (IData)(vlSelfRef.branch_csr_priv_i)
                                : (IData)(vlSelfRef.priv_x_q));
}
