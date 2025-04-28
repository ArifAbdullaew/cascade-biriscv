// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_issue.h"

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h8df87ebf_1_0;
    __VdfgRegularize_h8df87ebf_1_0 = 0;
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
    vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q;
    vlSelfRef.pipe0_opcode_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__alu_e1_w = (1U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q));
    vlSelfRef.u_pipe0_ctrl__DOT__csr_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                   >> 3U));
    vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q;
    vlSelfRef.pipe1_opcode_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_waddr_wb_o = (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                                   >> 0x14U);
    vlSelfRef.u_pipe1_ctrl__DOT__alu_e1_w = (1U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q));
    vlSelfRef.u_pipe1_ctrl__DOT__csr_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 3U));
    vlSelfRef.u_pipe0_ctrl__DOT__csr_write_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_q;
    vlSelfRef.pipe0_exception_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q;
    vlSelfRef.pipe1_exception_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__result_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__result_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q;
    vlSelfRef.pipe0_ra_val_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.pipe0_rb_val_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.pipe1_ra_val_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_wb_q;
    vlSelfRef.pipe1_rb_val_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q;
    vlSelfRef.pipe0_pc_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__pc_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.pipe0_operand_ra_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_o = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.pipe0_operand_rb_e1_w = vlSelfRef.u_pipe0_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q;
    vlSelfRef.pipe1_pc_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__pc_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.pipe1_operand_ra_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_ra_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_o = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.pipe1_operand_rb_e1_w = vlSelfRef.u_pipe1_ctrl__DOT__operand_rb_e1_q;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_write_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__csr_wr_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__csr_wdata_wb_q;
    vlSelfRef.pipe0_mul_e2_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U));
    vlSelfRef.pipe1_mul_e2_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U));
    vlSelfRef.pipe0_pc_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q;
    vlSelfRef.pipe1_pc_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q;
    vlSelfRef.pipe0_opc_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q;
    vlSelfRef.pipe1_opc_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o = vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q;
    vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o = vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q;
    vlSelfRef.v_pipe0_rs2_w = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U));
    vlSelfRef.v_pipe1_rs2_w = (0x1fU & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U));
    if ((0U != (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q))) {
        vlSelfRef.csr_writeback_exception_addr_o = vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q;
        vlSelfRef.csr_writeback_exception_pc_o = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_q;
    } else {
        vlSelfRef.csr_writeback_exception_addr_o = vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q;
        vlSelfRef.csr_writeback_exception_pc_o = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_q;
    }
    vlSelfRef.v_pipe0_rs1_w = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                                        >> 0xfU));
    vlSelfRef.v_pipe1_rs1_w = (0x1fU & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                        >> 0xfU));
    vlSelfRef.pipe0_branch_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                         >> 6U));
    vlSelfRef.pipe1_branch_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                         >> 6U));
    vlSelfRef.csr_writeback_wdata_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wdata_wb_q;
    vlSelfRef.csr_writeback_write_o = vlSelfRef.u_pipe0_ctrl__DOT__csr_wr_wb_q;
    vlSelfRef.csr_writeback_waddr_o = (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                                       >> 0x14U);
    vlSelfRef.csr_writeback_exception_o = ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_wb_q) 
                                           | (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_wb_q));
    vlSelfRef.pipe0_result_wb_w = vlSelfRef.u_pipe0_ctrl__DOT__result_wb_q;
    vlSelfRef.pipe1_result_wb_w = vlSelfRef.u_pipe1_ctrl__DOT__result_wb_q;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w 
        = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_q 
                    >> 7U));
    vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w = (0x1fU 
                                                   & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_q 
                                                      >> 7U));
    vlSelfRef.pipe0_load_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                       >> 1U));
    vlSelfRef.pipe0_mul_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U));
    vlSelfRef.pipe1_load_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                       >> 1U));
    vlSelfRef.pipe1_mul_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U));
    vlSelfRef.pipe0_store_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                        >> 2U));
    vlSelfRef.pipe1_store_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                        >> 2U));
    vlSelfRef.pipe0_rd_e1_w = (0x1fU & ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                       >> 7U)))) 
                                        & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_e1_q 
                                           >> 7U)));
    vlSelfRef.pipe1_rd_e1_w = (0x1fU & ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                       >> 7U)))) 
                                        & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_e1_q 
                                           >> 7U)));
    vlSelfRef.u_pipe0_ctrl__DOT__div_e1_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                   >> 4U));
    vlSelfRef.u_pipe1_ctrl__DOT__div_e1_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 4U));
    vlSelfRef.pipe1_load_e2_w = (1U & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                       >> 1U));
    vlSelfRef.pipe0_load_e2_w = (1U & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                       >> 1U));
    vlSelfRef.u_pipe0_ctrl__DOT__div_result_i = vlSelfRef.writeback_div_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__div_result_i = vlSelfRef.writeback_div_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__alu_result_e1_i = vlSelfRef.writeback_exec0_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__alu_result_e1_i = vlSelfRef.writeback_exec1_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__mul_result_e2_i = vlSelfRef.writeback_mul_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mul_result_e2_i = vlSelfRef.writeback_mul_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__div_complete_i = vlSelfRef.writeback_div_valid_i;
    vlSelfRef.u_pipe1_ctrl__DOT__div_complete_i = vlSelfRef.writeback_div_valid_i;
    vlSelfRef.issue_b_lsu_w = vlSelfRef.fetch1_instr_lsu_i;
    vlSelfRef.issue_b_exec_w = vlSelfRef.fetch1_instr_exec_i;
    vlSelfRef.issue_b_div_w = vlSelfRef.fetch1_instr_div_i;
    vlSelfRef.issue_b_branch_w = vlSelfRef.fetch1_instr_branch_i;
    vlSelfRef.issue_b_invalid_w = vlSelfRef.fetch1_instr_invalid_i;
    vlSelfRef.issue_b_sb_alloc_w = vlSelfRef.fetch1_instr_rd_valid_i;
    vlSelfRef.issue_b_mul_w = vlSelfRef.fetch1_instr_mul_i;
    vlSelfRef.pipe1_ok_w = ((IData)(vlSelfRef.fetch1_instr_branch_i) 
                            | ((IData)(vlSelfRef.fetch1_instr_exec_i) 
                               | ((IData)(vlSelfRef.fetch1_instr_lsu_i) 
                                  | (IData)(vlSelfRef.fetch1_instr_mul_i))));
    vlSelfRef.u_pipe0_ctrl__DOT__mem_exception_e2_i 
        = vlSelfRef.writeback_mem_exception_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mem_exception_e2_i 
        = vlSelfRef.writeback_mem_exception_i;
    vlSelfRef.issue_b_csr_w = vlSelfRef.fetch1_instr_csr_i;
    vlSelfRef.u_pipe0_ctrl__DOT__mul_e2_o = vlSelfRef.pipe0_mul_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__mul_e2_o = vlSelfRef.pipe1_mul_e2_w;
    vlSelfRef.u_pipe0_dec0_verif__DOT__pc_i = vlSelfRef.pipe0_pc_wb_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__pc_i = vlSelfRef.pipe1_pc_wb_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__pc_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_o;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__pc_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_o;
    vlSelfRef.u_pipe0_dec0_verif__DOT__opcode_i = vlSelfRef.pipe0_opc_wb_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__opcode_i = vlSelfRef.pipe1_opc_wb_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__opcode_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__opcode_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rb_idx_w 
        = vlSelfRef.v_pipe0_rs2_w;
    vlSelfRef.u_pipe0_dec0_verif__DOT__rb_idx_w = vlSelfRef.v_pipe0_rs2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__rb_idx_w 
        = vlSelfRef.v_pipe1_rs2_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__rb_idx_w = vlSelfRef.v_pipe1_rs2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__ra_idx_w 
        = vlSelfRef.v_pipe0_rs1_w;
    vlSelfRef.u_pipe0_dec0_verif__DOT__ra_idx_w = vlSelfRef.v_pipe0_rs1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__ra_idx_w 
        = vlSelfRef.v_pipe1_rs1_w;
    vlSelfRef.u_pipe0_dec1_verif__DOT__ra_idx_w = vlSelfRef.v_pipe1_rs1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__branch_e1_o = vlSelfRef.pipe0_branch_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__branch_e1_o = vlSelfRef.pipe1_branch_e1_w;
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
    vlSelfRef.u_pipe0_ctrl__DOT__csr_waddr_wb_o = vlSelfRef.csr_writeback_waddr_o;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rd0_value_i 
        = vlSelfRef.pipe0_result_wb_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rd1_value_i 
        = vlSelfRef.pipe1_result_wb_w;
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
    vlSelfRef.u_pipe0_ctrl__DOT__load_e1_o = vlSelfRef.pipe0_load_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__mul_e1_o = vlSelfRef.pipe0_mul_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__load_e1_o = vlSelfRef.pipe1_load_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__mul_e1_o = vlSelfRef.pipe1_mul_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__store_e1_o = vlSelfRef.pipe0_store_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__store_e1_o = vlSelfRef.pipe1_store_e1_w;
    vlSelfRef.u_pipe0_ctrl__DOT__rd_e1_o = vlSelfRef.pipe0_rd_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__rd_e1_o = vlSelfRef.pipe1_rd_e1_w;
    vlSelfRef.u_pipe1_ctrl__DOT__load_e2_o = vlSelfRef.pipe1_load_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__load_store_e2_w = 
        (1U & ((IData)(vlSelfRef.pipe1_load_e2_w) | 
               ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                >> 2U)));
    vlSelfRef.u_pipe0_ctrl__DOT__load_e2_o = vlSelfRef.pipe0_load_e2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__load_store_e2_w = 
        (1U & ((IData)(vlSelfRef.pipe0_load_e2_w) | 
               ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                >> 2U)));
    vlSelfRef.u_pipe1_ctrl__DOT__issue_lsu_i = vlSelfRef.issue_b_lsu_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_branch_i = vlSelfRef.issue_b_branch_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_rd_valid_i = vlSelfRef.issue_b_sb_alloc_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_mul_i = vlSelfRef.issue_b_mul_w;
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
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                    __Vtemp_418[0U] = 0x7436U;
                    __Vtemp_464[0U] = 0x6135U;
                } else {
                    __Vtemp_418[0U] = 0x7435U;
                    __Vtemp_464[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                __Vtemp_418[0U] = 0x7434U;
                __Vtemp_464[0U] = 0x6133U;
            } else {
                __Vtemp_418[0U] = 0x7433U;
                __Vtemp_464[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                __Vtemp_418[0U] = 0x733131U;
                __Vtemp_464[0U] = 0x6131U;
            } else {
                __Vtemp_418[0U] = 0x733130U;
                __Vtemp_464[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            __Vtemp_418[0U] = 0x7339U;
            __Vtemp_464[0U] = 0x7331U;
        } else {
            __Vtemp_418[0U] = 0x7338U;
            __Vtemp_464[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
                __Vtemp_418[0U] = 0x7337U;
                __Vtemp_464[0U] = 0x7432U;
            } else {
                __Vtemp_418[0U] = 0x7336U;
                __Vtemp_464[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            __Vtemp_418[0U] = 0x7335U;
            __Vtemp_464[0U] = 0x7430U;
        } else {
            __Vtemp_418[0U] = 0x7334U;
            __Vtemp_464[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
            __Vtemp_418[0U] = 0x7333U;
            __Vtemp_464[0U] = 0x6770U;
        } else {
            __Vtemp_418[0U] = 0x7332U;
            __Vtemp_464[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[0U] 
            = __Vtemp_418[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[1U] 
            = __Vtemp_418[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[2U] 
            = __Vtemp_418[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[0U] 
            = __Vtemp_464[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[1U] 
            = __Vtemp_464[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__10__Vfuncout[2U] 
            = __Vtemp_464[2U];
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
                    __Vtemp_511[0U] = 0x7436U;
                    __Vtemp_557[0U] = 0x6135U;
                } else {
                    __Vtemp_511[0U] = 0x7435U;
                    __Vtemp_557[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                __Vtemp_511[0U] = 0x7434U;
                __Vtemp_557[0U] = 0x6133U;
            } else {
                __Vtemp_511[0U] = 0x7433U;
                __Vtemp_557[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                __Vtemp_511[0U] = 0x733131U;
                __Vtemp_557[0U] = 0x6131U;
            } else {
                __Vtemp_511[0U] = 0x733130U;
                __Vtemp_557[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            __Vtemp_511[0U] = 0x7339U;
            __Vtemp_557[0U] = 0x7331U;
        } else {
            __Vtemp_511[0U] = 0x7338U;
            __Vtemp_557[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
                __Vtemp_511[0U] = 0x7337U;
                __Vtemp_557[0U] = 0x7432U;
            } else {
                __Vtemp_511[0U] = 0x7336U;
                __Vtemp_557[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            __Vtemp_511[0U] = 0x7335U;
            __Vtemp_557[0U] = 0x7430U;
        } else {
            __Vtemp_511[0U] = 0x7334U;
            __Vtemp_557[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
            __Vtemp_511[0U] = 0x7333U;
            __Vtemp_557[0U] = 0x6770U;
        } else {
            __Vtemp_511[0U] = 0x7332U;
            __Vtemp_557[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__regnum))) {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[0U] 
            = __Vtemp_511[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[1U] 
            = __Vtemp_511[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[2U] 
            = __Vtemp_511[2U];
    } else {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[0U] 
            = __Vtemp_557[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[1U] 
            = __Vtemp_557[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[2U] 
            = __Vtemp_557[2U];
    }
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__16__Vfuncout[2U];
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                    __Vtemp_604[0U] = 0x7436U;
                    __Vtemp_650[0U] = 0x6135U;
                } else {
                    __Vtemp_604[0U] = 0x7435U;
                    __Vtemp_650[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_604[0U] = 0x7434U;
                __Vtemp_650[0U] = 0x6133U;
            } else {
                __Vtemp_604[0U] = 0x7433U;
                __Vtemp_650[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_604[0U] = 0x733131U;
                __Vtemp_650[0U] = 0x6131U;
            } else {
                __Vtemp_604[0U] = 0x733130U;
                __Vtemp_650[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_604[0U] = 0x7339U;
            __Vtemp_650[0U] = 0x7331U;
        } else {
            __Vtemp_604[0U] = 0x7338U;
            __Vtemp_650[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_604[0U] = 0x7337U;
                __Vtemp_650[0U] = 0x7432U;
            } else {
                __Vtemp_604[0U] = 0x7336U;
                __Vtemp_650[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_604[0U] = 0x7335U;
            __Vtemp_650[0U] = 0x7430U;
        } else {
            __Vtemp_604[0U] = 0x7334U;
            __Vtemp_650[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_604[0U] = 0x7333U;
            __Vtemp_650[0U] = 0x6770U;
        } else {
            __Vtemp_604[0U] = 0x7332U;
            __Vtemp_650[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_604[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_604[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_604[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_650[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_650[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_650[2U];
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
                    __Vtemp_697[0U] = 0x7436U;
                    __Vtemp_743[0U] = 0x6135U;
                } else {
                    __Vtemp_697[0U] = 0x7435U;
                    __Vtemp_743[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                __Vtemp_697[0U] = 0x7434U;
                __Vtemp_743[0U] = 0x6133U;
            } else {
                __Vtemp_697[0U] = 0x7433U;
                __Vtemp_743[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                __Vtemp_697[0U] = 0x733131U;
                __Vtemp_743[0U] = 0x6131U;
            } else {
                __Vtemp_697[0U] = 0x733130U;
                __Vtemp_743[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            __Vtemp_697[0U] = 0x7339U;
            __Vtemp_743[0U] = 0x7331U;
        } else {
            __Vtemp_697[0U] = 0x7338U;
            __Vtemp_743[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
                __Vtemp_697[0U] = 0x7337U;
                __Vtemp_743[0U] = 0x7432U;
            } else {
                __Vtemp_697[0U] = 0x7336U;
                __Vtemp_743[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            __Vtemp_697[0U] = 0x7335U;
            __Vtemp_743[0U] = 0x7430U;
        } else {
            __Vtemp_697[0U] = 0x7334U;
            __Vtemp_743[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
            __Vtemp_697[0U] = 0x7333U;
            __Vtemp_743[0U] = 0x6770U;
        } else {
            __Vtemp_697[0U] = 0x7332U;
            __Vtemp_743[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__regnum))) {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[0U] 
            = __Vtemp_697[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[1U] 
            = __Vtemp_697[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[2U] 
            = __Vtemp_697[2U];
    } else {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[0U] 
            = __Vtemp_743[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[1U] 
            = __Vtemp_743[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[2U] 
            = __Vtemp_743[2U];
    }
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__12__Vfuncout[2U];
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                    __Vtemp_790[0U] = 0x7436U;
                    __Vtemp_836[0U] = 0x6135U;
                } else {
                    __Vtemp_790[0U] = 0x7435U;
                    __Vtemp_836[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                __Vtemp_790[0U] = 0x7434U;
                __Vtemp_836[0U] = 0x6133U;
            } else {
                __Vtemp_790[0U] = 0x7433U;
                __Vtemp_836[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                __Vtemp_790[0U] = 0x733131U;
                __Vtemp_836[0U] = 0x6131U;
            } else {
                __Vtemp_790[0U] = 0x733130U;
                __Vtemp_836[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            __Vtemp_790[0U] = 0x7339U;
            __Vtemp_836[0U] = 0x7331U;
        } else {
            __Vtemp_790[0U] = 0x7338U;
            __Vtemp_836[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
                __Vtemp_790[0U] = 0x7337U;
                __Vtemp_836[0U] = 0x7432U;
            } else {
                __Vtemp_790[0U] = 0x7336U;
                __Vtemp_836[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            __Vtemp_790[0U] = 0x7335U;
            __Vtemp_836[0U] = 0x7430U;
        } else {
            __Vtemp_790[0U] = 0x7334U;
            __Vtemp_836[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
            __Vtemp_790[0U] = 0x7333U;
            __Vtemp_836[0U] = 0x6770U;
        } else {
            __Vtemp_790[0U] = 0x7332U;
            __Vtemp_836[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[0U] 
            = __Vtemp_790[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[1U] 
            = __Vtemp_790[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[2U] 
            = __Vtemp_790[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[0U] 
            = __Vtemp_836[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[1U] 
            = __Vtemp_836[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_wb__DOT__get_regname_str__9__Vfuncout[2U] 
            = __Vtemp_836[2U];
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
                    __Vtemp_883[0U] = 0x7436U;
                    __Vtemp_929[0U] = 0x6135U;
                } else {
                    __Vtemp_883[0U] = 0x7435U;
                    __Vtemp_929[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                __Vtemp_883[0U] = 0x7434U;
                __Vtemp_929[0U] = 0x6133U;
            } else {
                __Vtemp_883[0U] = 0x7433U;
                __Vtemp_929[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                __Vtemp_883[0U] = 0x733131U;
                __Vtemp_929[0U] = 0x6131U;
            } else {
                __Vtemp_883[0U] = 0x733130U;
                __Vtemp_929[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            __Vtemp_883[0U] = 0x7339U;
            __Vtemp_929[0U] = 0x7331U;
        } else {
            __Vtemp_883[0U] = 0x7338U;
            __Vtemp_929[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
                __Vtemp_883[0U] = 0x7337U;
                __Vtemp_929[0U] = 0x7432U;
            } else {
                __Vtemp_883[0U] = 0x7336U;
                __Vtemp_929[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            __Vtemp_883[0U] = 0x7335U;
            __Vtemp_929[0U] = 0x7430U;
        } else {
            __Vtemp_883[0U] = 0x7334U;
            __Vtemp_929[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
            __Vtemp_883[0U] = 0x7333U;
            __Vtemp_929[0U] = 0x6770U;
        } else {
            __Vtemp_883[0U] = 0x7332U;
            __Vtemp_929[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__regnum))) {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[0U] 
            = __Vtemp_883[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[1U] 
            = __Vtemp_883[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[2U] 
            = __Vtemp_883[2U];
    } else {
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[0U] 
            = __Vtemp_929[0U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[1U] 
            = __Vtemp_929[1U];
        __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[2U] 
            = __Vtemp_929[2U];
    }
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe0_dec1_verif__DOT__get_regname_str__15__Vfuncout[2U];
    if (__VdfgRegularize_h8df87ebf_1_0) {
        vlSelfRef.branch_info_pc_o = vlSelfRef.branch_exec1_pc_i;
        vlSelfRef.branch_info_source_o = vlSelfRef.branch_exec1_source_i;
    } else {
        vlSelfRef.branch_info_pc_o = vlSelfRef.branch_exec0_pc_i;
        vlSelfRef.branch_info_source_o = vlSelfRef.branch_exec0_source_i;
    }
    __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum 
        = vlSelfRef.u_pipe0_dec0_verif__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                    __Vtemp_976[0U] = 0x7436U;
                    __Vtemp_1022[0U] = 0x6135U;
                } else {
                    __Vtemp_976[0U] = 0x7435U;
                    __Vtemp_1022[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                __Vtemp_976[0U] = 0x7434U;
                __Vtemp_1022[0U] = 0x6133U;
            } else {
                __Vtemp_976[0U] = 0x7433U;
                __Vtemp_1022[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                __Vtemp_976[0U] = 0x733131U;
                __Vtemp_1022[0U] = 0x6131U;
            } else {
                __Vtemp_976[0U] = 0x733130U;
                __Vtemp_1022[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            __Vtemp_976[0U] = 0x7339U;
            __Vtemp_1022[0U] = 0x7331U;
        } else {
            __Vtemp_976[0U] = 0x7338U;
            __Vtemp_1022[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
                __Vtemp_976[0U] = 0x7337U;
                __Vtemp_1022[0U] = 0x7432U;
            } else {
                __Vtemp_976[0U] = 0x7336U;
                __Vtemp_1022[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            __Vtemp_976[0U] = 0x7335U;
            __Vtemp_1022[0U] = 0x7430U;
        } else {
            __Vtemp_976[0U] = 0x7334U;
            __Vtemp_1022[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
            __Vtemp_976[0U] = 0x7333U;
            __Vtemp_1022[0U] = 0x6770U;
        } else {
            __Vtemp_976[0U] = 0x7332U;
            __Vtemp_1022[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
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
    if ((0x10U & (IData)(__Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__regnum))) {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[0U] 
            = __Vtemp_976[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[1U] 
            = __Vtemp_976[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[2U] 
            = __Vtemp_976[2U];
    } else {
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[0U] 
            = __Vtemp_1022[0U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[1U] 
            = __Vtemp_1022[1U];
        __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[2U] 
            = __Vtemp_1022[2U];
    }
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[0U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[1U];
    vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe0_dec0_verif__DOT__get_regname_str__14__Vfuncout[2U];
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
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__1(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___ico_sequent__TOP__biriscv_mem_top__u_core__u_issue__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rst_i 
        = vlSelfRef.rst_i;
    vlSelfRef.u_pipe0_ctrl__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.u_pipe1_ctrl__DOT__rst_i = vlSelfRef.rst_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.clk_i 
        = vlSelfRef.clk_i;
    vlSelfRef.u_pipe0_ctrl__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_pipe1_ctrl__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_value_e1_i 
        = vlSelfRef.csr_result_e1_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_value_e1_i 
        = vlSelfRef.csr_result_e1_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_write_e1_i 
        = vlSelfRef.csr_result_e1_write_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_write_e1_i 
        = vlSelfRef.csr_result_e1_write_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_wdata_e1_i 
        = vlSelfRef.csr_result_e1_wdata_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_wdata_e1_i 
        = vlSelfRef.csr_result_e1_wdata_i;
    vlSelfRef.u_pipe0_ctrl__DOT__csr_result_exception_e1_i 
        = vlSelfRef.csr_result_e1_exception_i;
    vlSelfRef.u_pipe1_ctrl__DOT__csr_result_exception_e1_i 
        = vlSelfRef.csr_result_e1_exception_i;
    vlSelfRef.u_pipe0_ctrl__DOT__take_interrupt_i = vlSelfRef.take_interrupt_i;
    vlSelfRef.u_pipe1_ctrl__DOT__take_interrupt_i = vlSelfRef.take_interrupt_i;
    if (vlSelfRef.branch_csr_request_i) {
        vlSelfRef.branch_pc_o = vlSelfRef.branch_csr_pc_i;
        vlSelfRef.branch_priv_o = vlSelfRef.branch_csr_priv_i;
    } else {
        vlSelfRef.branch_pc_o = vlSelfRef.pc_x_q;
        vlSelfRef.branch_priv_o = vlSelfRef.priv_x_q;
    }
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__0(Vbiriscv_mem_top_biriscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_issue___ico_comb__TOP__biriscv_mem_top__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h8df87ebf_0_0;
    __VdfgRegularize_h8df87ebf_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h8df87ebf_0_1;
    __VdfgRegularize_h8df87ebf_0_1 = 0;
    VlWide<3>/*79:0*/ u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0;
    VL_ZERO_W(80, u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0);
    VlWide<3>/*79:0*/ u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0;
    VL_ZERO_W(80, u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0);
    VlWide<3>/*79:0*/ u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0;
    VL_ZERO_W(80, u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0);
    VlWide<3>/*79:0*/ u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0;
    VL_ZERO_W(80, u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0);
    VlWide<3>/*79:0*/ u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0;
    VL_ZERO_W(80, u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0);
    VlWide<3>/*79:0*/ u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0;
    VL_ZERO_W(80, u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0);
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum = 0;
    VlWide<3>/*95:0*/ __Vtemp_634;
    VlWide<3>/*95:0*/ __Vtemp_680;
    VlWide<3>/*95:0*/ __Vtemp_727;
    VlWide<3>/*95:0*/ __Vtemp_773;
    VlWide<3>/*95:0*/ __Vtemp_820;
    VlWide<3>/*95:0*/ __Vtemp_866;
    VlWide<3>/*95:0*/ __Vtemp_913;
    VlWide<3>/*95:0*/ __Vtemp_959;
    VlWide<3>/*95:0*/ __Vtemp_1006;
    VlWide<3>/*95:0*/ __Vtemp_1052;
    VlWide<3>/*95:0*/ __Vtemp_1099;
    VlWide<3>/*95:0*/ __Vtemp_1145;
    // Body
    vlSelfRef.u_pipe0_ctrl__DOT__mem_complete_i = vlSelfRef.writeback_mem_valid_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mem_complete_i = vlSelfRef.writeback_mem_valid_i;
    vlSelfRef.pipe0_stall_raw_w = (((~ (IData)(vlSelfRef.writeback_div_valid_i)) 
                                    & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__div_e1_w)) 
                                   | ((~ (IData)(vlSelfRef.writeback_mem_valid_i)) 
                                      & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__load_store_e2_w)));
    vlSelfRef.pipe1_stall_raw_w = (((~ (IData)(vlSelfRef.writeback_div_valid_i)) 
                                    & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__div_e1_w)) 
                                   | ((~ (IData)(vlSelfRef.writeback_mem_valid_i)) 
                                      & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__load_store_e2_w)));
    vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r = (
                                                   ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q) 
                                                    & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__load_store_e2_w) 
                                                       & (IData)(vlSelfRef.writeback_mem_valid_i)))
                                                    ? (IData)(vlSelfRef.writeback_mem_exception_i)
                                                    : (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_q));
    vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r = (
                                                   ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q) 
                                                    & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__load_store_e2_w) 
                                                       & (IData)(vlSelfRef.writeback_mem_valid_i)))
                                                    ? (IData)(vlSelfRef.writeback_mem_exception_i)
                                                    : (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_q));
    vlSelfRef.u_pipe0_ctrl__DOT__mem_result_e2_i = vlSelfRef.writeback_mem_value_i;
    vlSelfRef.u_pipe1_ctrl__DOT__mem_result_e2_i = vlSelfRef.writeback_mem_value_i;
    vlSelfRef.u_pipe0_ctrl__DOT__stall_o = vlSelfRef.pipe0_stall_raw_w;
    vlSelfRef.u_pipe1_ctrl__DOT__stall_o = vlSelfRef.pipe1_stall_raw_w;
    vlSelfRef.stall_w = ((IData)(vlSelfRef.pipe0_stall_raw_w) 
                         | (IData)(vlSelfRef.pipe1_stall_raw_w));
    vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_w = (0U 
                                                   != (IData)(vlSelfRef.u_pipe1_ctrl__DOT__exception_e2_r));
    vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_w = (0U 
                                                   != (IData)(vlSelfRef.u_pipe0_ctrl__DOT__exception_e2_r));
    vlSelfRef.u_pipe0_ctrl__DOT__issue_stall_i = vlSelfRef.stall_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_stall_i = vlSelfRef.stall_w;
    vlSelfRef.u_pipe0_ctrl__DOT__complete_wb_w = ((~ (IData)(vlSelfRef.stall_w)) 
                                                  & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                                     >> 9U));
    vlSelfRef.u_pipe1_ctrl__DOT__csr_wb_o = (1U & (
                                                   (~ (IData)(vlSelfRef.stall_w)) 
                                                   & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                                      >> 3U)));
    vlSelfRef.u_pipe1_ctrl__DOT__complete_wb_w = ((~ (IData)(vlSelfRef.stall_w)) 
                                                  & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                                     >> 9U));
    vlSelfRef.pipe0_csr_wb_w = (1U & ((~ (IData)(vlSelfRef.stall_w)) 
                                      & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                         >> 3U)));
    vlSelfRef.exec0_hold_o = vlSelfRef.stall_w;
    vlSelfRef.exec1_hold_o = vlSelfRef.stall_w;
    vlSelfRef.mul_hold_o = vlSelfRef.stall_w;
    vlSelfRef.pipe0_valid_wb_w = ((~ (IData)(vlSelfRef.stall_w)) 
                                  & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_wb_q));
    vlSelfRef.pipe1_valid_wb_w = ((~ (IData)(vlSelfRef.stall_w)) 
                                  & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_wb_q));
    vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_w = ((~ (IData)(vlSelfRef.stall_w)) 
                                               & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_q));
    vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_w = ((~ (IData)(vlSelfRef.stall_w)) 
                                               & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_q));
    vlSelfRef.pipe1_squash_e1_e2_w = ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_w) 
                                      | (IData)(vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.pipe0_squash_e1_e2_w = ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_w) 
                                      | (IData)(vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.u_pipe0_ctrl__DOT__csr_wb_o = vlSelfRef.pipe0_csr_wb_w;
    if (vlSelfRef.pipe0_valid_wb_w) {
        vlSelfRef.u_pipe0_dec0_verif__DOT__valid_i = 1U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_pc 
            = vlSelfRef.pipe0_pc_wb_w;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe0_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if (((((((((0x7013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                   | (0x13U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                  | (0x2013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                 | (0x3013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                | (0x6013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
               | (0x4013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.pipe0_opc_wb_w))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.pipe0_opc_wb_w)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSelfRef.pipe0_opc_wb_w))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.pipe0_opc_wb_w)) 
                          | (0x37U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) 
                         | (0x17U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.pipe0_opc_wb_w))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.pipe0_opc_wb_w))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.pipe0_opc_wb_w))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.pipe0_opc_wb_w))) 
                      | (0x6fU == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) 
                     | (0x67U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    | (0x63U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                          | (0x4063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                         | (0x5063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                        | (0x6063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                       | (0x7063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                      | (3U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                     | (0x1003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    | (0x2003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                          | (0x5003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                         | (0x6003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                        | (0x23U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                       | (0x1023U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                      | (0x2023U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                     | (0x73U == vlSelfRef.pipe0_opc_wb_w)) 
                    | (0x100073U == vlSelfRef.pipe0_opc_wb_w))) {
            if ((0x4003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.pipe0_opc_wb_w)) {
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.pipe0_opc_wb_w)) 
                          | (0x1073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                         | (0x2073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                        | (0x3073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                       | (0x5073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                      | (0x6073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                     | (0x7073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.pipe0_opc_wb_w)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.pipe0_opc_wb_w))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.pipe0_opc_wb_w))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.pipe0_opc_wb_w))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.pipe0_opc_wb_w))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.pipe0_opc_wb_w))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) 
                    | (0x100fU == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.pipe0_opc_wb_w))) {
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.pipe0_opc_wb_w))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.pipe0_opc_wb_w))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.pipe0_opc_wb_w))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.pipe0_opc_wb_w))) 
                          || (0x4013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                         || (0x1073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                        || (0x2073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                       || (0x3073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                      || (0x5073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                     || (0x6073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    || (0x7073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.pipe0_opc_wb_w)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.pipe0_opc_wb_w))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.pipe0_opc_wb_w)))) 
                  | (0x37U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) 
                 | (0x17U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) 
                | (0x6fU == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) 
               | (0x67U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
              | ((((((3U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                     || (0x1003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    || (0x2003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                   || (0x4003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                  || (0x5003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                 || (0x6003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))) 
             | (((0x23U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                 || (0x1023U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                || (0x2023U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.pipe0_opc_wb_w)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.pipe0_opc_wb_w))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.pipe0_opc_wb_w))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.pipe0_opc_wb_w))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.pipe0_opc_wb_w))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.pipe0_opc_wb_w))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.pipe0_opc_wb_w))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.pipe0_opc_wb_w))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.pipe0_opc_wb_w))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.pipe0_opc_wb_w))) 
                          || (0x7073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.pipe0_opc_wb_w)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.pipe0_opc_wb_w))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.pipe0_opc_wb_w)))))) {
                    if ((0x37U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                        if ((0x17U != (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                            if ((0x6fU != (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.pipe0_opc_wb_w))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.pipe0_opc_wb_w)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.pipe0_opc_wb_w))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.pipe0_opc_wb_w))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.pipe0_opc_wb_w))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.pipe0_opc_wb_w))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.pipe0_opc_wb_w)))))) {
                                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                                if ((1U == (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.pipe0_opc_wb_w))) {
                                if (((1U == (IData)(vlSelfRef.u_pipe0_dec0_verif__DOT__ra_idx_w)) 
                                     & (0U == (((- (IData)(
                                                           (vlSelfRef.pipe0_opc_wb_w 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.pipe0_opc_wb_w 
                                                  >> 0x14U))))) {
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.pipe0_opc_wb_w))) 
                          || (0x2013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                         || (0x3013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                        || (0x6013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                       || (0x4013U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                      || (0x1073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                     || (0x2073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                    || (0x3073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                   || (0x5073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                  || (0x6073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                 || (0x7073U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe0_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.pipe0_opc_wb_w 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.pipe0_opc_wb_w)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.pipe0_opc_wb_w))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.pipe0_opc_wb_w)))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.pipe0_opc_wb_w 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.pipe0_opc_wb_w);
            } else if ((0x17U == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.pipe0_opc_wb_w);
            } else if ((0x6fU == (0x7fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (vlSelfRef.pipe0_pc_wb_w + ((
                                                   (- (IData)(
                                                              (vlSelfRef.pipe0_opc_wb_w 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.pipe0_opc_wb_w) 
                                                      | (0x800U 
                                                         & (vlSelfRef.pipe0_opc_wb_w 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.pipe0_opc_wb_w 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.pipe0_opc_wb_w 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe0_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.pipe0_opc_wb_w 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.pipe0_opc_wb_w))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.pipe0_opc_wb_w))) 
                          || (0x4003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                         || (0x5003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w))) 
                        || (0x6003U == (0x707fU & vlSelfRef.pipe0_opc_wb_w)))) {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe0_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.pipe0_opc_wb_w 
                          >> 0x14U));
            } else {
                vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe0_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.pipe0_opc_wb_w 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.pipe0_opc_wb_w 
                                                      >> 7U))));
            }
        }
        vlSelfRef.u_pipe0_ctrl__DOT__valid_wb_o = 1U;
    } else {
        vlSelfRef.u_pipe0_dec0_verif__DOT__valid_i = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__valid_wb_o = 0U;
    }
    vlSelfRef.pipe0_rd_wb_w = ((- (IData)(((IData)(vlSelfRef.pipe0_valid_wb_w) 
                                           & ((~ (IData)(vlSelfRef.pipe0_stall_raw_w)) 
                                              & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                                 >> 7U))))) 
                               & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w));
    if (vlSelfRef.pipe1_valid_wb_w) {
        vlSelfRef.u_pipe0_dec1_verif__DOT__valid_i = 1U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_pc 
            = vlSelfRef.pipe1_pc_wb_w;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe0_dec1_verif__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if (((((((((0x7013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                   | (0x13U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                  | (0x2013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                 | (0x3013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                | (0x6013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
               | (0x4013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.pipe1_opc_wb_w))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.pipe1_opc_wb_w)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSelfRef.pipe1_opc_wb_w))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.pipe1_opc_wb_w)) 
                          | (0x37U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) 
                         | (0x17U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.pipe1_opc_wb_w))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.pipe1_opc_wb_w))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.pipe1_opc_wb_w))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.pipe1_opc_wb_w))) 
                      | (0x6fU == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) 
                     | (0x67U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    | (0x63U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                          | (0x4063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                         | (0x5063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                        | (0x6063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                       | (0x7063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                      | (3U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                     | (0x1003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    | (0x2003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                          | (0x5003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                         | (0x6003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                        | (0x23U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                       | (0x1023U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                      | (0x2023U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                     | (0x73U == vlSelfRef.pipe1_opc_wb_w)) 
                    | (0x100073U == vlSelfRef.pipe1_opc_wb_w))) {
            if ((0x4003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.pipe1_opc_wb_w)) {
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.pipe1_opc_wb_w)) 
                          | (0x1073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                         | (0x2073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                        | (0x3073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                       | (0x5073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                      | (0x6073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                     | (0x7073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.pipe1_opc_wb_w)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.pipe1_opc_wb_w))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.pipe1_opc_wb_w))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.pipe1_opc_wb_w))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.pipe1_opc_wb_w))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.pipe1_opc_wb_w))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) 
                    | (0x100fU == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.pipe1_opc_wb_w))) {
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.pipe1_opc_wb_w))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.pipe1_opc_wb_w))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.pipe1_opc_wb_w))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.pipe1_opc_wb_w))) 
                          || (0x4013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                         || (0x1073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                        || (0x2073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                       || (0x3073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                      || (0x5073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                     || (0x6073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    || (0x7073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.pipe1_opc_wb_w)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.pipe1_opc_wb_w))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.pipe1_opc_wb_w)))) 
                  | (0x37U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) 
                 | (0x17U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) 
                | (0x6fU == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) 
               | (0x67U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
              | ((((((3U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                     || (0x1003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    || (0x2003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                   || (0x4003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                  || (0x5003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                 || (0x6003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))) 
             | (((0x23U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                 || (0x1023U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                || (0x2023U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.pipe1_opc_wb_w)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.pipe1_opc_wb_w))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.pipe1_opc_wb_w))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.pipe1_opc_wb_w))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.pipe1_opc_wb_w))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.pipe1_opc_wb_w))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.pipe1_opc_wb_w))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.pipe1_opc_wb_w))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.pipe1_opc_wb_w))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.pipe1_opc_wb_w))) 
                          || (0x7073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.pipe1_opc_wb_w)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.pipe1_opc_wb_w))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.pipe1_opc_wb_w)))))) {
                    if ((0x37U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                        if ((0x17U != (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                            if ((0x6fU != (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.pipe1_opc_wb_w))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.pipe1_opc_wb_w)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.pipe1_opc_wb_w))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.pipe1_opc_wb_w))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.pipe1_opc_wb_w))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.pipe1_opc_wb_w))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.pipe1_opc_wb_w)))))) {
                                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                                if ((1U == (IData)(vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.pipe1_opc_wb_w))) {
                                if (((1U == (IData)(vlSelfRef.u_pipe0_dec1_verif__DOT__ra_idx_w)) 
                                     & (0U == (((- (IData)(
                                                           (vlSelfRef.pipe1_opc_wb_w 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.pipe1_opc_wb_w 
                                                  >> 0x14U))))) {
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (IData)(vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.pipe1_opc_wb_w))) 
                          || (0x2013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                         || (0x3013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                        || (0x6013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                       || (0x4013U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                      || (0x1073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                     || (0x2073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                    || (0x3073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                   || (0x5073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                  || (0x6073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                 || (0x7073U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe1_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.pipe1_opc_wb_w 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.pipe1_opc_wb_w)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.pipe1_opc_wb_w))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.pipe1_opc_wb_w)))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.pipe1_opc_wb_w 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.pipe1_opc_wb_w);
            } else if ((0x17U == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.pipe1_opc_wb_w);
            } else if ((0x6fU == (0x7fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (vlSelfRef.pipe1_pc_wb_w + ((
                                                   (- (IData)(
                                                              (vlSelfRef.pipe1_opc_wb_w 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.pipe1_opc_wb_w) 
                                                      | (0x800U 
                                                         & (vlSelfRef.pipe1_opc_wb_w 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.pipe1_opc_wb_w 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.pipe1_opc_wb_w 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe1_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.pipe1_opc_wb_w 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.pipe1_opc_wb_w))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.pipe1_opc_wb_w))) 
                          || (0x4003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                         || (0x5003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w))) 
                        || (0x6003U == (0x707fU & vlSelfRef.pipe1_opc_wb_w)))) {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe1_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.pipe1_opc_wb_w 
                          >> 0x14U));
            } else {
                vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.pipe1_opc_wb_w 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.pipe1_opc_wb_w 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.pipe1_opc_wb_w 
                                                      >> 7U))));
            }
        }
        vlSelfRef.u_pipe1_ctrl__DOT__valid_wb_o = 1U;
    } else {
        vlSelfRef.u_pipe0_dec1_verif__DOT__valid_i = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_dec1_verif__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__valid_wb_o = 0U;
    }
    vlSelfRef.pipe1_rd_wb_w = ((- (IData)(((IData)(vlSelfRef.pipe1_valid_wb_w) 
                                           & ((~ (IData)(vlSelfRef.pipe1_stall_raw_w)) 
                                              & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                                 >> 7U))))) 
                               & (IData)(vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w));
    vlSelfRef.pipe0_rd_e2_w = (0x1fU & ((- (IData)(
                                                   ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_w) 
                                                    & ((~ (IData)(vlSelfRef.pipe0_stall_raw_w)) 
                                                       & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                                          >> 7U))))) 
                                        & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_e2_q 
                                           >> 7U)));
    vlSelfRef.u_pipe0_ctrl__DOT__result_e2_r = vlSelfRef.u_pipe0_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.u_pipe0_ctrl__DOT__result_e2_r = vlSelfRef.writeback_mem_value_i;
    } else if (((IData)(vlSelfRef.u_pipe0_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.u_pipe0_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.u_pipe0_ctrl__DOT__result_e2_r = vlSelfRef.writeback_mul_value_i;
    }
    vlSelfRef.pipe1_rd_e2_w = (0x1fU & ((- (IData)(
                                                   ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_w) 
                                                    & ((~ (IData)(vlSelfRef.pipe1_stall_raw_w)) 
                                                       & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                                          >> 7U))))) 
                                        & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_e2_q 
                                           >> 7U)));
    vlSelfRef.u_pipe1_ctrl__DOT__result_e2_r = vlSelfRef.u_pipe1_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.u_pipe1_ctrl__DOT__result_e2_r = vlSelfRef.writeback_mem_value_i;
    } else if (((IData)(vlSelfRef.u_pipe1_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.u_pipe1_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.u_pipe1_ctrl__DOT__result_e2_r = vlSelfRef.writeback_mul_value_i;
    }
    vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_i = vlSelfRef.pipe1_squash_e1_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_o = vlSelfRef.pipe1_squash_e1_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__squash_e1_e2_i = vlSelfRef.pipe0_squash_e1_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__squash_wb_i = vlSelfRef.pipe0_squash_e1_e2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__squash_e1_e2_o = vlSelfRef.pipe0_squash_e1_e2_w;
    vlSelfRef.squash_w = ((IData)(vlSelfRef.pipe0_squash_e1_e2_w) 
                          | (IData)(vlSelfRef.pipe1_squash_e1_e2_w));
    if (vlSelfRef.u_pipe0_ctrl__DOT__valid_wb_o) {
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__valid_i = 1U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc 
            = vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_o;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if (((((((((0x7013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                   | (0x13U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                  | (0x2013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                 | (0x3013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                | (0x6013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
               | (0x4013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                          | (0x37U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         | (0x17U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      | (0x6fU == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     | (0x67U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    | (0x63U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                          | (0x4063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         | (0x5063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        | (0x6063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       | (0x7063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      | (3U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     | (0x1003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    | (0x2003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                          | (0x5003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         | (0x6003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        | (0x23U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       | (0x1023U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      | (0x2023U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     | (0x73U == vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                    | (0x100073U == vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
            if ((0x4003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                          | (0x1073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         | (0x2073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        | (0x3073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       | (0x5073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      | (0x6073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     | (0x7073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    | (0x100fU == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                          || (0x4013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         || (0x1073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        || (0x2073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       || (0x3073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      || (0x5073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     || (0x6073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    || (0x7073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) 
                  | (0x37U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                 | (0x17U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                | (0x6fU == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
               | (0x67U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
              | ((((((3U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                     || (0x1003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    || (0x2003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                   || (0x4003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                  || (0x5003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                 || (0x6003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) 
             | (((0x23U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                 || (0x1023U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                || (0x2023U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                          || (0x7073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))))) {
                    if ((0x37U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                        if ((0x17U != (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                            if ((0x6fU != (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))))) {
                                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                                if ((1U == (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                                if (((1U == (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__ra_idx_w)) 
                                     & (0U == (((- (IData)(
                                                           (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                                  >> 0x14U))))) {
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                          || (0x2013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         || (0x3013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        || (0x6013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                       || (0x4013U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                      || (0x1073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                     || (0x2073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                    || (0x3073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                   || (0x5073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                  || (0x6073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                 || (0x7073U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o);
            } else if ((0x17U == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o);
            } else if ((0x6fU == (0x7fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (vlSelfRef.u_pipe0_ctrl__DOT__pc_wb_o 
                       + (((- (IData)((vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o) 
                                         | (0x800U 
                                            & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                                 >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                          || (0x4003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                         || (0x5003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o))) 
                        || (0x6003U == (0x707fU & vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o)))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                          >> 0x14U));
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.u_pipe0_ctrl__DOT__opcode_wb_o 
                                                      >> 7U))));
            }
        }
    } else {
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__valid_i = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
    }
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rd0_i 
        = vlSelfRef.pipe0_rd_wb_w;
    vlSelfRef.u_pipe0_ctrl__DOT__rd_wb_o = vlSelfRef.pipe0_rd_wb_w;
    if (vlSelfRef.u_pipe1_ctrl__DOT__valid_wb_o) {
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__valid_i = 1U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc 
            = vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_o;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if (((((((((0x7013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                   | (0x13U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                  | (0x2013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                 | (0x3013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                | (0x6013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
               | (0x4013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                          | (0x37U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         | (0x17U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      | (0x6fU == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     | (0x67U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    | (0x63U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                          | (0x4063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         | (0x5063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        | (0x6063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       | (0x7063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      | (3U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     | (0x1003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    | (0x2003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                          | (0x5003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         | (0x6003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        | (0x23U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       | (0x1023U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      | (0x2023U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     | (0x73U == vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                    | (0x100073U == vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
            if ((0x4003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                          | (0x1073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         | (0x2073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        | (0x3073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       | (0x5073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      | (0x6073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     | (0x7073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    | (0x100fU == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                          || (0x4013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         || (0x1073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        || (0x2073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       || (0x3073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      || (0x5073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     || (0x6073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    || (0x7073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) 
                  | (0x37U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                 | (0x17U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                | (0x6fU == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
               | (0x67U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
              | ((((((3U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                     || (0x1003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    || (0x2003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                   || (0x4003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                  || (0x5003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                 || (0x6003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) 
             | (((0x23U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                 || (0x1023U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                || (0x2023U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                          || (0x7073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))))) {
                    if ((0x37U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                        if ((0x17U != (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                            if ((0x6fU != (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))))) {
                                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                                if ((1U == (IData)(vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                                if (((1U == (IData)(vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__ra_idx_w)) 
                                     & (0U == (((- (IData)(
                                                           (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                                  >> 0x14U))))) {
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (IData)(vlSelfRef.u_pipe0_dec1_verif__DOT__rd_idx_w))) {
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                          || (0x2013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         || (0x3013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        || (0x6013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                       || (0x4013U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                      || (0x1073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                     || (0x2073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                    || (0x3073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                   || (0x5073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                  || (0x6073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                 || (0x7073U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o);
            } else if ((0x17U == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o);
            } else if ((0x6fU == (0x7fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (vlSelfRef.u_pipe1_ctrl__DOT__pc_wb_o 
                       + (((- (IData)((vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o) 
                                         | (0x800U 
                                            & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                                 >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                          || (0x4003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                         || (0x5003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o))) 
                        || (0x6003U == (0x707fU & vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o)))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                          >> 0x14U));
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.u_pipe1_ctrl__DOT__opcode_wb_o 
                                                      >> 7U))));
            }
        }
    } else {
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__valid_i = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
    }
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rd1_i 
        = vlSelfRef.pipe1_rd_wb_w;
    vlSelfRef.u_pipe1_ctrl__DOT__rd_wb_o = vlSelfRef.pipe1_rd_wb_w;
    vlSelfRef.u_pipe0_ctrl__DOT__rd_e2_o = vlSelfRef.pipe0_rd_e2_w;
    vlSelfRef.u_pipe0_ctrl__DOT__result_e2_o = vlSelfRef.u_pipe0_ctrl__DOT__result_e2_r;
    vlSelfRef.pipe0_result_e2_w = vlSelfRef.u_pipe0_ctrl__DOT__result_e2_r;
    vlSelfRef.u_pipe1_ctrl__DOT__rd_e2_o = vlSelfRef.pipe1_rd_e2_w;
    vlSelfRef.u_pipe1_ctrl__DOT__result_e2_o = vlSelfRef.u_pipe1_ctrl__DOT__result_e2_r;
    vlSelfRef.pipe1_result_e2_w = vlSelfRef.u_pipe1_ctrl__DOT__result_e2_r;
    vlSelfRef.mispredicted_r = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.branch_csr_request_i) 
                  | (IData)(vlSelfRef.squash_w))))) {
        if ((1U & (~ ((IData)(vlSelfRef.fetch0_valid_i) 
                      & ((0xfffffffcU & vlSelfRef.fetch0_pc_i) 
                         == (0xfffffffcU & vlSelfRef.pc_x_q)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.fetch1_valid_i) 
                          & ((0xfffffffcU & vlSelfRef.fetch1_pc_i) 
                             == (0xfffffffcU & vlSelfRef.pc_x_q)))))) {
                if (((IData)(vlSelfRef.fetch0_valid_i) 
                     | (IData)(vlSelfRef.fetch1_valid_i))) {
                    vlSelfRef.mispredicted_r = 1U;
                }
            }
        }
    }
    vlSelfRef.slot1_valid_r = 0U;
    vlSelfRef.slot0_valid_r = 0U;
    if (((IData)(vlSelfRef.branch_csr_request_i) | (IData)(vlSelfRef.squash_w))) {
        vlSelfRef.slot1_valid_r = 0U;
        vlSelfRef.slot0_valid_r = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.fetch0_valid_i) 
                      & ((0xfffffffcU & vlSelfRef.fetch0_pc_i) 
                         == (0xfffffffcU & vlSelfRef.pc_x_q)))))) {
            if (((IData)(vlSelfRef.fetch1_valid_i) 
                 & ((0xfffffffcU & vlSelfRef.fetch1_pc_i) 
                    == (0xfffffffcU & vlSelfRef.pc_x_q)))) {
                vlSelfRef.slot1_valid_r = 1U;
            }
        }
        if (((IData)(vlSelfRef.fetch0_valid_i) & ((0xfffffffcU 
                                                   & vlSelfRef.fetch0_pc_i) 
                                                  == 
                                                  (0xfffffffcU 
                                                   & vlSelfRef.pc_x_q)))) {
            vlSelfRef.slot0_valid_r = 1U;
        }
    }
    vlSelfRef.branch_info_request_o = vlSelfRef.mispredicted_r;
    vlSelfRef.branch_request_o = ((IData)(vlSelfRef.branch_csr_request_i) 
                                  | (IData)(vlSelfRef.mispredicted_r));
    vlSelfRef.opcode_b_fault_r = 0U;
    vlSelfRef.opcode_a_fault_r = 0U;
    vlSelfRef.opcode_b_pc_r = 0U;
    vlSelfRef.opcode_a_pc_r = 0U;
    vlSelfRef.opcode_a_valid_r = 0U;
    vlSelfRef.opcode_b_valid_r = 0U;
    vlSelfRef.opcode_b_r = 0U;
    vlSelfRef.opcode_a_r = 0U;
    if (vlSelfRef.slot0_valid_r) {
        vlSelfRef.issue_a_branch_w = vlSelfRef.fetch0_instr_branch_i;
        vlSelfRef.opcode_b_fault_r = (((IData)(vlSelfRef.fetch1_fault_page_i) 
                                       << 1U) | (IData)(vlSelfRef.fetch1_fault_fetch_i));
        vlSelfRef.opcode_a_fault_r = (((IData)(vlSelfRef.fetch0_fault_page_i) 
                                       << 1U) | (IData)(vlSelfRef.fetch0_fault_fetch_i));
        vlSelfRef.issue_a_invalid_w = vlSelfRef.fetch0_instr_invalid_i;
        vlSelfRef.opcode_b_pc_r = vlSelfRef.fetch1_pc_i;
        vlSelfRef.opcode_a_pc_r = vlSelfRef.fetch0_pc_i;
        vlSelfRef.opcode_a_valid_r = 1U;
        vlSelfRef.opcode_b_valid_r = vlSelfRef.fetch1_valid_i;
        vlSelfRef.issue_a_div_w = vlSelfRef.fetch0_instr_div_i;
        vlSelfRef.issue_a_sb_alloc_w = vlSelfRef.fetch0_instr_rd_valid_i;
        vlSelfRef.issue_a_csr_w = vlSelfRef.fetch0_instr_csr_i;
        vlSelfRef.issue_a_lsu_w = vlSelfRef.fetch0_instr_lsu_i;
        vlSelfRef.issue_a_mul_w = vlSelfRef.fetch0_instr_mul_i;
        vlSelfRef.issue_a_exec_w = vlSelfRef.fetch0_instr_exec_i;
        vlSelfRef.opcode_b_r = vlSelfRef.fetch1_instr_i;
        vlSelfRef.opcode_a_r = vlSelfRef.fetch0_instr_i;
    } else {
        vlSelfRef.issue_a_branch_w = vlSelfRef.fetch1_instr_branch_i;
        if (vlSelfRef.slot1_valid_r) {
            vlSelfRef.opcode_b_fault_r = 0U;
            vlSelfRef.opcode_a_fault_r = (((IData)(vlSelfRef.fetch1_fault_page_i) 
                                           << 1U) | (IData)(vlSelfRef.fetch1_fault_fetch_i));
            vlSelfRef.opcode_b_pc_r = 0U;
            vlSelfRef.opcode_a_pc_r = vlSelfRef.fetch1_pc_i;
            vlSelfRef.opcode_a_valid_r = 1U;
            vlSelfRef.opcode_b_valid_r = 0U;
            vlSelfRef.opcode_b_r = 0U;
            vlSelfRef.opcode_a_r = vlSelfRef.fetch1_instr_i;
        }
        vlSelfRef.issue_a_invalid_w = vlSelfRef.fetch1_instr_invalid_i;
        vlSelfRef.issue_a_div_w = vlSelfRef.fetch1_instr_div_i;
        vlSelfRef.issue_a_sb_alloc_w = vlSelfRef.fetch1_instr_rd_valid_i;
        vlSelfRef.issue_a_csr_w = vlSelfRef.fetch1_instr_csr_i;
        vlSelfRef.issue_a_lsu_w = vlSelfRef.fetch1_instr_lsu_i;
        vlSelfRef.issue_a_mul_w = vlSelfRef.fetch1_instr_mul_i;
        vlSelfRef.issue_a_exec_w = vlSelfRef.fetch1_instr_exec_i;
    }
    vlSelfRef.u_pipe0_ctrl__DOT__issue_branch_i = vlSelfRef.issue_a_branch_w;
    vlSelfRef.issue_b_fault_w = ((1U & (IData)(vlSelfRef.opcode_b_fault_r))
                                  ? 0x11U : ((2U & (IData)(vlSelfRef.opcode_b_fault_r))
                                              ? 0x1cU
                                              : 0U));
    vlSelfRef.issue_a_fault_w = ((1U & (IData)(vlSelfRef.opcode_a_fault_r))
                                  ? 0x11U : ((2U & (IData)(vlSelfRef.opcode_a_fault_r))
                                              ? 0x1cU
                                              : 0U));
    vlSelfRef.opcode1_pc_o = vlSelfRef.opcode_b_pc_r;
    vlSelfRef.csr_opcode_pc_o = vlSelfRef.opcode_a_pc_r;
    vlSelfRef.opcode0_pc_o = vlSelfRef.opcode_a_pc_r;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_div_i = vlSelfRef.issue_a_div_w;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_rd_valid_i = vlSelfRef.issue_a_sb_alloc_w;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_csr_i = vlSelfRef.issue_a_csr_w;
    vlSelfRef.interrupt_inhibit_o = ((IData)(vlSelfRef.csr_pending_q) 
                                     | (IData)(vlSelfRef.issue_a_csr_w));
    vlSelfRef.u_pipe0_ctrl__DOT__issue_lsu_i = vlSelfRef.issue_a_lsu_w;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_mul_i = vlSelfRef.issue_a_mul_w;
    __VdfgRegularize_h8df87ebf_0_0 = ((IData)(vlSelfRef.issue_a_exec_w) 
                                      | (IData)(vlSelfRef.issue_a_lsu_w));
    vlSelfRef.opcode1_opcode_o = vlSelfRef.opcode_b_r;
    vlSelfRef.issue_b_rd_idx_w = (0x1fU & (vlSelfRef.opcode_b_r 
                                           >> 7U));
    vlSelfRef.issue_b_rb_idx_w = (0x1fU & (vlSelfRef.opcode_b_r 
                                           >> 0x14U));
    vlSelfRef.issue_b_ra_idx_w = (0x1fU & (vlSelfRef.opcode_b_r 
                                           >> 0xfU));
    vlSelfRef.csr_opcode_opcode_o = vlSelfRef.opcode_a_r;
    vlSelfRef.opcode0_opcode_o = vlSelfRef.opcode_a_r;
    vlSelfRef.issue_a_rd_idx_w = (0x1fU & (vlSelfRef.opcode_a_r 
                                           >> 7U));
    vlSelfRef.issue_a_rb_idx_w = (0x1fU & (vlSelfRef.opcode_a_r 
                                           >> 0x14U));
    vlSelfRef.issue_a_ra_idx_w = (0x1fU & (vlSelfRef.opcode_a_r 
                                           >> 0xfU));
    vlSelfRef.u_pipe1_ctrl__DOT__issue_exception_i 
        = vlSelfRef.issue_b_fault_w;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_exception_i 
        = vlSelfRef.issue_a_fault_w;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_pc_i = vlSelfRef.opcode1_pc_o;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_pc_i = vlSelfRef.opcode0_pc_o;
    __VdfgRegularize_h8df87ebf_0_1 = ((IData)(__VdfgRegularize_h8df87ebf_0_0) 
                                      | (IData)(vlSelfRef.issue_a_mul_w));
    vlSelfRef.u_pipe1_ctrl__DOT__issue_opcode_i = vlSelfRef.opcode1_opcode_o;
    vlSelfRef.u_pipe1_ctrl__DOT__issue_rd_i = vlSelfRef.issue_b_rd_idx_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__rd_idx_w 
        = vlSelfRef.issue_b_rd_idx_w;
    vlSelfRef.opcode1_rd_idx_o = vlSelfRef.issue_b_rd_idx_w;
    vlSelfRef.opcode1_rb_idx_o = vlSelfRef.issue_b_rb_idx_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__rb_idx_w 
        = vlSelfRef.issue_b_rb_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rb1_i 
        = vlSelfRef.issue_b_rb_idx_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__ra_idx_w 
        = vlSelfRef.issue_b_ra_idx_w;
    vlSelfRef.opcode1_ra_idx_o = vlSelfRef.issue_b_ra_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.ra1_i 
        = vlSelfRef.issue_b_ra_idx_w;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_opcode_i = vlSelfRef.opcode0_opcode_o;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_rd_i = vlSelfRef.issue_a_rd_idx_w;
    vlSelfRef.csr_opcode_rd_idx_o = vlSelfRef.issue_a_rd_idx_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__rd_idx_w 
        = vlSelfRef.issue_a_rd_idx_w;
    vlSelfRef.opcode0_rd_idx_o = vlSelfRef.issue_a_rd_idx_w;
    vlSelfRef.csr_opcode_rb_idx_o = vlSelfRef.issue_a_rb_idx_w;
    vlSelfRef.opcode0_rb_idx_o = vlSelfRef.issue_a_rb_idx_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__rb_idx_w 
        = vlSelfRef.issue_a_rb_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.rb0_i 
        = vlSelfRef.issue_a_rb_idx_w;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__ra_idx_w 
        = vlSelfRef.issue_a_ra_idx_w;
    vlSelfRef.csr_opcode_ra_idx_o = vlSelfRef.issue_a_ra_idx_w;
    vlSelfRef.opcode0_ra_idx_o = vlSelfRef.issue_a_ra_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue__u_regfile.ra0_i 
        = vlSelfRef.issue_a_ra_idx_w;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__pc_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__issue_pc_i;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__pc_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__issue_pc_i;
    vlSelfRef.dual_issue_ok_w = ((IData)(vlSelfRef.enable_dual_issue_w) 
                                 & ((IData)(vlSelfRef.pipe1_ok_w) 
                                    & ((~ (IData)(vlSelfRef.take_interrupt_i)) 
                                       & (((IData)(__VdfgRegularize_h8df87ebf_0_1) 
                                           & (IData)(vlSelfRef.fetch1_instr_exec_i)) 
                                          | (((IData)(__VdfgRegularize_h8df87ebf_0_1) 
                                              & (IData)(vlSelfRef.fetch1_instr_branch_i)) 
                                             | ((((IData)(vlSelfRef.issue_a_exec_w) 
                                                  | (IData)(vlSelfRef.issue_a_mul_w)) 
                                                 & (IData)(vlSelfRef.fetch1_instr_lsu_i)) 
                                                | ((IData)(__VdfgRegularize_h8df87ebf_0_0) 
                                                   & (IData)(vlSelfRef.fetch1_instr_mul_i))))))));
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__opcode_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__issue_opcode_i;
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
                    __Vtemp_634[0U] = 0x7436U;
                    __Vtemp_680[0U] = 0x6135U;
                } else {
                    __Vtemp_634[0U] = 0x7435U;
                    __Vtemp_680[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
                __Vtemp_634[0U] = 0x7434U;
                __Vtemp_680[0U] = 0x6133U;
            } else {
                __Vtemp_634[0U] = 0x7433U;
                __Vtemp_680[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
                __Vtemp_634[0U] = 0x733131U;
                __Vtemp_680[0U] = 0x6131U;
            } else {
                __Vtemp_634[0U] = 0x733130U;
                __Vtemp_680[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
            __Vtemp_634[0U] = 0x7339U;
            __Vtemp_680[0U] = 0x7331U;
        } else {
            __Vtemp_634[0U] = 0x7338U;
            __Vtemp_680[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
                __Vtemp_634[0U] = 0x7337U;
                __Vtemp_680[0U] = 0x7432U;
            } else {
                __Vtemp_634[0U] = 0x7336U;
                __Vtemp_680[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
            __Vtemp_634[0U] = 0x7335U;
            __Vtemp_680[0U] = 0x7430U;
        } else {
            __Vtemp_634[0U] = 0x7334U;
            __Vtemp_680[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
            __Vtemp_634[0U] = 0x7333U;
            __Vtemp_680[0U] = 0x6770U;
        } else {
            __Vtemp_634[0U] = 0x7332U;
            __Vtemp_680[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
        __Vtemp_634[0U] = 0x6137U;
        __Vtemp_680[0U] = 0x7261U;
    } else {
        __Vtemp_634[0U] = 0x6136U;
        __Vtemp_680[0U] = 0x7a65726fU;
    }
    __Vtemp_634[1U] = 0U;
    __Vtemp_634[2U] = 0U;
    __Vtemp_680[1U] = 0U;
    __Vtemp_680[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[0U] 
            = __Vtemp_634[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[1U] 
            = __Vtemp_634[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[2U] 
            = __Vtemp_634[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[0U] 
            = __Vtemp_680[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[1U] 
            = __Vtemp_680[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[2U] 
            = __Vtemp_680[2U];
    }
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[0U];
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[1U];
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__8__Vfuncout[2U];
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
                    __Vtemp_727[0U] = 0x7436U;
                    __Vtemp_773[0U] = 0x6135U;
                } else {
                    __Vtemp_727[0U] = 0x7435U;
                    __Vtemp_773[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
                __Vtemp_727[0U] = 0x7434U;
                __Vtemp_773[0U] = 0x6133U;
            } else {
                __Vtemp_727[0U] = 0x7433U;
                __Vtemp_773[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
                __Vtemp_727[0U] = 0x733131U;
                __Vtemp_773[0U] = 0x6131U;
            } else {
                __Vtemp_727[0U] = 0x733130U;
                __Vtemp_773[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
            __Vtemp_727[0U] = 0x7339U;
            __Vtemp_773[0U] = 0x7331U;
        } else {
            __Vtemp_727[0U] = 0x7338U;
            __Vtemp_773[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
                __Vtemp_727[0U] = 0x7337U;
                __Vtemp_773[0U] = 0x7432U;
            } else {
                __Vtemp_727[0U] = 0x7336U;
                __Vtemp_773[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
            __Vtemp_727[0U] = 0x7335U;
            __Vtemp_773[0U] = 0x7430U;
        } else {
            __Vtemp_727[0U] = 0x7334U;
            __Vtemp_773[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
            __Vtemp_727[0U] = 0x7333U;
            __Vtemp_773[0U] = 0x6770U;
        } else {
            __Vtemp_727[0U] = 0x7332U;
            __Vtemp_773[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
        __Vtemp_727[0U] = 0x6137U;
        __Vtemp_773[0U] = 0x7261U;
    } else {
        __Vtemp_727[0U] = 0x6136U;
        __Vtemp_773[0U] = 0x7a65726fU;
    }
    __Vtemp_727[1U] = 0U;
    __Vtemp_727[2U] = 0U;
    __Vtemp_773[1U] = 0U;
    __Vtemp_773[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[0U] 
            = __Vtemp_727[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[1U] 
            = __Vtemp_727[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[2U] 
            = __Vtemp_727[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[0U] 
            = __Vtemp_773[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[1U] 
            = __Vtemp_773[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[2U] 
            = __Vtemp_773[2U];
    }
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[0U];
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[1U];
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__7__Vfuncout[2U];
    __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum 
        = vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
                    __Vtemp_820[0U] = 0x7436U;
                    __Vtemp_866[0U] = 0x6135U;
                } else {
                    __Vtemp_820[0U] = 0x7435U;
                    __Vtemp_866[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
                __Vtemp_820[0U] = 0x7434U;
                __Vtemp_866[0U] = 0x6133U;
            } else {
                __Vtemp_820[0U] = 0x7433U;
                __Vtemp_866[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
                __Vtemp_820[0U] = 0x733131U;
                __Vtemp_866[0U] = 0x6131U;
            } else {
                __Vtemp_820[0U] = 0x733130U;
                __Vtemp_866[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
            __Vtemp_820[0U] = 0x7339U;
            __Vtemp_866[0U] = 0x7331U;
        } else {
            __Vtemp_820[0U] = 0x7338U;
            __Vtemp_866[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
                __Vtemp_820[0U] = 0x7337U;
                __Vtemp_866[0U] = 0x7432U;
            } else {
                __Vtemp_820[0U] = 0x7336U;
                __Vtemp_866[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
            __Vtemp_820[0U] = 0x7335U;
            __Vtemp_866[0U] = 0x7430U;
        } else {
            __Vtemp_820[0U] = 0x7334U;
            __Vtemp_866[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
            __Vtemp_820[0U] = 0x7333U;
            __Vtemp_866[0U] = 0x6770U;
        } else {
            __Vtemp_820[0U] = 0x7332U;
            __Vtemp_866[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
        __Vtemp_820[0U] = 0x6137U;
        __Vtemp_866[0U] = 0x7261U;
    } else {
        __Vtemp_820[0U] = 0x6136U;
        __Vtemp_866[0U] = 0x7a65726fU;
    }
    __Vtemp_820[1U] = 0U;
    __Vtemp_820[2U] = 0U;
    __Vtemp_866[1U] = 0U;
    __Vtemp_866[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__regnum))) {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[0U] 
            = __Vtemp_820[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[1U] 
            = __Vtemp_820[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[2U] 
            = __Vtemp_820[2U];
    } else {
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[0U] 
            = __Vtemp_866[0U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[1U] 
            = __Vtemp_866[1U];
        __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[2U] 
            = __Vtemp_866[2U];
    }
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[0U];
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[1U];
    u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe1_ctrl__DOT__u_trace_d__DOT__get_regname_str__6__Vfuncout[2U];
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__opcode_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__issue_opcode_i;
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__rd_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                    __Vtemp_913[0U] = 0x7436U;
                    __Vtemp_959[0U] = 0x6135U;
                } else {
                    __Vtemp_913[0U] = 0x7435U;
                    __Vtemp_959[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                __Vtemp_913[0U] = 0x7434U;
                __Vtemp_959[0U] = 0x6133U;
            } else {
                __Vtemp_913[0U] = 0x7433U;
                __Vtemp_959[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                __Vtemp_913[0U] = 0x733131U;
                __Vtemp_959[0U] = 0x6131U;
            } else {
                __Vtemp_913[0U] = 0x733130U;
                __Vtemp_959[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            __Vtemp_913[0U] = 0x7339U;
            __Vtemp_959[0U] = 0x7331U;
        } else {
            __Vtemp_913[0U] = 0x7338U;
            __Vtemp_959[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                __Vtemp_913[0U] = 0x7337U;
                __Vtemp_959[0U] = 0x7432U;
            } else {
                __Vtemp_913[0U] = 0x7336U;
                __Vtemp_959[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            __Vtemp_913[0U] = 0x7335U;
            __Vtemp_959[0U] = 0x7430U;
        } else {
            __Vtemp_913[0U] = 0x7334U;
            __Vtemp_959[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            __Vtemp_913[0U] = 0x7333U;
            __Vtemp_959[0U] = 0x6770U;
        } else {
            __Vtemp_913[0U] = 0x7332U;
            __Vtemp_959[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        __Vtemp_913[0U] = 0x6137U;
        __Vtemp_959[0U] = 0x7261U;
    } else {
        __Vtemp_913[0U] = 0x6136U;
        __Vtemp_959[0U] = 0x7a65726fU;
    }
    __Vtemp_913[1U] = 0U;
    __Vtemp_913[2U] = 0U;
    __Vtemp_959[1U] = 0U;
    __Vtemp_959[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[0U] 
            = __Vtemp_913[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[1U] 
            = __Vtemp_913[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[2U] 
            = __Vtemp_913[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[0U] 
            = __Vtemp_959[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[1U] 
            = __Vtemp_959[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[2U] 
            = __Vtemp_959[2U];
    }
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[0U];
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[1U];
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[2U];
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__rb_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                    __Vtemp_1006[0U] = 0x7436U;
                    __Vtemp_1052[0U] = 0x6135U;
                } else {
                    __Vtemp_1006[0U] = 0x7435U;
                    __Vtemp_1052[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                __Vtemp_1006[0U] = 0x7434U;
                __Vtemp_1052[0U] = 0x6133U;
            } else {
                __Vtemp_1006[0U] = 0x7433U;
                __Vtemp_1052[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                __Vtemp_1006[0U] = 0x733131U;
                __Vtemp_1052[0U] = 0x6131U;
            } else {
                __Vtemp_1006[0U] = 0x733130U;
                __Vtemp_1052[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            __Vtemp_1006[0U] = 0x7339U;
            __Vtemp_1052[0U] = 0x7331U;
        } else {
            __Vtemp_1006[0U] = 0x7338U;
            __Vtemp_1052[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                __Vtemp_1006[0U] = 0x7337U;
                __Vtemp_1052[0U] = 0x7432U;
            } else {
                __Vtemp_1006[0U] = 0x7336U;
                __Vtemp_1052[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            __Vtemp_1006[0U] = 0x7335U;
            __Vtemp_1052[0U] = 0x7430U;
        } else {
            __Vtemp_1006[0U] = 0x7334U;
            __Vtemp_1052[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            __Vtemp_1006[0U] = 0x7333U;
            __Vtemp_1052[0U] = 0x6770U;
        } else {
            __Vtemp_1006[0U] = 0x7332U;
            __Vtemp_1052[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        __Vtemp_1006[0U] = 0x6137U;
        __Vtemp_1052[0U] = 0x7261U;
    } else {
        __Vtemp_1006[0U] = 0x6136U;
        __Vtemp_1052[0U] = 0x7a65726fU;
    }
    __Vtemp_1006[1U] = 0U;
    __Vtemp_1006[2U] = 0U;
    __Vtemp_1052[1U] = 0U;
    __Vtemp_1052[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[0U] 
            = __Vtemp_1006[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[1U] 
            = __Vtemp_1006[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[2U] 
            = __Vtemp_1006[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[0U] 
            = __Vtemp_1052[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[1U] 
            = __Vtemp_1052[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[2U] 
            = __Vtemp_1052[2U];
    }
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[0U];
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[1U];
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[2U];
    __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum 
        = vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__ra_idx_w;
    if ((8U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                    __Vtemp_1099[0U] = 0x7436U;
                    __Vtemp_1145[0U] = 0x6135U;
                } else {
                    __Vtemp_1099[0U] = 0x7435U;
                    __Vtemp_1145[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                __Vtemp_1099[0U] = 0x7434U;
                __Vtemp_1145[0U] = 0x6133U;
            } else {
                __Vtemp_1099[0U] = 0x7433U;
                __Vtemp_1145[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                __Vtemp_1099[0U] = 0x733131U;
                __Vtemp_1145[0U] = 0x6131U;
            } else {
                __Vtemp_1099[0U] = 0x733130U;
                __Vtemp_1145[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            __Vtemp_1099[0U] = 0x7339U;
            __Vtemp_1145[0U] = 0x7331U;
        } else {
            __Vtemp_1099[0U] = 0x7338U;
            __Vtemp_1145[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                __Vtemp_1099[0U] = 0x7337U;
                __Vtemp_1145[0U] = 0x7432U;
            } else {
                __Vtemp_1099[0U] = 0x7336U;
                __Vtemp_1145[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            __Vtemp_1099[0U] = 0x7335U;
            __Vtemp_1145[0U] = 0x7430U;
        } else {
            __Vtemp_1099[0U] = 0x7334U;
            __Vtemp_1145[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            __Vtemp_1099[0U] = 0x7333U;
            __Vtemp_1145[0U] = 0x6770U;
        } else {
            __Vtemp_1099[0U] = 0x7332U;
            __Vtemp_1145[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        __Vtemp_1099[0U] = 0x6137U;
        __Vtemp_1145[0U] = 0x7261U;
    } else {
        __Vtemp_1099[0U] = 0x6136U;
        __Vtemp_1145[0U] = 0x7a65726fU;
    }
    __Vtemp_1099[1U] = 0U;
    __Vtemp_1099[2U] = 0U;
    __Vtemp_1145[1U] = 0U;
    __Vtemp_1145[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[0U] 
            = __Vtemp_1099[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[1U] 
            = __Vtemp_1099[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[2U] 
            = __Vtemp_1099[2U];
    } else {
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[0U] 
            = __Vtemp_1145[0U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[1U] 
            = __Vtemp_1145[1U];
        __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[2U] 
            = __Vtemp_1145[2U];
    }
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[0U];
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[1U];
    u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe0_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[2U];
    vlSelfRef.opcode_a_issue_r = 0U;
    vlSelfRef.opcode_b_issue_r = 0U;
    vlSelfRef.opcode_a_accept_r = 0U;
    vlSelfRef.opcode_b_accept_r = 0U;
    vlSelfRef.scoreboard_r = 0U;
    vlSelfRef.pipe1_mux_lsu_r = 0U;
    vlSelfRef.pipe1_mux_mul_r = 0U;
    if (((IData)(vlSelfRef.pipe0_load_e1_w) | (IData)(vlSelfRef.pipe0_mul_e1_w))) {
        vlSelfRef.scoreboard_r = (vlSelfRef.scoreboard_r 
                                  | (0xffffffffULL 
                                     & ((IData)(1U) 
                                        << (IData)(vlSelfRef.pipe0_rd_e1_w))));
    }
    if (((IData)(vlSelfRef.pipe1_load_e1_w) | (IData)(vlSelfRef.pipe1_mul_e1_w))) {
        vlSelfRef.scoreboard_r = (vlSelfRef.scoreboard_r 
                                  | (0xffffffffULL 
                                     & ((IData)(1U) 
                                        << (IData)(vlSelfRef.pipe1_rd_e1_w))));
    }
    if ((((((IData)(vlSelfRef.pipe0_load_e1_w) | (IData)(vlSelfRef.pipe0_store_e1_w)) 
           | (IData)(vlSelfRef.pipe1_load_e1_w)) | (IData)(vlSelfRef.pipe1_store_e1_w)) 
         & (((IData)(vlSelfRef.issue_a_mul_w) | (IData)(vlSelfRef.issue_a_div_w)) 
            | (IData)(vlSelfRef.issue_a_csr_w)))) {
        vlSelfRef.scoreboard_r = 0xffffffffU;
    }
    if ((1U & (~ ((((IData)(vlSelfRef.lsu_stall_i) 
                    | (IData)(vlSelfRef.stall_w)) | (IData)(vlSelfRef.div_pending_q)) 
                  | (IData)(vlSelfRef.csr_pending_q))))) {
        if (((IData)(vlSelfRef.opcode_a_valid_r) & 
             (~ (((vlSelfRef.scoreboard_r >> (IData)(vlSelfRef.issue_a_ra_idx_w)) 
                  | (vlSelfRef.scoreboard_r >> (IData)(vlSelfRef.issue_a_rb_idx_w))) 
                 | (vlSelfRef.scoreboard_r >> (IData)(vlSelfRef.issue_a_rd_idx_w)))))) {
            vlSelfRef.opcode_a_accept_r = 1U;
            vlSelfRef.opcode_a_issue_r = 1U;
            if ((((IData)(vlSelfRef.opcode_a_accept_r) 
                  & (IData)(vlSelfRef.issue_a_sb_alloc_w)) 
                 & (0U != (IData)(vlSelfRef.issue_a_rd_idx_w)))) {
                vlSelfRef.scoreboard_r = (vlSelfRef.scoreboard_r 
                                          | (0xffffffffULL 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelfRef.issue_a_rd_idx_w))));
            }
        }
        if (((((IData)(vlSelfRef.dual_issue_ok_w) & (IData)(vlSelfRef.opcode_b_valid_r)) 
              & (IData)(vlSelfRef.opcode_a_accept_r)) 
             & (~ (((vlSelfRef.scoreboard_r >> (IData)(vlSelfRef.issue_b_ra_idx_w)) 
                    | (vlSelfRef.scoreboard_r >> (IData)(vlSelfRef.issue_b_rb_idx_w))) 
                   | (vlSelfRef.scoreboard_r >> (IData)(vlSelfRef.issue_b_rd_idx_w)))))) {
            vlSelfRef.opcode_b_accept_r = 1U;
            vlSelfRef.opcode_b_issue_r = 1U;
            vlSelfRef.pipe1_mux_lsu_r = vlSelfRef.issue_b_lsu_w;
            vlSelfRef.pipe1_mux_mul_r = vlSelfRef.issue_b_mul_w;
            if ((((IData)(vlSelfRef.opcode_b_accept_r) 
                  & (IData)(vlSelfRef.issue_b_sb_alloc_w)) 
                 & (0U != (IData)(vlSelfRef.issue_b_rd_idx_w)))) {
                vlSelfRef.scoreboard_r = (vlSelfRef.scoreboard_r 
                                          | (0xffffffffULL 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelfRef.issue_b_rd_idx_w))));
            }
        }
    }
    vlSelfRef.u_pipe1_ctrl__DOT__issue_accept_i = vlSelfRef.opcode_b_accept_r;
    vlSelfRef.u_pipe0_ctrl__DOT__issue_accept_i = vlSelfRef.opcode_a_accept_r;
    vlSelfRef.fetch0_accept_o = ((~ (IData)(vlSelfRef.take_interrupt_i)) 
                                 & (((IData)(vlSelfRef.opcode_a_accept_r) 
                                     & (IData)(vlSelfRef.slot0_valid_r)) 
                                    | (IData)(vlSelfRef.slot1_valid_r)));
    vlSelfRef.fetch1_accept_o = ((~ (IData)(vlSelfRef.take_interrupt_i)) 
                                 & (((IData)(vlSelfRef.opcode_a_accept_r) 
                                     & (IData)(vlSelfRef.slot1_valid_r)) 
                                    | (IData)(vlSelfRef.opcode_b_accept_r)));
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc = 0U;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
    if (vlSelfRef.opcode_b_issue_r) {
        vlSelfRef.u_pipe1_ctrl__DOT__issue_valid_i = 1U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc 
            = vlSelfRef.opcode1_pc_o;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] 
            = u_pipe1_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if (((((((((0x7013U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                   | (0x13U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                  | (0x2013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                 | (0x3013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                | (0x6013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
               | (0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_o))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_o)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_o))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.opcode1_opcode_o)) 
                          | (0x37U == (0x7fU & vlSelfRef.opcode1_opcode_o))) 
                         | (0x17U == (0x7fU & vlSelfRef.opcode1_opcode_o))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.opcode1_opcode_o))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.opcode1_opcode_o))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.opcode1_opcode_o))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.opcode1_opcode_o))) 
                      | (0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_o))) 
                     | (0x67U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                    | (0x63U == (0x707fU & vlSelfRef.opcode1_opcode_o)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSelfRef.opcode1_opcode_o))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                          | (0x4063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                         | (0x5063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                        | (0x6063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                       | (0x7063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                      | (3U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                     | (0x1003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                    | (0x2003U == (0x707fU & vlSelfRef.opcode1_opcode_o)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSelfRef.opcode1_opcode_o))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                          | (0x5003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                         | (0x6003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                        | (0x23U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                       | (0x1023U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                      | (0x2023U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                     | (0x73U == vlSelfRef.opcode1_opcode_o)) 
                    | (0x100073U == vlSelfRef.opcode1_opcode_o))) {
            if ((0x4003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.opcode1_opcode_o)) {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.opcode1_opcode_o)) 
                          | (0x1073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                         | (0x2073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                        | (0x3073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                       | (0x5073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                      | (0x6073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                     | (0x7073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.opcode1_opcode_o)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.opcode1_opcode_o))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.opcode1_opcode_o))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.opcode1_opcode_o))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.opcode1_opcode_o))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.opcode1_opcode_o))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) 
                    | (0x100fU == (0x707fU & vlSelfRef.opcode1_opcode_o)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_o))) {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.opcode1_opcode_o))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.opcode1_opcode_o))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.opcode1_opcode_o))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.opcode1_opcode_o))) 
                          || (0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                         || (0x1073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                        || (0x2073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                       || (0x3073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                      || (0x5073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                     || (0x6073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                    || (0x7073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_o)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.opcode1_opcode_o))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.opcode1_opcode_o)))) 
                  | (0x37U == (0x7fU & vlSelfRef.opcode1_opcode_o))) 
                 | (0x17U == (0x7fU & vlSelfRef.opcode1_opcode_o))) 
                | (0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_o))) 
               | (0x67U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
              | ((((((3U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                     || (0x1003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                    || (0x2003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                   || (0x4003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                  || (0x5003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                 || (0x6003U == (0x707fU & vlSelfRef.opcode1_opcode_o)))) 
             | (((0x23U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                 || (0x1023U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                || (0x2023U == (0x707fU & vlSelfRef.opcode1_opcode_o))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.opcode1_opcode_o)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.opcode1_opcode_o))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.opcode1_opcode_o))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.opcode1_opcode_o))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.opcode1_opcode_o))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.opcode1_opcode_o))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.opcode1_opcode_o))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.opcode1_opcode_o))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.opcode1_opcode_o))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.opcode1_opcode_o))) 
                          || (0x7073U == (0x707fU & vlSelfRef.opcode1_opcode_o)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.opcode1_opcode_o)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.opcode1_opcode_o))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.opcode1_opcode_o)))))) {
                    if ((0x37U == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                        if ((0x17U != (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                            if ((0x6fU != (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.opcode1_opcode_o))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.opcode1_opcode_o)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.opcode1_opcode_o))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.opcode1_opcode_o))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.opcode1_opcode_o))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.opcode1_opcode_o))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.opcode1_opcode_o)))))) {
                                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                                if ((1U == (IData)(vlSelfRef.issue_b_rd_idx_w))) {
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.opcode1_opcode_o))) {
                                if (((1U == (IData)(vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__ra_idx_w)) 
                                     & (0U == (((- (IData)(
                                                           (vlSelfRef.opcode1_opcode_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.opcode1_opcode_o 
                                                  >> 0x14U))))) {
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (IData)(vlSelfRef.issue_b_rd_idx_w))) {
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.opcode1_opcode_o))) 
                          || (0x2013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                         || (0x3013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                        || (0x6013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                       || (0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                      || (0x1073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                     || (0x2073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                    || (0x3073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                   || (0x5073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                  || (0x6073U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                 || (0x7073U == (0x707fU & vlSelfRef.opcode1_opcode_o)))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode1_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.opcode1_opcode_o 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_o)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.opcode1_opcode_o))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.opcode1_opcode_o)))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.opcode1_opcode_o 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.opcode1_opcode_o);
            } else if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.opcode1_opcode_o);
            } else if ((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (vlSelfRef.opcode1_pc_o + (((- (IData)(
                                                             (vlSelfRef.opcode1_opcode_o 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | (((0xff000U 
                                                      & vlSelfRef.opcode1_opcode_o) 
                                                     | (0x800U 
                                                        & (vlSelfRef.opcode1_opcode_o 
                                                           >> 9U))) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.opcode1_opcode_o 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.opcode1_opcode_o 
                                                             >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.opcode1_opcode_o))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode1_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.opcode1_opcode_o 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.opcode1_opcode_o)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.opcode1_opcode_o))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.opcode1_opcode_o))) 
                          || (0x4003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                         || (0x5003U == (0x707fU & vlSelfRef.opcode1_opcode_o))) 
                        || (0x6003U == (0x707fU & vlSelfRef.opcode1_opcode_o)))) {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode1_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.opcode1_opcode_o 
                          >> 0x14U));
            } else {
                vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode1_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.opcode1_opcode_o 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.opcode1_opcode_o 
                                                      >> 7U))));
            }
        }
        vlSelfRef.dual_issue_w = ((~ (IData)(vlSelfRef.take_interrupt_i)) 
                                  & (IData)(vlSelfRef.opcode_b_accept_r));
        vlSelfRef.exec1_opcode_valid_o = 1U;
    } else {
        vlSelfRef.u_pipe1_ctrl__DOT__issue_valid_i = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.dual_issue_w = 0U;
        vlSelfRef.exec1_opcode_valid_o = 0U;
    }
    if (vlSelfRef.pipe1_mux_mul_r) {
        vlSelfRef.mul_opcode_pc_o = vlSelfRef.opcode_b_pc_r;
        vlSelfRef.mul_opcode_rd_idx_o = vlSelfRef.issue_b_rd_idx_w;
        vlSelfRef.mul_opcode_ra_idx_o = vlSelfRef.issue_b_ra_idx_w;
        vlSelfRef.mul_opcode_rb_idx_o = vlSelfRef.issue_b_rb_idx_w;
        vlSelfRef.mul_opcode_opcode_o = vlSelfRef.opcode_b_r;
    } else {
        vlSelfRef.mul_opcode_pc_o = vlSelfRef.opcode_a_pc_r;
        vlSelfRef.mul_opcode_rd_idx_o = vlSelfRef.issue_a_rd_idx_w;
        vlSelfRef.mul_opcode_ra_idx_o = vlSelfRef.issue_a_ra_idx_w;
        vlSelfRef.mul_opcode_rb_idx_o = vlSelfRef.issue_a_rb_idx_w;
        vlSelfRef.mul_opcode_opcode_o = vlSelfRef.opcode_a_r;
    }
    if (vlSelfRef.pipe1_mux_lsu_r) {
        vlSelfRef.lsu_opcode_pc_o = vlSelfRef.opcode_b_pc_r;
        vlSelfRef.lsu_opcode_rd_idx_o = vlSelfRef.issue_b_rd_idx_w;
        vlSelfRef.lsu_opcode_ra_idx_o = vlSelfRef.issue_b_ra_idx_w;
        vlSelfRef.lsu_opcode_rb_idx_o = vlSelfRef.issue_b_rb_idx_w;
        vlSelfRef.lsu_opcode_opcode_o = vlSelfRef.opcode_b_r;
    } else {
        vlSelfRef.lsu_opcode_pc_o = vlSelfRef.opcode_a_pc_r;
        vlSelfRef.lsu_opcode_rd_idx_o = vlSelfRef.issue_a_rd_idx_w;
        vlSelfRef.lsu_opcode_ra_idx_o = vlSelfRef.issue_a_ra_idx_w;
        vlSelfRef.lsu_opcode_rb_idx_o = vlSelfRef.issue_a_rb_idx_w;
        vlSelfRef.lsu_opcode_opcode_o = vlSelfRef.opcode_a_r;
    }
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc = 0U;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
    if (vlSelfRef.opcode_a_issue_r) {
        vlSelfRef.u_pipe0_ctrl__DOT__issue_valid_i = 1U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc 
            = vlSelfRef.opcode0_pc_o;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] 
            = u_pipe0_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if (((((((((0x7013U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                   | (0x13U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                  | (0x2013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                 | (0x3013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                | (0x6013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
               | (0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_o))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_o)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_o))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.opcode0_opcode_o)) 
                          | (0x37U == (0x7fU & vlSelfRef.opcode0_opcode_o))) 
                         | (0x17U == (0x7fU & vlSelfRef.opcode0_opcode_o))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.opcode0_opcode_o))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.opcode0_opcode_o))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.opcode0_opcode_o))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.opcode0_opcode_o))) 
                      | (0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_o))) 
                     | (0x67U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                    | (0x63U == (0x707fU & vlSelfRef.opcode0_opcode_o)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSelfRef.opcode0_opcode_o))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                          | (0x4063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                         | (0x5063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                        | (0x6063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                       | (0x7063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                      | (3U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                     | (0x1003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                    | (0x2003U == (0x707fU & vlSelfRef.opcode0_opcode_o)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSelfRef.opcode0_opcode_o))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                          | (0x5003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                         | (0x6003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                        | (0x23U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                       | (0x1023U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                      | (0x2023U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                     | (0x73U == vlSelfRef.opcode0_opcode_o)) 
                    | (0x100073U == vlSelfRef.opcode0_opcode_o))) {
            if ((0x4003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.opcode0_opcode_o)) {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.opcode0_opcode_o)) 
                          | (0x1073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                         | (0x2073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                        | (0x3073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                       | (0x5073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                      | (0x6073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                     | (0x7073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.opcode0_opcode_o)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.opcode0_opcode_o))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.opcode0_opcode_o))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.opcode0_opcode_o))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.opcode0_opcode_o))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.opcode0_opcode_o))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) 
                    | (0x100fU == (0x707fU & vlSelfRef.opcode0_opcode_o)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_o))) {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.opcode0_opcode_o))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.opcode0_opcode_o))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.opcode0_opcode_o))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.opcode0_opcode_o))) 
                          || (0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                         || (0x1073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                        || (0x2073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                       || (0x3073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                      || (0x5073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                     || (0x6073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                    || (0x7073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_o)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.opcode0_opcode_o))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.opcode0_opcode_o)))) 
                  | (0x37U == (0x7fU & vlSelfRef.opcode0_opcode_o))) 
                 | (0x17U == (0x7fU & vlSelfRef.opcode0_opcode_o))) 
                | (0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_o))) 
               | (0x67U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
              | ((((((3U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                     || (0x1003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                    || (0x2003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                   || (0x4003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                  || (0x5003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                 || (0x6003U == (0x707fU & vlSelfRef.opcode0_opcode_o)))) 
             | (((0x23U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                 || (0x1023U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                || (0x2023U == (0x707fU & vlSelfRef.opcode0_opcode_o))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.opcode0_opcode_o)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.opcode0_opcode_o))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.opcode0_opcode_o))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.opcode0_opcode_o))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.opcode0_opcode_o))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.opcode0_opcode_o))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.opcode0_opcode_o))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.opcode0_opcode_o))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.opcode0_opcode_o))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.opcode0_opcode_o))) 
                          || (0x7073U == (0x707fU & vlSelfRef.opcode0_opcode_o)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.opcode0_opcode_o)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.opcode0_opcode_o))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.opcode0_opcode_o)))))) {
                    if ((0x37U == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    }
                    if ((0x37U != (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                        if ((0x17U != (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                            if ((0x6fU != (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.opcode0_opcode_o))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.opcode0_opcode_o)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.opcode0_opcode_o))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.opcode0_opcode_o))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.opcode0_opcode_o))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.opcode0_opcode_o))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.opcode0_opcode_o)))))) {
                                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                                if ((1U == (IData)(vlSelfRef.issue_a_rd_idx_w))) {
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.opcode0_opcode_o))) {
                                if (((1U == (IData)(vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__ra_idx_w)) 
                                     & (0U == (((- (IData)(
                                                           (vlSelfRef.opcode0_opcode_o 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.opcode0_opcode_o 
                                                  >> 0x14U))))) {
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (IData)(vlSelfRef.issue_a_rd_idx_w))) {
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.opcode0_opcode_o))) 
                          || (0x2013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                         || (0x3013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                        || (0x6013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                       || (0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                      || (0x1073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                     || (0x2073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                    || (0x3073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                   || (0x5073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                  || (0x6073U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                 || (0x7073U == (0x707fU & vlSelfRef.opcode0_opcode_o)))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode0_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.opcode0_opcode_o 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_o)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.opcode0_opcode_o))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.opcode0_opcode_o)))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.opcode0_opcode_o 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.opcode0_opcode_o);
            } else if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.opcode0_opcode_o);
            } else if ((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (vlSelfRef.opcode0_pc_o + (((- (IData)(
                                                             (vlSelfRef.opcode0_opcode_o 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | (((0xff000U 
                                                      & vlSelfRef.opcode0_opcode_o) 
                                                     | (0x800U 
                                                        & (vlSelfRef.opcode0_opcode_o 
                                                           >> 9U))) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.opcode0_opcode_o 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.opcode0_opcode_o 
                                                             >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.opcode0_opcode_o))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode0_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.opcode0_opcode_o 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.opcode0_opcode_o)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.opcode0_opcode_o))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.opcode0_opcode_o))) 
                          || (0x4003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                         || (0x5003U == (0x707fU & vlSelfRef.opcode0_opcode_o))) 
                        || (0x6003U == (0x707fU & vlSelfRef.opcode0_opcode_o)))) {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode0_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.opcode0_opcode_o 
                          >> 0x14U));
            } else {
                vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.opcode0_opcode_o 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.opcode0_opcode_o 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.opcode0_opcode_o 
                                                      >> 7U))));
            }
        }
        vlSelfRef.csr_opcode_invalid_o = vlSelfRef.issue_a_invalid_w;
    } else {
        vlSelfRef.u_pipe0_ctrl__DOT__issue_valid_i = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x2dU;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
        vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
        vlSelfRef.csr_opcode_invalid_o = 0U;
    }
    vlSelfRef.mul_opcode_valid_o = ((IData)(vlSelfRef.enable_muldiv_w) 
                                    & ((IData)(vlSelfRef.pipe1_mux_mul_r)
                                        ? (IData)(vlSelfRef.opcode_b_issue_r)
                                        : (IData)(vlSelfRef.opcode_a_issue_r)));
    vlSelfRef.div_opcode_valid_o = ((IData)(vlSelfRef.enable_muldiv_w) 
                                    & (IData)(vlSelfRef.opcode_a_issue_r));
    vlSelfRef.exec0_opcode_valid_o = vlSelfRef.opcode_a_issue_r;
    vlSelfRef.lsu_opcode_valid_o = ((~ (IData)(vlSelfRef.take_interrupt_i)) 
                                    & ((IData)(vlSelfRef.pipe1_mux_lsu_r)
                                        ? (IData)(vlSelfRef.opcode_b_issue_r)
                                        : (IData)(vlSelfRef.opcode_a_issue_r)));
    vlSelfRef.csr_opcode_valid_o = ((~ (IData)(vlSelfRef.take_interrupt_i)) 
                                    & (IData)(vlSelfRef.opcode_a_issue_r));
    vlSelfRef.u_pipe1_ctrl__DOT__u_trace_d__DOT__valid_i 
        = vlSelfRef.u_pipe1_ctrl__DOT__issue_valid_i;
    vlSelfRef.single_issue_w = ((IData)(vlSelfRef.opcode_a_accept_r) 
                                & ((IData)(vlSelfRef.opcode_a_issue_r) 
                                   & ((~ (IData)(vlSelfRef.dual_issue_w)) 
                                      & (~ (IData)(vlSelfRef.take_interrupt_i)))));
    vlSelfRef.u_pipe0_ctrl__DOT__u_trace_d__DOT__valid_i 
        = vlSelfRef.u_pipe0_ctrl__DOT__issue_valid_i;
}
