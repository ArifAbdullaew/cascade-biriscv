// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_riscv_core.h"

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__0(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i = 0;
    IData/*28:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.reset_vector_i 
        = vlSelfRef.reset_vector_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__enable_muldiv_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__enable_muldiv_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w;
    vlSelfRef.u_mmu__DOT__fetch_out_error_i = vlSelfRef.mem_i_error_i;
    vlSelfRef.u_mmu__DOT__lsu_out_error_i = vlSelfRef.mem_d_error_i;
    vlSelfRef.u_mmu__DOT__lsu_out_resp_tag_i = vlSelfRef.mem_d_resp_tag_i;
    vlSelfRef.mem_d_invalidate_o = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.mem_d_writeback_o = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.mem_d_flush_o = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.u_mmu__DOT__lsu_in_error_o = vlSelfRef.mem_d_error_i;
    vlSelfRef.u_mmu__DOT__lsu_out_invalidate_o = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.u_mmu__DOT__lsu_out_writeback_o = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.u_mmu__DOT__lsu_out_flush_o = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.u_lsu__DOT__mem_invalidate_o = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.u_lsu__DOT__mem_writeback_o = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.u_lsu__DOT__mem_flush_o = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.u_mmu__DOT__lsu_in_resp_tag_o = vlSelfRef.mem_d_resp_tag_i;
    vlSelfRef.u_mmu__DOT__fetch_in_error_o = vlSelfRef.mem_i_error_i;
    vlSelfRef.u_mmu__DOT__lsu_out_data_wr_o = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.u_lsu__DOT__mem_data_wr_o = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.mem_d_cacheable_o = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.u_mmu__DOT__lsu_out_cacheable_o = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.u_lsu__DOT__mem_cacheable_o = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.mem_d_req_tag_o = vlSelfRef.u_lsu__DOT__mem_req_tag_o;
    vlSelfRef.u_mmu__DOT__lsu_out_req_tag_o = vlSelfRef.u_lsu__DOT__mem_req_tag_o;
    vlSelfRef.mem_i_invalidate_o = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_o;
    vlSelfRef.u_frontend__DOT__icache_invalidate_o 
        = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_o;
    vlSelfRef.u_mmu__DOT__fetch_out_invalidate_o = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_o;
    vlSelfRef.u_exec0__DOT__branch_is_taken_o = vlSelfRef.u_exec0__DOT__branch_taken_q;
    vlSelfRef.u_exec0__DOT__branch_is_not_taken_o = vlSelfRef.u_exec0__DOT__branch_ntaken_q;
    vlSelfRef.u_exec0__DOT__branch_source_o = vlSelfRef.u_exec0__DOT__pc_m_q;
    vlSelfRef.u_exec0__DOT__branch_is_call_o = vlSelfRef.u_exec0__DOT__branch_call_q;
    vlSelfRef.u_exec0__DOT__branch_is_ret_o = vlSelfRef.u_exec0__DOT__branch_ret_q;
    vlSelfRef.u_exec0__DOT__branch_is_jmp_o = vlSelfRef.u_exec0__DOT__branch_jmp_q;
    vlSelfRef.u_exec0__DOT__branch_pc_o = vlSelfRef.u_exec0__DOT__pc_x_q;
    vlSelfRef.u_exec1__DOT__branch_is_taken_o = vlSelfRef.u_exec1__DOT__branch_taken_q;
    vlSelfRef.u_exec1__DOT__branch_is_not_taken_o = vlSelfRef.u_exec1__DOT__branch_ntaken_q;
    vlSelfRef.u_exec1__DOT__branch_source_o = vlSelfRef.u_exec1__DOT__pc_m_q;
    vlSelfRef.u_exec1__DOT__branch_is_call_o = vlSelfRef.u_exec1__DOT__branch_call_q;
    vlSelfRef.u_exec1__DOT__branch_is_ret_o = vlSelfRef.u_exec1__DOT__branch_ret_q;
    vlSelfRef.u_exec1__DOT__branch_is_jmp_o = vlSelfRef.u_exec1__DOT__branch_jmp_q;
    vlSelfRef.u_exec1__DOT__branch_pc_o = vlSelfRef.u_exec1__DOT__pc_x_q;
    vlSelfRef.u_exec0__DOT__writeback_value_o = vlSelfRef.u_exec0__DOT__result_q;
    vlSelfRef.u_exec1__DOT__writeback_value_o = vlSelfRef.u_exec1__DOT__result_q;
    vlSelfRef.u_mul__DOT__writeback_value_o = vlSelfRef.u_mul__DOT__result_e2_q;
    vlSelfRef.u_div__DOT__writeback_valid_o = vlSelfRef.u_div__DOT__valid_q;
    vlSelfRef.u_div__DOT__writeback_value_o = vlSelfRef.u_div__DOT__wb_result_q;
    vlSelfRef.u_frontend__DOT__icache_priv_o = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_priv_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_priv_o 
        = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_priv_w;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__data_out_o 
        = vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
        [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q];
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_pc_pred_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
        [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q];
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_out_o 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
        [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q];
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_out_o 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
        [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q];
    vlSelfRef.u_div__DOT__div_complete_w = ((~ (IData)(
                                                       (0U 
                                                        != vlSelfRef.u_div__DOT__q_mask_q))) 
                                            & (IData)(vlSelfRef.u_div__DOT__div_busy_q));
    vlSelfRef.mul_opcode_invalid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_invalid_o;
    vlSelfRef.lsu_opcode_invalid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_invalid_o;
    vlSelfRef.opcode1_invalid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_invalid_o;
    vlSelfRef.u_div__DOT__div_result_r = 0U;
    vlSelfRef.u_div__DOT__div_result_r = ((IData)(vlSelfRef.u_div__DOT__div_inst_q)
                                           ? ((IData)(vlSelfRef.u_div__DOT__invert_res_q)
                                               ? (- vlSelfRef.u_div__DOT__quotient_q)
                                               : vlSelfRef.u_div__DOT__quotient_q)
                                           : ((IData)(vlSelfRef.u_div__DOT__invert_res_q)
                                               ? (- vlSelfRef.u_div__DOT__dividend_q)
                                               : vlSelfRef.u_div__DOT__dividend_q));
    vlSelfRef.mmu_lsu_invalidate_w = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.mmu_lsu_writeback_w = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.mmu_lsu_flush_w = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.mmu_load_fault_w = vlSelfRef.u_mmu__DOT__lsu_in_load_fault_o;
    vlSelfRef.mmu_store_fault_w = vlSelfRef.u_mmu__DOT__lsu_in_store_fault_o;
    vlSelfRef.mmu_lsu_resp_tag_w = vlSelfRef.mem_d_resp_tag_i;
    vlSelfRef.mmu_lsu_data_wr_w = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.mmu_lsu_cacheable_w = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.mmu_lsu_req_tag_w = vlSelfRef.u_lsu__DOT__mem_req_tag_o;
    vlSelfRef.mmu_ifetch_invalidate_w = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_o;
    vlSelfRef.branch_d_exec0_priv_w = vlSelfRef.u_exec0__DOT__branch_d_priv_o;
    vlSelfRef.branch_d_exec1_priv_w = vlSelfRef.u_exec1__DOT__branch_d_priv_o;
    vlSelfRef.fetch_in_priv_w = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_priv_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w 
        = (0x1fU & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
    __Vtemp_2[0U] = (IData)(vlSelfRef.u_mul__DOT__operand_a_e1_q);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_a_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.u_mul__DOT__operand_a_e1_q 
                                        >> 0x20U)));
    __Vtemp_2[2U] = ((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_a_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    __Vtemp_3[0U] = (IData)(vlSelfRef.u_mul__DOT__operand_b_e1_q);
    __Vtemp_3[1U] = (((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_b_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.u_mul__DOT__operand_b_e1_q 
                                        >> 0x20U)));
    __Vtemp_3[2U] = ((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_b_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.u_mul__DOT__mult_result_w[0U] = __Vtemp_4[0U];
    vlSelfRef.u_mul__DOT__mult_result_w[1U] = __Vtemp_4[1U];
    vlSelfRef.u_mul__DOT__mult_result_w[2U] = (1U & 
                                               __Vtemp_4[2U]);
    vlSelfRef.opcode0_invalid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_invalid_o;
    vlSelfRef.mmu_ifetch_error_w = vlSelfRef.mem_i_error_i;
    vlSelfRef.fetch_in_fault_w = vlSelfRef.u_mmu__DOT__fetch_in_fault_o;
    vlSelfRef.mem_d_data_wr_o = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__data_in_i 
        = (((QData)((IData)(vlSelfRef.u_lsu__DOT__mem_addr_q)) 
            << 4U) | (QData)((IData)(((((IData)(vlSelfRef.u_lsu__DOT__mem_ls_q) 
                                        << 3U) | ((IData)(vlSelfRef.u_lsu__DOT__mem_xh_q) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.u_lsu__DOT__mem_xb_q) 
                                          << 1U) | (IData)(vlSelfRef.u_lsu__DOT__mem_load_q))))));
    vlSelfRef.branch_exec0_request_w = ((IData)(vlSelfRef.u_exec0__DOT__branch_ntaken_q) 
                                        | (IData)(vlSelfRef.u_exec0__DOT__branch_taken_q));
    vlSelfRef.writeback_div_value_w = vlSelfRef.u_div__DOT__wb_result_q;
    if (vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_valid_q) {
        vlSelfRef.u_frontend__DOT__fetch_pred_branch_w 
            = (3U & vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U]);
        vlSelfRef.u_frontend__DOT__fetch_pc_w = vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U];
        vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w 
            = (1U & (vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__fetch_fault_page_w 
            = (1U & (vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 3U));
    } else {
        vlSelfRef.u_frontend__DOT__fetch_pred_branch_w 
            = (3U & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__pred_d_q));
        vlSelfRef.u_frontend__DOT__fetch_pc_w = (0xfffffff8U 
                                                 & vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_d_q);
        vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w 
            = (1U & (IData)(vlSelfRef.mem_i_error_i));
        vlSelfRef.u_frontend__DOT__fetch_fault_page_w 
            = (1U & (IData)(vlSelfRef.u_mmu__DOT__fetch_in_fault_o));
    }
    vlSelfRef.branch_exec0_pc_w = vlSelfRef.u_exec0__DOT__pc_x_q;
    vlSelfRef.branch_exec1_pc_w = vlSelfRef.u_exec1__DOT__pc_x_q;
    vlSelfRef.mmu_lsu_addr_w = (0xfffffffcU & vlSelfRef.u_lsu__DOT__mem_addr_q);
    vlSelfRef.branch_exec0_is_taken_w = vlSelfRef.u_exec0__DOT__branch_taken_q;
    vlSelfRef.branch_exec0_is_not_taken_w = vlSelfRef.u_exec0__DOT__branch_ntaken_q;
    vlSelfRef.branch_exec0_is_jmp_w = vlSelfRef.u_exec0__DOT__branch_jmp_q;
    vlSelfRef.branch_exec1_is_taken_w = vlSelfRef.u_exec1__DOT__branch_taken_q;
    vlSelfRef.branch_exec1_is_not_taken_w = vlSelfRef.u_exec1__DOT__branch_ntaken_q;
    vlSelfRef.branch_exec1_is_jmp_w = vlSelfRef.u_exec1__DOT__branch_jmp_q;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.intr_i 
        = vlSelfRef.intr_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.cpu_id_i 
        = vlSelfRef.cpu_id_i;
    vlSelfRef.branch_exec0_is_call_w = vlSelfRef.u_exec0__DOT__branch_call_q;
    vlSelfRef.branch_exec0_is_ret_w = vlSelfRef.u_exec0__DOT__branch_ret_q;
    vlSelfRef.branch_exec1_is_call_w = vlSelfRef.u_exec1__DOT__branch_call_q;
    vlSelfRef.branch_exec1_is_ret_w = vlSelfRef.u_exec1__DOT__branch_ret_q;
    vlSelfRef.branch_exec0_source_w = vlSelfRef.u_exec0__DOT__pc_m_q;
    vlSelfRef.branch_exec1_source_w = vlSelfRef.u_exec1__DOT__pc_m_q;
    vlSelfRef.branch_exec1_request_w = ((IData)(vlSelfRef.u_exec1__DOT__branch_ntaken_q) 
                                        | (IData)(vlSelfRef.u_exec1__DOT__branch_taken_q));
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_0 
        = (1U & (~ vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                 [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]));
    vlSelfRef.u_frontend__DOT__fetch_accept_w = (2U 
                                                 != (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q));
    vlSelfRef.writeback_exec0_value_w = vlSelfRef.u_exec0__DOT__result_q;
    vlSelfRef.writeback_exec1_value_w = vlSelfRef.u_exec1__DOT__result_q;
    vlSelfRef.fetch0_fault_fetch_w = (1U & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                      [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch0_fault_page_w = (1U & (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                           [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                           >> 1U));
    vlSelfRef.fetch1_fault_fetch_w = (1U & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                      [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch1_fault_page_w = (1U & (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                           [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                           >> 1U));
    vlSelfRef.writeback_mul_value_w = vlSelfRef.u_mul__DOT__result_e2_q;
    vlSelfRef.u_lsu__DOT__resp_addr_w = (IData)((vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                 [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                 >> 4U));
    vlSelfRef.u_lsu__DOT__resp_byte_w = (1U & (IData)(
                                                      (vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                       [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                       >> 1U)));
    vlSelfRef.u_lsu__DOT__resp_half_w = (1U & (IData)(
                                                      (vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                       [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                       >> 2U)));
    vlSelfRef.u_lsu__DOT__resp_signed_w = (1U & (IData)(
                                                        (vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                         [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                         >> 3U)));
    vlSelfRef.mmu_lsu_error_w = vlSelfRef.mem_d_error_i;
    vlSelfRef.fetch1_valid_w = ((0U != (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q
                                [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.writeback_div_valid_w = vlSelfRef.u_div__DOT__valid_q;
    vlSelfRef.fetch0_instr_w = (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                       [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch0_valid_w = ((0U != (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q
                                [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 
        = (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q
           [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
           >> 3U);
    vlSelfRef.fetch1_instr_w = (IData)((vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                        [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                        >> 0x20U));
    vlSelfRef.u_lsu__DOT__fault_load_page_w = ((IData)(vlSelfRef.mem_d_error_i) 
                                               & (IData)(vlSelfRef.u_mmu__DOT__lsu_in_load_fault_o));
    vlSelfRef.u_lsu__DOT__fault_store_page_w = ((IData)(vlSelfRef.mem_d_error_i) 
                                                & (IData)(vlSelfRef.u_mmu__DOT__lsu_in_store_fault_o));
    vlSelfRef.u_lsu__DOT__resp_load_w = (1U & (IData)(
                                                      vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                      [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]));
    vlSelfRef.u_mul__DOT__opcode_invalid_i = vlSelfRef.mul_opcode_invalid_w;
    vlSelfRef.u_lsu__DOT__opcode_invalid_i = vlSelfRef.lsu_opcode_invalid_w;
    vlSelfRef.u_exec1__DOT__opcode_invalid_i = vlSelfRef.opcode1_invalid_w;
    vlSelfRef.u_mmu__DOT__lsu_in_invalidate_i = vlSelfRef.mmu_lsu_invalidate_w;
    vlSelfRef.u_mmu__DOT__lsu_in_writeback_i = vlSelfRef.mmu_lsu_writeback_w;
    vlSelfRef.u_mmu__DOT__lsu_in_flush_i = vlSelfRef.mmu_lsu_flush_w;
    vlSelfRef.u_lsu__DOT__mem_load_fault_i = vlSelfRef.mmu_load_fault_w;
    vlSelfRef.u_lsu__DOT__mem_store_fault_i = vlSelfRef.mmu_store_fault_w;
    vlSelfRef.u_lsu__DOT__mem_resp_tag_i = vlSelfRef.mmu_lsu_resp_tag_w;
    vlSelfRef.u_mmu__DOT__lsu_in_data_wr_i = vlSelfRef.mmu_lsu_data_wr_w;
    vlSelfRef.u_mmu__DOT__lsu_in_cacheable_i = vlSelfRef.mmu_lsu_cacheable_w;
    vlSelfRef.u_mmu__DOT__lsu_in_req_tag_i = vlSelfRef.mmu_lsu_req_tag_w;
    vlSelfRef.u_mmu__DOT__fetch_in_invalidate_i = vlSelfRef.mmu_ifetch_invalidate_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_d_exec0_priv_i 
        = vlSelfRef.branch_d_exec0_priv_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_d_exec1_priv_i 
        = vlSelfRef.branch_d_exec1_priv_w;
    vlSelfRef.u_mmu__DOT__fetch_in_priv_i = vlSelfRef.fetch_in_priv_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__alloc_entry_o 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
    vlSelfRef.u_mul__DOT__result_r = ((IData)(vlSelfRef.u_mul__DOT__mulhi_sel_e1_q)
                                       ? vlSelfRef.u_mul__DOT__mult_result_w[1U]
                                       : vlSelfRef.u_mul__DOT__mult_result_w[0U]);
    vlSelfRef.u_div__DOT__opcode_invalid_i = vlSelfRef.opcode0_invalid_w;
    vlSelfRef.u_exec0__DOT__opcode_invalid_i = vlSelfRef.opcode0_invalid_w;
    vlSelfRef.u_frontend__DOT__icache_error_i = vlSelfRef.mmu_ifetch_error_w;
    vlSelfRef.u_frontend__DOT__icache_page_fault_i 
        = vlSelfRef.fetch_in_fault_w;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__data_in_i 
        = vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__data_in_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_request_i 
        = vlSelfRef.branch_exec0_request_w;
    vlSelfRef.u_exec0__DOT__branch_request_o = vlSelfRef.branch_exec0_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_div_value_i 
        = vlSelfRef.writeback_div_value_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_pred_branch_o 
        = vlSelfRef.u_frontend__DOT__fetch_pred_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pred_branch_i 
        = vlSelfRef.u_frontend__DOT__fetch_pred_branch_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_pc_o 
        = vlSelfRef.u_frontend__DOT__fetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pc_i 
        = vlSelfRef.u_frontend__DOT__fetch_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_pc_i 
        = vlSelfRef.branch_exec0_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_pc_i 
        = vlSelfRef.branch_exec1_pc_w;
    vlSelfRef.u_mmu__DOT__lsu_in_addr_i = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.u_mmu__DOT__lsu_out_addr_o = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.u_lsu__DOT__mem_addr_o = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.mem_d_addr_o = vlSelfRef.mmu_lsu_addr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_taken_i 
        = vlSelfRef.branch_exec0_is_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_not_taken_i 
        = vlSelfRef.branch_exec0_is_not_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_jmp_i 
        = vlSelfRef.branch_exec0_is_jmp_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_taken_i 
        = vlSelfRef.branch_exec1_is_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_not_taken_i 
        = vlSelfRef.branch_exec1_is_not_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_jmp_i 
        = vlSelfRef.branch_exec1_is_jmp_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_fault_fetch_i 
        = vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_fault_fetch_o 
        = vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_fault_page_i 
        = vlSelfRef.u_frontend__DOT__fetch_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_fault_page_o 
        = vlSelfRef.u_frontend__DOT__fetch_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i 
        = (((IData)(vlSelfRef.u_frontend__DOT__fetch_fault_page_w) 
            << 1U) | (IData)(vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_call_i 
        = vlSelfRef.branch_exec0_is_call_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_ret_i 
        = vlSelfRef.branch_exec0_is_ret_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_call_i 
        = vlSelfRef.branch_exec1_is_call_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_ret_i 
        = vlSelfRef.branch_exec1_is_ret_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_source_i 
        = vlSelfRef.branch_exec0_source_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_source_i 
        = vlSelfRef.branch_exec1_source_w;
    vlSelfRef.u_exec1__DOT__branch_request_o = vlSelfRef.branch_exec1_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_request_i 
        = vlSelfRef.branch_exec1_request_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_accept_o 
        = vlSelfRef.u_frontend__DOT__fetch_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__accept_o 
        = vlSelfRef.u_frontend__DOT__fetch_accept_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_exec0_value_i 
        = vlSelfRef.writeback_exec0_value_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_exec1_value_i 
        = vlSelfRef.writeback_exec1_value_w;
    vlSelfRef.u_frontend__DOT__fetch0_fault_fetch_o 
        = vlSelfRef.fetch0_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_fault_fetch_o 
        = vlSelfRef.fetch0_fault_fetch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_fault_fetch_i 
        = vlSelfRef.fetch0_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__fetch0_fault_page_o 
        = vlSelfRef.fetch0_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_fault_page_o 
        = vlSelfRef.fetch0_fault_page_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_fault_page_i 
        = vlSelfRef.fetch0_fault_page_w;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i 
        = ((IData)(vlSelfRef.fetch0_fault_fetch_w) 
           | (IData)(vlSelfRef.fetch0_fault_page_w));
    vlSelfRef.u_frontend__DOT__fetch1_fault_fetch_o 
        = vlSelfRef.fetch1_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_fault_fetch_o 
        = vlSelfRef.fetch1_fault_fetch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_fault_fetch_i 
        = vlSelfRef.fetch1_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__fetch1_fault_page_o 
        = vlSelfRef.fetch1_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_fault_page_o 
        = vlSelfRef.fetch1_fault_page_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_fault_page_i 
        = vlSelfRef.fetch1_fault_page_w;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i 
        = ((IData)(vlSelfRef.fetch1_fault_fetch_w) 
           | (IData)(vlSelfRef.fetch1_fault_page_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mul_value_i 
        = vlSelfRef.writeback_mul_value_w;
    vlSelfRef.u_lsu__DOT__mem_error_i = vlSelfRef.mmu_lsu_error_w;
    vlSelfRef.u_frontend__DOT__fetch1_valid_o = vlSelfRef.fetch1_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_o 
        = vlSelfRef.fetch1_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_valid_o 
        = vlSelfRef.fetch1_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_valid_i 
        = vlSelfRef.fetch1_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_div_valid_i 
        = vlSelfRef.writeback_div_valid_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_o = vlSelfRef.fetch0_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__data0_out_o 
        = vlSelfRef.fetch0_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_o 
        = vlSelfRef.fetch0_instr_w;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57 
        = ((0x6fU == (0x7fU & vlSelfRef.fetch0_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64 
        = ((0x63U == (0x707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63 
        = ((0x6063U == (0x707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    vlSelfRef.fetch0_instr_lsu_w = ((3U == (0x707fU 
                                            & vlSelfRef.fetch0_instr_w)) 
                                    | ((0x1003U == 
                                        (0x707fU & vlSelfRef.fetch0_instr_w)) 
                                       | ((0x2003U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch0_instr_w)) 
                                          | ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                             | ((0x5003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                                | ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch0_instr_w)) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch0_instr_w)) 
                                                      | ((0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch0_instr_w)) 
                                                         | (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch0_instr_w))))))))));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65 
        = ((0x6073U == (0x707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60 
        = ((0x100073U == vlSelfRef.fetch0_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    vlSelfRef.fetch0_instr_exec_w = ((0x7013U == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                     | ((0x13U == (0x707fU 
                                                   & vlSelfRef.fetch0_instr_w)) 
                                        | ((0x2013U 
                                            == (0x707fU 
                                                & vlSelfRef.fetch0_instr_w)) 
                                           | ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelfRef.fetch0_instr_w)) 
                                              | ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.fetch0_instr_w)) 
                                                 | ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.fetch0_instr_w)) 
                                                    | ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelfRef.fetch0_instr_w)) 
                                                       | ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelfRef.fetch0_instr_w)) 
                                                          | ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelfRef.fetch0_instr_w)) 
                                                             | ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.fetch0_instr_w)) 
                                                                | ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.fetch0_instr_w)) 
                                                                   | ((0x33U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelfRef.fetch0_instr_w)) 
                                                                      | ((0x40000033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.fetch0_instr_w)) 
                                                                         | ((0x2033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelfRef.fetch0_instr_w)) 
                                                                            | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                               | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w))))))))))))))))))))));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_i 
        = vlSelfRef.fetch0_instr_w;
    vlSelfRef.u_frontend__DOT__fetch0_valid_o = vlSelfRef.fetch0_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_o 
        = vlSelfRef.fetch0_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_valid_o 
        = vlSelfRef.fetch0_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_valid_i 
        = vlSelfRef.fetch0_valid_w;
    vlSelfRef.fetch1_pc_w = (4U | (u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 
                                   << 3U));
    vlSelfRef.fetch0_pc_w = (u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 
                             << 3U);
    vlSelfRef.u_frontend__DOT__fetch1_instr_o = vlSelfRef.fetch1_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__data1_out_o 
        = vlSelfRef.fetch1_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_o 
        = vlSelfRef.fetch1_instr_w;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60 
        = ((0x100073U == vlSelfRef.fetch1_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65 
        = ((0x6073U == (0x707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57 
        = ((0x6fU == (0x7fU & vlSelfRef.fetch1_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64 
        = ((0x63U == (0x707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63 
        = ((0x6063U == (0x707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    vlSelfRef.fetch1_instr_lsu_w = ((3U == (0x707fU 
                                            & vlSelfRef.fetch1_instr_w)) 
                                    | ((0x1003U == 
                                        (0x707fU & vlSelfRef.fetch1_instr_w)) 
                                       | ((0x2003U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch1_instr_w)) 
                                          | ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                             | ((0x5003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                                | ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch1_instr_w)) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch1_instr_w)) 
                                                      | ((0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch1_instr_w)) 
                                                         | (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch1_instr_w))))))))));
    vlSelfRef.fetch1_instr_exec_w = ((0x7013U == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                     | ((0x13U == (0x707fU 
                                                   & vlSelfRef.fetch1_instr_w)) 
                                        | ((0x2013U 
                                            == (0x707fU 
                                                & vlSelfRef.fetch1_instr_w)) 
                                           | ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelfRef.fetch1_instr_w)) 
                                              | ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.fetch1_instr_w)) 
                                                 | ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.fetch1_instr_w)) 
                                                    | ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelfRef.fetch1_instr_w)) 
                                                       | ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelfRef.fetch1_instr_w)) 
                                                          | ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelfRef.fetch1_instr_w)) 
                                                             | ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.fetch1_instr_w)) 
                                                                | ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.fetch1_instr_w)) 
                                                                   | ((0x33U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelfRef.fetch1_instr_w)) 
                                                                      | ((0x40000033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.fetch1_instr_w)) 
                                                                         | ((0x2033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelfRef.fetch1_instr_w)) 
                                                                            | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                               | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w))))))))))))))))))))));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_i 
        = vlSelfRef.fetch1_instr_w;
    vlSelfRef.u_lsu__DOT__fault_load_align_w = ((IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q) 
                                                & (IData)(vlSelfRef.u_lsu__DOT__resp_load_w));
    vlSelfRef.u_lsu__DOT__fault_store_align_w = ((~ (IData)(vlSelfRef.u_lsu__DOT__resp_load_w)) 
                                                 & (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.u_lsu__DOT__fault_load_bus_w = ((IData)(vlSelfRef.mem_d_error_i) 
                                              & (IData)(vlSelfRef.u_lsu__DOT__resp_load_w));
    vlSelfRef.u_lsu__DOT__fault_store_bus_w = ((~ (IData)(vlSelfRef.u_lsu__DOT__resp_load_w)) 
                                               & (IData)(vlSelfRef.mem_d_error_i));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_error_i 
        = vlSelfRef.u_frontend__DOT__icache_error_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_page_fault_i 
        = vlSelfRef.u_frontend__DOT__icache_page_fault_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pred_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pred_branch_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pc_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__fetch_fault_i 
        = u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__fetch_fault_i 
        = u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__valid_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_valid_o;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__opcode_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_o;
    vlSelfRef.fetch0_instr_branch_w = ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                       | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                          | ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                             | ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63)))));
    vlSelfRef.fetch0_instr_div_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61)));
    vlSelfRef.u_frontend__DOT__fetch0_instr_lsu_o = vlSelfRef.fetch0_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_lsu_o 
        = vlSelfRef.fetch0_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__lsu_o 
        = vlSelfRef.fetch0_instr_lsu_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_lsu_i 
        = vlSelfRef.fetch0_instr_lsu_w;
    vlSelfRef.fetch0_instr_rd_valid_w = ((0x67U == 
                                          (0x707fU 
                                           & vlSelfRef.fetch0_instr_w)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.fetch0_instr_w)) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.fetch0_instr_w)) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.fetch0_instr_w)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch0_instr_w)) 
                                                     | ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelfRef.fetch0_instr_w)) 
                                                        | ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch0_instr_w)) 
                                                           | ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch0_instr_w)) 
                                                              | ((0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch0_instr_w)) 
                                                                 | ((0x5013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelfRef.fetch0_instr_w)) 
                                                                    | ((0x40005013U 
                                                                        == 
                                                                        (0xfc00707fU 
                                                                         & vlSelfRef.fetch0_instr_w)) 
                                                                       | ((0x6013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch0_instr_w)) 
                                                                          | ((0x7013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch0_instr_w)) 
                                                                             | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65))))))))))))))))))))))))))))))))))))));
    vlSelfRef.fetch0_instr_mul_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62)));
    vlSelfRef.u_frontend__DOT__fetch0_instr_exec_o 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_exec_o 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__exec_o 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.fetch0_instr_invalid_w = ((~ ((IData)(vlSelfRef.fetch0_instr_exec_w) 
                                            | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                               | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                                  | ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch0_instr_w)) 
                                                     | ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.fetch0_instr_w)) 
                                                        | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63) 
                                                           | ((3U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch0_instr_w)) 
                                                              | ((0x1003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch0_instr_w)) 
                                                                 | ((0x2003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.fetch0_instr_w)) 
                                                                    | ((0x4003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.fetch0_instr_w)) 
                                                                       | ((0x5003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch0_instr_w)) 
                                                                          | ((0x6003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch0_instr_w)) 
                                                                             | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.fetch0_instr_w) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                                                                & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | (0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w))))))))))))))))))))))))))))))))))))) 
                                        & (IData)(vlSelfRef.fetch0_valid_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_exec_i 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__valid_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_valid_o;
    vlSelfRef.u_frontend__DOT__fetch1_pc_o = vlSelfRef.fetch1_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_pc_o 
        = vlSelfRef.fetch1_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc1_out_o 
        = vlSelfRef.fetch1_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_pc_i 
        = vlSelfRef.fetch1_pc_w;
    vlSelfRef.u_frontend__DOT__fetch0_pc_o = vlSelfRef.fetch0_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_pc_o 
        = vlSelfRef.fetch0_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc0_out_o 
        = vlSelfRef.fetch0_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_pc_i 
        = vlSelfRef.fetch0_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__opcode_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_o;
    vlSelfRef.fetch1_instr_div_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61)));
    vlSelfRef.fetch1_instr_branch_w = ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                       | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                          | ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                             | ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63)))));
    vlSelfRef.u_frontend__DOT__fetch1_instr_lsu_o = vlSelfRef.fetch1_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_lsu_o 
        = vlSelfRef.fetch1_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__lsu_o 
        = vlSelfRef.fetch1_instr_lsu_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_lsu_i 
        = vlSelfRef.fetch1_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_exec_o 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_exec_o 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__exec_o 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.fetch1_instr_invalid_w = ((~ ((IData)(vlSelfRef.fetch1_instr_exec_w) 
                                            | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                               | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                                  | ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch1_instr_w)) 
                                                     | ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.fetch1_instr_w)) 
                                                        | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63) 
                                                           | ((3U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch1_instr_w)) 
                                                              | ((0x1003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch1_instr_w)) 
                                                                 | ((0x2003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.fetch1_instr_w)) 
                                                                    | ((0x4003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.fetch1_instr_w)) 
                                                                       | ((0x5003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch1_instr_w)) 
                                                                          | ((0x6003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch1_instr_w)) 
                                                                             | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.fetch1_instr_w) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                                                                & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | (0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w))))))))))))))))))))))))))))))))))))) 
                                        & (IData)(vlSelfRef.fetch1_valid_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_exec_i 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.fetch1_instr_rd_valid_w = ((0x67U == 
                                          (0x707fU 
                                           & vlSelfRef.fetch1_instr_w)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.fetch1_instr_w)) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.fetch1_instr_w)) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.fetch1_instr_w)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch1_instr_w)) 
                                                     | ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelfRef.fetch1_instr_w)) 
                                                        | ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch1_instr_w)) 
                                                           | ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch1_instr_w)) 
                                                              | ((0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch1_instr_w)) 
                                                                 | ((0x5013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelfRef.fetch1_instr_w)) 
                                                                    | ((0x40005013U 
                                                                        == 
                                                                        (0xfc00707fU 
                                                                         & vlSelfRef.fetch1_instr_w)) 
                                                                       | ((0x6013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch1_instr_w)) 
                                                                          | ((0x7013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch1_instr_w)) 
                                                                             | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65))))))))))))))))))))))))))))))))))))));
    vlSelfRef.fetch1_instr_mul_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62)));
    vlSelfRef.writeback_mem_exception_w = ((IData)(vlSelfRef.u_lsu__DOT__fault_load_align_w)
                                            ? 0x14U
                                            : ((IData)(vlSelfRef.u_lsu__DOT__fault_store_align_w)
                                                ? 0x16U
                                                : ((IData)(vlSelfRef.u_lsu__DOT__fault_load_page_w)
                                                    ? 0x1dU
                                                    : 
                                                   ((IData)(vlSelfRef.u_lsu__DOT__fault_store_page_w)
                                                     ? 0x1fU
                                                     : 
                                                    ((IData)(vlSelfRef.u_lsu__DOT__fault_load_bus_w)
                                                      ? 0x15U
                                                      : 
                                                     ((IData)(vlSelfRef.u_lsu__DOT__fault_store_bus_w)
                                                       ? 0x17U
                                                       : 0U))))));
    vlSelfRef.u_frontend__DOT__fetch0_instr_branch_o 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_branch_o 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__branch_o 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_branch_i 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_div_o = vlSelfRef.fetch0_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_div_o 
        = vlSelfRef.fetch0_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__div_o 
        = vlSelfRef.fetch0_instr_div_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_div_i 
        = vlSelfRef.fetch0_instr_div_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_rd_valid_o 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_rd_valid_o 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__rd_valid_o 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_rd_valid_i 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_mul_o = vlSelfRef.fetch0_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_mul_o 
        = vlSelfRef.fetch0_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__mul_o 
        = vlSelfRef.fetch0_instr_mul_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_mul_i 
        = vlSelfRef.fetch0_instr_mul_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_invalid_o 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_invalid_o 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__invalid_o 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__invalid_w 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_invalid_i 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.fetch0_instr_csr_w = ((0x73U == vlSelfRef.fetch0_instr_w) 
                                    | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                       | ((0x1073U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch0_instr_w)) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                             | ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                                | ((0x5073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch0_instr_w)) 
                                                   | ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch0_instr_w)) 
                                                      | ((0x7073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch0_instr_w)) 
                                                         | ((0x10500073U 
                                                             == 
                                                             (0xffff8fffU 
                                                              & vlSelfRef.fetch0_instr_w)) 
                                                            | ((0xfU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.fetch0_instr_w)) 
                                                               | ((0x100fU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.fetch0_instr_w)) 
                                                                  | ((0x12000073U 
                                                                      == 
                                                                      (0xfe007fffU 
                                                                       & vlSelfRef.fetch0_instr_w)) 
                                                                     | ((IData)(vlSelfRef.fetch0_instr_invalid_w) 
                                                                        | (IData)(u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i))))))))))))));
    vlSelfRef.u_frontend__DOT__fetch1_instr_div_o = vlSelfRef.fetch1_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_div_o 
        = vlSelfRef.fetch1_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__div_o 
        = vlSelfRef.fetch1_instr_div_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_div_i 
        = vlSelfRef.fetch1_instr_div_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_branch_o 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_branch_o 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__branch_o 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_branch_i 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_invalid_o 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_invalid_o 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__invalid_o 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__invalid_w 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_invalid_i 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.fetch1_instr_csr_w = ((0x73U == vlSelfRef.fetch1_instr_w) 
                                    | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                       | ((0x1073U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch1_instr_w)) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                             | ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                                | ((0x5073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch1_instr_w)) 
                                                   | ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch1_instr_w)) 
                                                      | ((0x7073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch1_instr_w)) 
                                                         | ((0x10500073U 
                                                             == 
                                                             (0xffff8fffU 
                                                              & vlSelfRef.fetch1_instr_w)) 
                                                            | ((0xfU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.fetch1_instr_w)) 
                                                               | ((0x100fU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.fetch1_instr_w)) 
                                                                  | ((0x12000073U 
                                                                      == 
                                                                      (0xfe007fffU 
                                                                       & vlSelfRef.fetch1_instr_w)) 
                                                                     | ((IData)(vlSelfRef.fetch1_instr_invalid_w) 
                                                                        | (IData)(u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i))))))))))))));
    vlSelfRef.u_frontend__DOT__fetch1_instr_rd_valid_o 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_rd_valid_o 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__rd_valid_o 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_rd_valid_i 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_mul_o = vlSelfRef.fetch1_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_mul_o 
        = vlSelfRef.fetch1_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__mul_o 
        = vlSelfRef.fetch1_instr_mul_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_mul_i 
        = vlSelfRef.fetch1_instr_mul_w;
    vlSelfRef.u_lsu__DOT__writeback_exception_o = vlSelfRef.writeback_mem_exception_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mem_exception_i 
        = vlSelfRef.writeback_mem_exception_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_csr_o = vlSelfRef.fetch0_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_csr_o 
        = vlSelfRef.fetch0_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__csr_o 
        = vlSelfRef.fetch0_instr_csr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_csr_i 
        = vlSelfRef.fetch0_instr_csr_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_csr_o = vlSelfRef.fetch1_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_csr_o 
        = vlSelfRef.fetch1_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__csr_o 
        = vlSelfRef.fetch1_instr_csr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_csr_i 
        = vlSelfRef.fetch1_instr_csr_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_writeback_exception_addr_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_exception_addr_o;
    vlSelfRef.csr_writeback_exception_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_exception_pc_o;
    vlSelfRef.csr_writeback_wdata_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_wdata_o;
    vlSelfRef.csr_writeback_write_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_write_o;
    vlSelfRef.csr_writeback_waddr_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_waddr_o;
    vlSelfRef.csr_writeback_exception_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_exception_o;
    vlSelfRef.branch_info_is_taken_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_taken_o;
    vlSelfRef.branch_info_is_not_taken_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_not_taken_o;
    vlSelfRef.branch_info_is_jmp_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_jmp_o;
    vlSelfRef.branch_info_is_call_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_call_o;
    vlSelfRef.branch_info_is_ret_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_ret_o;
    vlSelfRef.branch_info_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_pc_o;
    vlSelfRef.branch_info_source_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_source_o;
    vlSelfRef.mmu_flush_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_flush_o;
    vlSelfRef.csr_result_e1_value_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_value_o;
    vlSelfRef.csr_result_e1_write_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_write_o;
    vlSelfRef.csr_result_e1_wdata_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_wdata_o;
    vlSelfRef.csr_result_e1_exception_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_exception_o;
    vlSelfRef.ifence_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.ifence_o;
    vlSelfRef.branch_csr_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.branch_csr_pc_o;
    vlSelfRef.take_interrupt_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.take_interrupt_o;
    vlSelfRef.branch_csr_request_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.branch_csr_request_o;
    vlSelfRef.mmu_sum_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_sum_o;
    vlSelfRef.mmu_mxr_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_mxr_o;
    vlSelfRef.mmu_satp_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_satp_o;
    vlSelfRef.mmu_priv_d_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_priv_d_o;
    vlSelfRef.branch_csr_priv_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.branch_csr_priv_o;
    vlSelfRef.u_mmu__DOT__fetch_out_accept_i = vlSelfRef.mem_i_accept_i;
    vlSelfRef.u_mmu__DOT__fetch_in_accept_o = vlSelfRef.mem_i_accept_i;
    vlSelfRef.mmu_ifetch_accept_w = vlSelfRef.mem_i_accept_i;
    vlSelfRef.u_mmu__DOT__lsu_out_accept_i = vlSelfRef.mem_d_accept_i;
    vlSelfRef.u_mmu__DOT__lsu_in_accept_o = vlSelfRef.mem_d_accept_i;
    vlSelfRef.mmu_lsu_accept_w = vlSelfRef.mem_d_accept_i;
    vlSelfRef.u_mmu__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.u_mul__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.u_div__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.u_exec0__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.u_exec1__DOT__rst_i = vlSelfRef.rst_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.rst_i 
        = vlSelfRef.rst_i;
    vlSelfRef.u_lsu__DOT__rst_i = vlSelfRef.rst_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.rst_i 
        = vlSelfRef.rst_i;
    vlSelfRef.u_frontend__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.u_mmu__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_mul__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_div__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_exec0__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_exec1__DOT__clk_i = vlSelfRef.clk_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.clk_i 
        = vlSelfRef.clk_i;
    vlSelfRef.u_lsu__DOT__clk_i = vlSelfRef.clk_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.clk_i 
        = vlSelfRef.clk_i;
    vlSelfRef.u_frontend__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.u_mmu__DOT__lsu_out_data_rd_i = vlSelfRef.mem_d_data_rd_i;
    vlSelfRef.u_mmu__DOT__lsu_in_data_rd_o = vlSelfRef.mem_d_data_rd_i;
    vlSelfRef.mmu_lsu_data_rd_w = vlSelfRef.mem_d_data_rd_i;
    vlSelfRef.u_mmu__DOT__fetch_out_inst_i = vlSelfRef.mem_i_inst_i;
    vlSelfRef.u_mmu__DOT__fetch_in_inst_o = vlSelfRef.mem_i_inst_i;
    vlSelfRef.mmu_ifetch_inst_w = vlSelfRef.mem_i_inst_i;
    vlSelfRef.u_frontend__DOT__fetch_instr_w = ((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_valid_q)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U])))
                                                 : vlSelfRef.mem_i_inst_i);
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_exception_addr_i 
        = vlSelfRef.csr_writeback_exception_addr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_exception_pc_i 
        = vlSelfRef.csr_writeback_exception_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_wdata_i 
        = vlSelfRef.csr_writeback_wdata_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_write_i 
        = vlSelfRef.csr_writeback_write_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_waddr_i 
        = vlSelfRef.csr_writeback_waddr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_exception_i 
        = vlSelfRef.csr_writeback_exception_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_taken_i 
        = vlSelfRef.branch_info_is_taken_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_not_taken_i 
        = vlSelfRef.branch_info_is_not_taken_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_jmp_i 
        = vlSelfRef.branch_info_is_jmp_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_call_i 
        = vlSelfRef.branch_info_is_call_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_ret_i 
        = vlSelfRef.branch_info_is_ret_w;
    vlSelfRef.u_frontend__DOT__branch_info_pc_i = vlSelfRef.branch_info_pc_w;
    vlSelfRef.u_frontend__DOT__branch_info_source_i 
        = vlSelfRef.branch_info_source_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w 
        = (0x1ffU & (vlSelfRef.branch_info_source_w 
                     >> 2U));
    vlSelfRef.u_mmu__DOT__flush_i = vlSelfRef.mmu_flush_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_value_i 
        = vlSelfRef.csr_result_e1_value_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_write_i 
        = vlSelfRef.csr_result_e1_write_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_wdata_i 
        = vlSelfRef.csr_result_e1_wdata_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_exception_i 
        = vlSelfRef.csr_result_e1_exception_w;
    vlSelfRef.u_frontend__DOT__fetch_invalidate_i = vlSelfRef.ifence_w;
    vlSelfRef.mmu_ifetch_flush_w = ((IData)(vlSelfRef.ifence_w) 
                                    | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_q));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_csr_pc_i 
        = vlSelfRef.branch_csr_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.take_interrupt_i 
        = vlSelfRef.take_interrupt_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_csr_request_i 
        = vlSelfRef.branch_csr_request_w;
    vlSelfRef.u_mmu__DOT__sum_i = vlSelfRef.mmu_sum_w;
    vlSelfRef.u_mmu__DOT__mxr_i = vlSelfRef.mmu_mxr_w;
    vlSelfRef.u_mmu__DOT__satp_i = vlSelfRef.mmu_satp_w;
    vlSelfRef.u_mmu__DOT__priv_d_i = vlSelfRef.mmu_priv_d_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_csr_priv_i 
        = vlSelfRef.branch_csr_priv_w;
    vlSelfRef.u_frontend__DOT__icache_accept_i = vlSelfRef.mmu_ifetch_accept_w;
    vlSelfRef.u_lsu__DOT__mem_accept_i = vlSelfRef.mmu_lsu_accept_w;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rst_i 
        = vlSelfRef.u_lsu__DOT__rst_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__rst_i 
        = vlSelfRef.u_frontend__DOT__rst_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__rst_i = vlSelfRef.u_frontend__DOT__rst_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__rst_i 
        = vlSelfRef.u_frontend__DOT__rst_i;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__clk_i 
        = vlSelfRef.u_lsu__DOT__clk_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__clk_i 
        = vlSelfRef.u_frontend__DOT__clk_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__clk_i = vlSelfRef.u_frontend__DOT__clk_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__clk_i 
        = vlSelfRef.u_frontend__DOT__clk_i;
    vlSelfRef.u_lsu__DOT__mem_data_rd_i = vlSelfRef.mmu_lsu_data_rd_w;
    vlSelfRef.u_frontend__DOT__icache_inst_i = vlSelfRef.mmu_ifetch_inst_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_instr_i 
        = vlSelfRef.u_frontend__DOT__fetch_instr_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_instr_o 
        = vlSelfRef.u_frontend__DOT__fetch_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__data_in_i 
        = (((IData)(vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w) 
            | (IData)(vlSelfRef.u_frontend__DOT__fetch_fault_page_w))
            ? 0ULL : vlSelfRef.u_frontend__DOT__fetch_instr_w);
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_taken_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_taken_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_not_taken_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_not_taken_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_jmp_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_jmp_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_call_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_call_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_ret_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_ret_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_pc_i 
        = vlSelfRef.u_frontend__DOT__branch_info_pc_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_source_i 
        = vlSelfRef.u_frontend__DOT__branch_info_source_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_invalidate_i 
        = vlSelfRef.u_frontend__DOT__fetch_invalidate_i;
    vlSelfRef.u_mmu__DOT__fetch_in_flush_i = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.mem_i_flush_o = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_frontend__DOT__icache_flush_o = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_flush_o 
        = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_mmu__DOT__fetch_out_flush_o = vlSelfRef.mmu_ifetch_flush_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_accept_i 
        = vlSelfRef.u_frontend__DOT__icache_accept_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__rst_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__rst_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rst_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__rst_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__clk_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__clk_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__clk_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__clk_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_inst_i 
        = vlSelfRef.u_frontend__DOT__icache_inst_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__data_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__data_in_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_sequent__TOP__biriscv_mem_top__u_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_pc_o;
    vlSelfRef.branch_priv_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_priv_o;
    vlSelfRef.u_frontend__DOT__branch_pc_i = vlSelfRef.branch_pc_w;
    vlSelfRef.u_frontend__DOT__branch_priv_i = vlSelfRef.branch_priv_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_pc_i 
        = vlSelfRef.u_frontend__DOT__branch_pc_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_i 
        = vlSelfRef.u_frontend__DOT__branch_pc_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_priv_i 
        = vlSelfRef.u_frontend__DOT__branch_priv_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_priv_i 
        = vlSelfRef.u_frontend__DOT__branch_priv_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__0(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_lsu__DOT__delay_lsu_e2_w = ((~ (IData)(vlSelfRef.u_lsu__DOT__complete_ok_e2_w)) 
                                            & (IData)(vlSelfRef.u_lsu__DOT__pending_lsu_e2_q));
    vlSelfRef.mmu_lsu_wr_w = ((~ (- (IData)((IData)(vlSelfRef.u_lsu__DOT__delay_lsu_e2_w)))) 
                              & (IData)(vlSelfRef.u_lsu__DOT__mem_wr_q));
    vlSelfRef.mmu_lsu_rd_w = ((~ (IData)(vlSelfRef.u_lsu__DOT__delay_lsu_e2_w)) 
                              & (IData)(vlSelfRef.u_lsu__DOT__mem_rd_q));
    vlSelfRef.u_mmu__DOT__lsu_in_wr_i = vlSelfRef.mmu_lsu_wr_w;
    vlSelfRef.u_mmu__DOT__lsu_out_wr_o = vlSelfRef.mmu_lsu_wr_w;
    vlSelfRef.u_lsu__DOT__mem_wr_o = vlSelfRef.mmu_lsu_wr_w;
    vlSelfRef.mem_d_wr_o = vlSelfRef.mmu_lsu_wr_w;
    vlSelfRef.u_mmu__DOT__lsu_in_rd_i = vlSelfRef.mmu_lsu_rd_w;
    vlSelfRef.u_mmu__DOT__lsu_out_rd_o = vlSelfRef.mmu_lsu_rd_w;
    vlSelfRef.u_lsu__DOT__mem_rd_o = vlSelfRef.mmu_lsu_rd_w;
    vlSelfRef.u_lsu__DOT__issue_lsu_e1_w = (((IData)(vlSelfRef.mmu_lsu_rd_w) 
                                             | ((0U 
                                                 != (IData)(vlSelfRef.mmu_lsu_wr_w)) 
                                                | ((IData)(vlSelfRef.u_lsu__DOT__mem_writeback_q) 
                                                   | ((IData)(vlSelfRef.u_lsu__DOT__mem_flush_q) 
                                                      | (IData)(vlSelfRef.u_lsu__DOT__mem_invalidate_q))))) 
                                            & (IData)(vlSelfRef.mem_d_accept_i));
    vlSelfRef.lsu_stall_w = (((~ (IData)(vlSelfRef.mem_d_accept_i)) 
                              & ((IData)(vlSelfRef.u_lsu__DOT__mem_writeback_q) 
                                 | ((IData)(vlSelfRef.u_lsu__DOT__mem_flush_q) 
                                    | ((IData)(vlSelfRef.u_lsu__DOT__mem_invalidate_q) 
                                       | ((IData)(vlSelfRef.mmu_lsu_rd_w) 
                                          | (0U != (IData)(vlSelfRef.mmu_lsu_wr_w))))))) 
                             | ((IData)(vlSelfRef.u_lsu__DOT__delay_lsu_e2_w) 
                                | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.mem_d_rd_o = vlSelfRef.mmu_lsu_rd_w;
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelfRef.u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelfRef.u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.u_lsu__DOT__stall_o = vlSelfRef.lsu_stall_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_stall_i 
        = vlSelfRef.lsu_stall_w;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__push_i 
        = vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_mmu__DOT__fetch_out_valid_i = vlSelfRef.mem_i_valid_i;
    vlSelfRef.u_mmu__DOT__fetch_in_valid_o = vlSelfRef.mem_i_valid_i;
    vlSelfRef.mmu_ifetch_valid_w = vlSelfRef.mem_i_valid_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w 
        = ((~ (IData)(vlSelfRef.mem_i_valid_i)) & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_fetch_q));
    vlSelfRef.u_mmu__DOT__lsu_out_ack_i = vlSelfRef.mem_d_ack_i;
    vlSelfRef.u_mmu__DOT__lsu_in_ack_o = vlSelfRef.mem_d_ack_i;
    vlSelfRef.u_lsu__DOT__complete_ok_e2_w = ((~ (IData)(vlSelfRef.mem_d_error_i)) 
                                              & (IData)(vlSelfRef.mem_d_ack_i));
    vlSelfRef.u_lsu__DOT__complete_err_e2_w = ((IData)(vlSelfRef.mem_d_ack_i) 
                                               & (IData)(vlSelfRef.mem_d_error_i));
    vlSelfRef.mmu_lsu_ack_w = vlSelfRef.mem_d_ack_i;
    vlSelfRef.writeback_mem_valid_w = ((IData)(vlSelfRef.mem_d_ack_i) 
                                       | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.u_frontend__DOT__icache_valid_i = vlSelfRef.mmu_ifetch_valid_w;
    vlSelfRef.mmu_ifetch_rd_w = ((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__active_q) 
                                 & ((~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w)) 
                                    & (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w)));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w 
        = (1U & ((~ (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w)) 
                 | ((~ (IData)(vlSelfRef.mem_i_accept_i)) 
                    | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w))));
    vlSelfRef.u_lsu__DOT__mem_ack_i = vlSelfRef.mmu_lsu_ack_w;
    vlSelfRef.u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.u_lsu__DOT__addr_lsb_r = (3U & vlSelfRef.u_lsu__DOT__resp_addr_w);
    vlSelfRef.u_lsu__DOT__load_byte_r = vlSelfRef.u_lsu__DOT__resp_byte_w;
    vlSelfRef.u_lsu__DOT__load_half_r = vlSelfRef.u_lsu__DOT__resp_half_w;
    vlSelfRef.u_lsu__DOT__load_signed_r = vlSelfRef.u_lsu__DOT__resp_signed_w;
    if ((((IData)(vlSelfRef.mmu_lsu_ack_w) & (IData)(vlSelfRef.mmu_lsu_error_w)) 
         | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelfRef.u_lsu__DOT__wb_result_r = vlSelfRef.u_lsu__DOT__resp_addr_w;
    } else if (((IData)(vlSelfRef.mmu_lsu_ack_w) & (IData)(vlSelfRef.u_lsu__DOT__resp_load_w))) {
        if (vlSelfRef.u_lsu__DOT__load_byte_r) {
            vlSelfRef.u_lsu__DOT__wb_result_r = ((2U 
                                                  & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                   ? 
                                                  (vlSelfRef.mmu_lsu_data_rd_w 
                                                   >> 0x18U)
                                                   : 
                                                  (0xffU 
                                                   & (vlSelfRef.mmu_lsu_data_rd_w 
                                                      >> 0x10U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelfRef.mmu_lsu_data_rd_w 
                                                      >> 8U))
                                                   : 
                                                  (0xffU 
                                                   & vlSelfRef.mmu_lsu_data_rd_w)));
            if (((IData)(vlSelfRef.u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.u_lsu__DOT__wb_result_r = 
                    (0xffffff00U | (0xffU & vlSelfRef.u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.u_lsu__DOT__load_half_r) {
            vlSelfRef.u_lsu__DOT__wb_result_r = ((2U 
                                                  & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                  ? 
                                                 (vlSelfRef.mmu_lsu_data_rd_w 
                                                  >> 0x10U)
                                                  : 
                                                 (0xffffU 
                                                  & vlSelfRef.mmu_lsu_data_rd_w));
            if (((IData)(vlSelfRef.u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelfRef.u_lsu__DOT__wb_result_r = 
                    (0xffff0000U | (0xffffU & vlSelfRef.u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.u_lsu__DOT__wb_result_r = vlSelfRef.mmu_lsu_data_rd_w;
        }
    }
    vlSelfRef.u_lsu__DOT__writeback_valid_o = vlSelfRef.writeback_mem_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mem_valid_i 
        = vlSelfRef.writeback_mem_valid_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_valid_i 
        = vlSelfRef.u_frontend__DOT__icache_valid_i;
    vlSelfRef.u_mmu__DOT__fetch_in_rd_i = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.mem_i_rd_o = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_frontend__DOT__icache_rd_o = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_rd_o 
        = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_mmu__DOT__fetch_out_rd_o = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_frontend__DOT__fetch_pc_accept_w = 
        (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w)));
    vlSelfRef.u_lsu__DOT__writeback_value_o = vlSelfRef.u_lsu__DOT__wb_result_r;
    vlSelfRef.writeback_mem_value_w = vlSelfRef.u_lsu__DOT__wb_result_r;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__pop_i 
        = vlSelfRef.u_lsu__DOT__writeback_valid_o;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__pc_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch_pc_accept_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_accept_o 
        = vlSelfRef.u_frontend__DOT__fetch_pc_accept_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mem_value_i 
        = vlSelfRef.writeback_mem_value_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1;
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1 = 0;
    CData/*0:0*/ u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2;
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2 = 0;
    // Body
    vlSelfRef.exec0_hold_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec0_hold_o;
    vlSelfRef.exec1_hold_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec1_hold_o;
    vlSelfRef.mul_hold_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_hold_o;
    vlSelfRef.branch_info_request_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_request_o;
    vlSelfRef.branch_request_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_request_o;
    vlSelfRef.opcode1_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_pc_o;
    vlSelfRef.csr_opcode_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_pc_o;
    vlSelfRef.opcode0_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_pc_o;
    vlSelfRef.interrupt_inhibit_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.interrupt_inhibit_o;
    vlSelfRef.opcode1_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_opcode_o;
    vlSelfRef.csr_opcode_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_opcode_o;
    vlSelfRef.opcode0_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_opcode_o;
    vlSelfRef.opcode1_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_rd_idx_o;
    vlSelfRef.opcode1_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_rb_idx_o;
    vlSelfRef.opcode1_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_ra_idx_o;
    vlSelfRef.csr_opcode_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_rd_idx_o;
    vlSelfRef.opcode0_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_rd_idx_o;
    vlSelfRef.csr_opcode_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_rb_idx_o;
    vlSelfRef.opcode0_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_rb_idx_o;
    vlSelfRef.csr_opcode_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_ra_idx_o;
    vlSelfRef.opcode0_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_ra_idx_o;
    vlSelfRef.fetch0_accept_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_accept_o;
    vlSelfRef.fetch1_accept_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_accept_o;
    vlSelfRef.exec1_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec1_opcode_valid_o;
    vlSelfRef.mul_opcode_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_pc_o;
    vlSelfRef.mul_opcode_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_rd_idx_o;
    vlSelfRef.mul_opcode_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_ra_idx_o;
    vlSelfRef.mul_opcode_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_rb_idx_o;
    vlSelfRef.mul_opcode_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_opcode_o;
    vlSelfRef.lsu_opcode_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_pc_o;
    vlSelfRef.lsu_opcode_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_rd_idx_o;
    vlSelfRef.lsu_opcode_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_ra_idx_o;
    vlSelfRef.lsu_opcode_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_rb_idx_o;
    vlSelfRef.lsu_opcode_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_opcode_o;
    vlSelfRef.csr_opcode_invalid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_invalid_o;
    vlSelfRef.mul_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_valid_o;
    vlSelfRef.div_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.div_opcode_valid_o;
    vlSelfRef.exec0_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec0_opcode_valid_o;
    vlSelfRef.lsu_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_valid_o;
    vlSelfRef.csr_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_valid_o;
    vlSelfRef.u_exec0__DOT__hold_i = vlSelfRef.exec0_hold_w;
    vlSelfRef.u_exec1__DOT__hold_i = vlSelfRef.exec1_hold_w;
    vlSelfRef.u_mul__DOT__hold_i = vlSelfRef.mul_hold_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
    vlSelfRef.u_frontend__DOT__branch_info_request_i 
        = vlSelfRef.branch_info_request_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__gshare_wr_entry_w 
        = (((IData)(vlSelfRef.branch_info_request_w)
             ? (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q)
             : (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q)) 
           ^ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r = 0U;
    if (vlSelfRef.branch_info_request_w) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 2U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 3U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 4U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 5U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 6U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 7U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 8U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 9U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xaU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xbU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xcU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xdU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xeU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xfU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x10U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x11U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x12U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x13U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x14U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x15U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x16U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x17U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x18U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x19U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1aU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1bU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1cU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1dU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1eU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1fU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x20U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 2U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 3U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 4U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 5U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 6U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 7U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 8U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 9U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xaU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xbU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xcU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xdU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xeU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xfU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x10U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x11U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x12U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x13U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x14U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x15U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x16U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x17U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x18U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x19U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1aU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1bU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1cU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1dU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1eU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1fU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r 
            = (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r)));
    }
    vlSelfRef.u_frontend__DOT__branch_request_i = vlSelfRef.branch_request_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_w 
        = (((~ (IData)(vlSelfRef.branch_request_w)) 
            & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q))
            ? vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_q
            : vlSelfRef.branch_pc_w);
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w 
        = ((IData)(vlSelfRef.branch_request_w) | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q));
    vlSelfRef.u_exec1__DOT__opcode_pc_i = vlSelfRef.opcode1_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_pc_i 
        = vlSelfRef.csr_opcode_pc_w;
    vlSelfRef.u_div__DOT__opcode_pc_i = vlSelfRef.opcode0_pc_w;
    vlSelfRef.u_exec0__DOT__opcode_pc_i = vlSelfRef.opcode0_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.interrupt_inhibit_i 
        = vlSelfRef.interrupt_inhibit_w;
    vlSelfRef.u_exec1__DOT__opcode_opcode_i = vlSelfRef.opcode1_opcode_w;
    vlSelfRef.u_exec1__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSelfRef.opcode1_opcode_w))) {
        if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_w))) {
            vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.opcode1_opcode_w)))) {
            vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.u_exec1__DOT__shamt_r = (0x1fU & (vlSelfRef.opcode1_opcode_w 
                                                >> 0x14U));
    vlSelfRef.u_exec1__DOT__bimm_r = (((- (IData)((vlSelfRef.opcode1_opcode_w 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSelfRef.opcode1_opcode_w 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSelfRef.opcode1_opcode_w 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.opcode1_opcode_w 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.opcode1_opcode_w 
                                                            >> 7U)))));
    vlSelfRef.u_exec1__DOT__jimm20_r = (((- (IData)(
                                                    (vlSelfRef.opcode1_opcode_w 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | (((0xff000U 
                                             & vlSelfRef.opcode1_opcode_w) 
                                            | (0x800U 
                                               & (vlSelfRef.opcode1_opcode_w 
                                                  >> 9U))) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.opcode1_opcode_w 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.opcode1_opcode_w 
                                                    >> 0x14U)))));
    vlSelfRef.u_exec1__DOT__imm20_r = (0xfffff000U 
                                       & vlSelfRef.opcode1_opcode_w);
    vlSelfRef.u_exec1__DOT__imm12_r = (((- (IData)(
                                                   (vlSelfRef.opcode1_opcode_w 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.opcode1_opcode_w 
                                        >> 0x14U));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_opcode_i 
        = vlSelfRef.csr_opcode_opcode_w;
    vlSelfRef.u_div__DOT__opcode_opcode_i = vlSelfRef.opcode0_opcode_w;
    vlSelfRef.u_exec0__DOT__opcode_opcode_i = vlSelfRef.opcode0_opcode_w;
    vlSelfRef.u_div__DOT__inst_remu_w = (0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_div__DOT__inst_divu_w = (0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_div__DOT__inst_rem_w = (0x2006033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_div__DOT__inst_div_w = (0x2004033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_exec0__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSelfRef.opcode0_opcode_w))) {
        if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_w))) {
            vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.opcode0_opcode_w)))) {
            vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.u_exec0__DOT__shamt_r = (0x1fU & (vlSelfRef.opcode0_opcode_w 
                                                >> 0x14U));
    vlSelfRef.u_exec0__DOT__bimm_r = (((- (IData)((vlSelfRef.opcode0_opcode_w 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSelfRef.opcode0_opcode_w 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSelfRef.opcode0_opcode_w 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.opcode0_opcode_w 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.opcode0_opcode_w 
                                                            >> 7U)))));
    vlSelfRef.u_exec0__DOT__jimm20_r = (((- (IData)(
                                                    (vlSelfRef.opcode0_opcode_w 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | (((0xff000U 
                                             & vlSelfRef.opcode0_opcode_w) 
                                            | (0x800U 
                                               & (vlSelfRef.opcode0_opcode_w 
                                                  >> 9U))) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.opcode0_opcode_w 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.opcode0_opcode_w 
                                                    >> 0x14U)))));
    vlSelfRef.u_exec0__DOT__imm20_r = (0xfffff000U 
                                       & vlSelfRef.opcode0_opcode_w);
    vlSelfRef.u_exec0__DOT__imm12_r = (((- (IData)(
                                                   (vlSelfRef.opcode0_opcode_w 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.opcode0_opcode_w 
                                        >> 0x14U));
    vlSelfRef.u_exec1__DOT__opcode_rd_idx_i = vlSelfRef.opcode1_rd_idx_w;
    vlSelfRef.u_exec1__DOT__opcode_rb_idx_i = vlSelfRef.opcode1_rb_idx_w;
    vlSelfRef.u_exec1__DOT__opcode_ra_idx_i = vlSelfRef.opcode1_ra_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_rd_idx_i 
        = vlSelfRef.csr_opcode_rd_idx_w;
    vlSelfRef.u_div__DOT__opcode_rd_idx_i = vlSelfRef.opcode0_rd_idx_w;
    vlSelfRef.u_exec0__DOT__opcode_rd_idx_i = vlSelfRef.opcode0_rd_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_rb_idx_i 
        = vlSelfRef.csr_opcode_rb_idx_w;
    vlSelfRef.u_div__DOT__opcode_rb_idx_i = vlSelfRef.opcode0_rb_idx_w;
    vlSelfRef.u_exec0__DOT__opcode_rb_idx_i = vlSelfRef.opcode0_rb_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_ra_idx_i 
        = vlSelfRef.csr_opcode_ra_idx_w;
    vlSelfRef.u_div__DOT__opcode_ra_idx_i = vlSelfRef.opcode0_ra_idx_w;
    vlSelfRef.u_exec0__DOT__opcode_ra_idx_i = vlSelfRef.opcode0_ra_idx_w;
    vlSelfRef.u_frontend__DOT__fetch0_accept_i = vlSelfRef.fetch0_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w 
        = ((IData)(vlSelfRef.fetch0_accept_w) & (IData)(vlSelfRef.fetch0_valid_w));
    vlSelfRef.u_frontend__DOT__fetch1_accept_i = vlSelfRef.fetch1_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w 
        = ((IData)(vlSelfRef.fetch1_accept_w) & (IData)(vlSelfRef.fetch1_valid_w));
    vlSelfRef.u_exec1__DOT__opcode_valid_i = vlSelfRef.exec1_opcode_valid_w;
    vlSelfRef.u_mul__DOT__opcode_pc_i = vlSelfRef.mul_opcode_pc_w;
    vlSelfRef.u_mul__DOT__opcode_rd_idx_i = vlSelfRef.mul_opcode_rd_idx_w;
    vlSelfRef.u_mul__DOT__opcode_ra_idx_i = vlSelfRef.mul_opcode_ra_idx_w;
    vlSelfRef.u_mul__DOT__opcode_rb_idx_i = vlSelfRef.mul_opcode_rb_idx_w;
    vlSelfRef.u_mul__DOT__opcode_opcode_i = vlSelfRef.mul_opcode_opcode_w;
    vlSelfRef.u_mul__DOT__mult_inst_w = ((0x2000033U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.mul_opcode_opcode_w)) 
                                         | ((0x2001033U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.mul_opcode_opcode_w)) 
                                            | ((0x2002033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.mul_opcode_opcode_w)) 
                                               | (0x2003033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelfRef.mul_opcode_opcode_w)))));
    vlSelfRef.u_lsu__DOT__opcode_pc_i = vlSelfRef.lsu_opcode_pc_w;
    vlSelfRef.u_lsu__DOT__opcode_rd_idx_i = vlSelfRef.lsu_opcode_rd_idx_w;
    vlSelfRef.u_lsu__DOT__opcode_ra_idx_i = vlSelfRef.lsu_opcode_ra_idx_w;
    vlSelfRef.u_lsu__DOT__opcode_rb_idx_i = vlSelfRef.lsu_opcode_rb_idx_w;
    vlSelfRef.u_lsu__DOT__opcode_opcode_i = vlSelfRef.lsu_opcode_opcode_w;
    vlSelfRef.u_lsu__DOT__req_lb_w = ((3U == (0x707fU 
                                              & vlSelfRef.lsu_opcode_opcode_w)) 
                                      | (0x4003U == 
                                         (0x707fU & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__dcache_invalidate_w = (IData)(
                                                        (0x3a201073U 
                                                         == 
                                                         (0xfff0707fU 
                                                          & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__dcache_writeback_w = (IData)(
                                                       (0x3a101073U 
                                                        == 
                                                        (0xfff0707fU 
                                                         & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__dcache_flush_w = (IData)(
                                                   (0x3a001073U 
                                                    == 
                                                    (0xfff0707fU 
                                                     & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__req_sb_w = (0x23U == (0x707fU 
                                                & vlSelfRef.lsu_opcode_opcode_w));
    vlSelfRef.u_lsu__DOT__req_lh_w = ((0x1003U == (0x707fU 
                                                   & vlSelfRef.lsu_opcode_opcode_w)) 
                                      | (0x5003U == 
                                         (0x707fU & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__load_signed_inst_w = ((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.lsu_opcode_opcode_w)) 
                                                | ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.lsu_opcode_opcode_w)) 
                                                   | (0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.lsu_opcode_opcode_w))));
    vlSelfRef.u_lsu__DOT__req_lw_w = ((0x2003U == (0x707fU 
                                                   & vlSelfRef.lsu_opcode_opcode_w)) 
                                      | (0x6003U == 
                                         (0x707fU & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__req_sh_w = (0x1023U == (0x707fU 
                                                  & vlSelfRef.lsu_opcode_opcode_w));
    vlSelfRef.u_lsu__DOT__req_sw_w = (0x2023U == (0x707fU 
                                                  & vlSelfRef.lsu_opcode_opcode_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_invalid_i 
        = vlSelfRef.csr_opcode_invalid_w;
    vlSelfRef.u_mul__DOT__opcode_valid_i = vlSelfRef.mul_opcode_valid_w;
    vlSelfRef.u_div__DOT__opcode_valid_i = vlSelfRef.div_opcode_valid_w;
    vlSelfRef.u_exec0__DOT__opcode_valid_i = vlSelfRef.exec0_opcode_valid_w;
    vlSelfRef.u_lsu__DOT__opcode_valid_i = vlSelfRef.lsu_opcode_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_valid_i 
        = vlSelfRef.csr_opcode_valid_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_request_i 
        = vlSelfRef.u_frontend__DOT__branch_info_request_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__alloc_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_request_i 
        = vlSelfRef.u_frontend__DOT__branch_request_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_request_i 
        = vlSelfRef.u_frontend__DOT__branch_request_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_resp_drop_w 
        = vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w;
    vlSelfRef.u_frontend__DOT__fetch_valid_w = ((~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w)) 
                                                & ((IData)(vlSelfRef.mem_i_valid_i) 
                                                   | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_valid_q)));
    vlSelfRef.u_frontend__DOT__fetch_pc_f_w = (((~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_q)) 
                                                & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w))
                                                ? vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_w
                                                : vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_q);
    vlSelfRef.u_exec1__DOT__u_alu__DOT__alu_op_i = vlSelfRef.u_exec1__DOT__alu_func_r;
    vlSelfRef.u_div__DOT__signed_operation_w = ((IData)(vlSelfRef.u_div__DOT__inst_div_w) 
                                                | (IData)(vlSelfRef.u_div__DOT__inst_rem_w));
    vlSelfRef.u_div__DOT__div_operation_w = ((IData)(vlSelfRef.u_div__DOT__inst_div_w) 
                                             | (IData)(vlSelfRef.u_div__DOT__inst_divu_w));
    vlSelfRef.u_exec0__DOT__u_alu__DOT__alu_op_i = vlSelfRef.u_exec0__DOT__alu_func_r;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch0_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch1_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w 
        = (((~ (IData)(vlSelfRef.fetch1_valid_w)) & (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w)) 
           | (((~ (IData)(vlSelfRef.fetch0_valid_w)) 
               | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w)) 
              & (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w)));
    vlSelfRef.u_lsu__DOT__load_inst_w = ((IData)(vlSelfRef.u_lsu__DOT__load_signed_inst_w) 
                                         | ((0x4003U 
                                             == (0x707fU 
                                                 & vlSelfRef.lsu_opcode_opcode_w)) 
                                            | ((0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.lsu_opcode_opcode_w)) 
                                               | (0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.lsu_opcode_opcode_w)))));
    vlSelfRef.u_lsu__DOT__req_sh_lh_w = ((IData)(vlSelfRef.u_lsu__DOT__req_sh_w) 
                                         | (IData)(vlSelfRef.u_lsu__DOT__req_lh_w));
    vlSelfRef.u_lsu__DOT__store_inst_w = ((IData)(vlSelfRef.u_lsu__DOT__req_sb_w) 
                                          | ((IData)(vlSelfRef.u_lsu__DOT__req_sh_w) 
                                             | (IData)(vlSelfRef.u_lsu__DOT__req_sw_w)));
    vlSelfRef.u_lsu__DOT__req_sw_lw_w = ((IData)(vlSelfRef.u_lsu__DOT__req_sw_w) 
                                         | (IData)(vlSelfRef.u_lsu__DOT__req_lw_w));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__flush_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_request_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_valid_o 
        = vlSelfRef.u_frontend__DOT__fetch_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__fetch_valid_w) 
           & (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_valid_i 
        = vlSelfRef.u_frontend__DOT__fetch_valid_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__pc_f_i = vlSelfRef.u_frontend__DOT__fetch_pc_f_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_o 
        = vlSelfRef.u_frontend__DOT__fetch_pc_f_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_pc_w 
        = vlSelfRef.u_frontend__DOT__fetch_pc_f_w;
    vlSelfRef.mmu_ifetch_pc_w = (0xfffffff8U & vlSelfRef.u_frontend__DOT__fetch_pc_f_w);
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
        = ((IData)(8U) + (0xfffffff8U & vlSelfRef.u_frontend__DOT__fetch_pc_f_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 1U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [1U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 2U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [2U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 3U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [3U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 4U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [4U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 5U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [5U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 6U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [6U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 7U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [7U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 8U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [8U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 9U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [9U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xaU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xaU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xbU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xbU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xcU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xcU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xdU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xdU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xeU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xeU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xfU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xfU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x10U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x10U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x11U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x11U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x12U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x12U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x13U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x13U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x14U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x14U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x15U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x15U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x16U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x16U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x17U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x17U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x18U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x18U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x19U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x19U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1aU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1aU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1bU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1bU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1cU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1cU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1dU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1dU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1eU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1eU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1fU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1fU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    if ((1U & ((~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r)) 
               & (~ (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U))))) {
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 1U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 2U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 3U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 4U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 5U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 6U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 7U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 8U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 9U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xaU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xbU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xcU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xdU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xeU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xfU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x10U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x11U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x12U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x13U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x14U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x15U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x16U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x17U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x18U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x19U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1aU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1bU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1cU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1dU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1eU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1fU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    }
    vlSelfRef.u_div__DOT__div_rem_inst_w = ((IData)(vlSelfRef.u_div__DOT__div_operation_w) 
                                            | ((IData)(vlSelfRef.u_div__DOT__inst_rem_w) 
                                               | (IData)(vlSelfRef.u_div__DOT__inst_remu_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop0_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_valid_i;
    vlSelfRef.u_mmu__DOT__fetch_in_pc_i = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.mem_i_pc_o = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_frontend__DOT__icache_pc_o = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_pc_o 
        = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_mmu__DOT__fetch_out_pc_o = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__hit_entry_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_rd_entry_w 
        = ((0x1feU & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                      >> 2U)) | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__hit_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_0) 
              & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r)));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_0) 
              & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r)));
    vlSelfRef.u_div__DOT__div_start_w = ((IData)(vlSelfRef.div_opcode_valid_w) 
                                         & (IData)(vlSelfRef.u_div__DOT__div_rem_inst_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__gshare_rd_entry_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q) 
           ^ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_rd_entry_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_predict_taken_w 
        = (2U <= vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
           [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_rd_entry_w]);
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q;
    if (((IData)(vlSelfRef.branch_info_request_w) & (IData)(vlSelfRef.branch_info_is_call_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSelfRef.branch_info_request_w) 
                & (IData)(vlSelfRef.branch_info_is_ret_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    } else if (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q)));
    } else if (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q) 
                     - (IData)(1U)));
    }
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_predict_taken_w) 
           | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r));
    vlSelfRef.u_frontend__DOT__next_pc_f_w = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w)
                                               ? vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                                              [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]
                                               : ((IData)(u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1)
                                                   ? vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r
                                                   : 
                                                  ((IData)(8U) 
                                                   + vlSelfRef.mmu_ifetch_pc_w)));
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
              | (IData)(u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1)));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__next_pc_f_i 
        = vlSelfRef.u_frontend__DOT__next_pc_f_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__next_pc_f_o 
        = vlSelfRef.u_frontend__DOT__next_pc_f_w;
    if (u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w 
            = vlSelfRef.u_frontend__DOT__fetch_pc_accept_w;
        vlSelfRef.u_frontend__DOT__next_taken_f_w = 
            ((4U & vlSelfRef.u_frontend__DOT__fetch_pc_f_w)
              ? ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                 << 1U) : (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                            << 1U) | (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))));
    } else {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w = 0U;
        vlSelfRef.u_frontend__DOT__next_taken_f_w = 0U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_ntaken_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w)) 
              & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w)));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__next_taken_f_i 
        = vlSelfRef.u_frontend__DOT__next_taken_f_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__next_taken_f_o 
        = vlSelfRef.u_frontend__DOT__next_taken_f_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__3(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___ico_comb__TOP__biriscv_mem_top__u_core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*32:0*/ u_mul__DOT____VdfgRegularize_hab8637a6_0_3;
    u_mul__DOT____VdfgRegularize_hab8637a6_0_3 = 0;
    // Body
    vlSelfRef.opcode1_rb_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_rb_operand_o;
    vlSelfRef.opcode1_ra_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_ra_operand_o;
    vlSelfRef.csr_opcode_rb_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_rb_operand_o;
    vlSelfRef.mul_opcode_rb_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_rb_operand_o;
    vlSelfRef.lsu_opcode_rb_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_rb_operand_o;
    vlSelfRef.opcode0_rb_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_rb_operand_o;
    vlSelfRef.csr_opcode_ra_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_ra_operand_o;
    vlSelfRef.mul_opcode_ra_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_ra_operand_o;
    vlSelfRef.lsu_opcode_ra_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_ra_operand_o;
    vlSelfRef.opcode0_ra_operand_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_ra_operand_o;
    vlSelfRef.u_exec1__DOT__opcode_rb_operand_i = vlSelfRef.opcode1_rb_operand_w;
    vlSelfRef.u_exec1__DOT__alu_input_b_r = 0U;
    vlSelfRef.u_exec1__DOT__opcode_ra_operand_i = vlSelfRef.opcode1_ra_operand_w;
    vlSelfRef.u_exec1__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x13U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__imm12_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x7013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__imm12_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x2013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__imm12_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x3013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__imm12_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x6013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__imm12_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__imm12_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__shamt_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__shamt_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_input_b_r = vlSelfRef.u_exec1__DOT__shamt_r;
        vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_ra_operand_w;
    } else {
        if ((0x37U != (0x7fU & vlSelfRef.opcode1_opcode_w))) {
            if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_w))) {
                vlSelfRef.u_exec1__DOT__alu_input_b_r 
                    = vlSelfRef.u_exec1__DOT__imm20_r;
            } else if (((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_w)) 
                        | (0x67U == (0x707fU & vlSelfRef.opcode1_opcode_w)))) {
                vlSelfRef.u_exec1__DOT__alu_input_b_r = 4U;
            }
        }
        if ((0x37U == (0x7fU & vlSelfRef.opcode1_opcode_w))) {
            vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.u_exec1__DOT__imm20_r;
        } else if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_w))) {
            vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_pc_w;
        } else if (((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.opcode1_opcode_w)))) {
            vlSelfRef.u_exec1__DOT__alu_input_a_r = vlSelfRef.opcode1_pc_w;
        }
    }
    vlSelfRef.u_exec1__DOT__branch_r = 0U;
    vlSelfRef.u_exec1__DOT__branch_taken_r = 0U;
    vlSelfRef.u_exec1__DOT__branch_call_r = 0U;
    vlSelfRef.u_exec1__DOT__branch_ret_r = 0U;
    vlSelfRef.u_exec1__DOT__branch_jmp_r = 0U;
    vlSelfRef.u_exec1__DOT__branch_target_r = (vlSelfRef.opcode1_pc_w 
                                               + vlSelfRef.u_exec1__DOT__bimm_r);
    if ((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_target_r = (vlSelfRef.opcode1_pc_w 
                                                   + vlSelfRef.u_exec1__DOT__jimm20_r);
        vlSelfRef.u_exec1__DOT__branch_call_r = (1U 
                                                 == (IData)(vlSelfRef.opcode1_rd_idx_w));
        vlSelfRef.u_exec1__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_ret_r = ((1U 
                                                 == (IData)(vlSelfRef.opcode1_ra_idx_w)) 
                                                & (0U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelfRef.u_exec1__DOT__imm12_r)));
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_target_r = (vlSelfRef.opcode1_ra_operand_w 
                                                   + vlSelfRef.u_exec1__DOT__imm12_r);
        vlSelfRef.u_exec1__DOT__branch_call_r = ((~ (IData)(vlSelfRef.u_exec1__DOT__branch_ret_r)) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.opcode1_rd_idx_w)));
        vlSelfRef.u_exec1__DOT__branch_target_r = (0xfffffffeU 
                                                   & vlSelfRef.u_exec1__DOT__branch_target_r);
        vlSelfRef.u_exec1__DOT__branch_jmp_r = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.u_exec1__DOT__branch_call_r) 
                                                    | (IData)(vlSelfRef.u_exec1__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = (vlSelfRef.opcode1_ra_operand_w 
                                                  == vlSelfRef.opcode1_rb_operand_w);
    } else if ((0x1063U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = (vlSelfRef.opcode1_ra_operand_w 
                                                  != vlSelfRef.opcode1_rb_operand_w);
    } else if ((0x4063U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
            = vlSelfRef.opcode1_rb_operand_w;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
            = vlSelfRef.opcode1_ra_operand_w;
        vlSelfRef.u_exec1__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
               - vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y);
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.u_exec1__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.u_exec1__DOT__branch_taken_r = vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = (([&]() {
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                        = vlSelfRef.opcode1_rb_operand_w;
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                        = vlSelfRef.opcode1_ra_operand_w;
                    vlSelfRef.u_exec1__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                           - vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x);
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                     >> 0x1fU) : (vlSelfRef.u_exec1__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout)) 
                                                  | (vlSelfRef.opcode1_ra_operand_w 
                                                     == vlSelfRef.opcode1_rb_operand_w));
    } else if ((0x6063U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = (vlSelfRef.opcode1_ra_operand_w 
                                                  < vlSelfRef.opcode1_rb_operand_w);
    } else if ((0x7063U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__branch_r = 1U;
        vlSelfRef.u_exec1__DOT__branch_taken_r = (vlSelfRef.opcode1_ra_operand_w 
                                                  >= vlSelfRef.opcode1_rb_operand_w);
    }
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_rb_operand_i 
        = vlSelfRef.csr_opcode_rb_operand_w;
    vlSelfRef.u_mul__DOT__opcode_rb_operand_i = vlSelfRef.mul_opcode_rb_operand_w;
    vlSelfRef.u_lsu__DOT__opcode_rb_operand_i = vlSelfRef.lsu_opcode_rb_operand_w;
    vlSelfRef.u_div__DOT__opcode_rb_operand_i = vlSelfRef.opcode0_rb_operand_w;
    vlSelfRef.u_exec0__DOT__opcode_rb_operand_i = vlSelfRef.opcode0_rb_operand_w;
    vlSelfRef.u_exec0__DOT__alu_input_b_r = 0U;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_ra_operand_i 
        = vlSelfRef.csr_opcode_ra_operand_w;
    vlSelfRef.u_mul__DOT__opcode_ra_operand_i = vlSelfRef.mul_opcode_ra_operand_w;
    u_mul__DOT____VdfgRegularize_hab8637a6_0_3 = (((QData)((IData)(
                                                                   (vlSelfRef.mul_opcode_ra_operand_w 
                                                                    >> 0x1fU))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.mul_opcode_ra_operand_w)));
    vlSelfRef.u_lsu__DOT__opcode_ra_operand_i = vlSelfRef.lsu_opcode_ra_operand_w;
    vlSelfRef.u_lsu__DOT__mem_addr_r = 0U;
    vlSelfRef.u_lsu__DOT__mem_data_r = 0U;
    vlSelfRef.u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelfRef.u_lsu__DOT__mem_wr_r = 0U;
    vlSelfRef.u_lsu__DOT__mem_rd_r = 0U;
    vlSelfRef.u_lsu__DOT__mem_addr_r = (((IData)(vlSelfRef.lsu_opcode_valid_w) 
                                         & (0x1073U 
                                            == (0x707fU 
                                                & vlSelfRef.lsu_opcode_opcode_w)))
                                         ? vlSelfRef.lsu_opcode_ra_operand_w
                                         : (((IData)(vlSelfRef.lsu_opcode_valid_w) 
                                             & (IData)(vlSelfRef.u_lsu__DOT__load_inst_w))
                                             ? (vlSelfRef.lsu_opcode_ra_operand_w 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelfRef.lsu_opcode_opcode_w 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.lsu_opcode_opcode_w 
                                                      >> 0x14U)))
                                             : (vlSelfRef.lsu_opcode_ra_operand_w 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelfRef.lsu_opcode_opcode_w 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelfRef.lsu_opcode_opcode_w 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelfRef.lsu_opcode_opcode_w 
                                                            >> 7U)))))));
    if (((IData)(vlSelfRef.lsu_opcode_valid_w) & (IData)(vlSelfRef.u_lsu__DOT__req_sw_lw_w))) {
        vlSelfRef.u_lsu__DOT__mem_unaligned_r = (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelfRef.u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSelfRef.lsu_opcode_valid_w) 
                & (IData)(vlSelfRef.u_lsu__DOT__req_sh_lh_w))) {
        vlSelfRef.u_lsu__DOT__mem_unaligned_r = (1U 
                                                 & vlSelfRef.u_lsu__DOT__mem_addr_r);
    }
    vlSelfRef.u_lsu__DOT__mem_rd_r = (((IData)(vlSelfRef.lsu_opcode_valid_w) 
                                       & (IData)(vlSelfRef.u_lsu__DOT__load_inst_w)) 
                                      & (~ (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_r)));
    if ((((IData)(vlSelfRef.lsu_opcode_valid_w) & (0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.lsu_opcode_opcode_w))) 
         & (~ (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_r)))) {
        vlSelfRef.u_lsu__DOT__mem_data_r = vlSelfRef.lsu_opcode_rb_operand_w;
        vlSelfRef.u_lsu__DOT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSelfRef.lsu_opcode_valid_w) 
                 & (0x1023U == (0x707fU & vlSelfRef.lsu_opcode_opcode_w))) 
                & (~ (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_r)))) {
        if ((2U == (3U & vlSelfRef.u_lsu__DOT__mem_addr_r))) {
            vlSelfRef.u_lsu__DOT__mem_data_r = (vlSelfRef.lsu_opcode_rb_operand_w 
                                                << 0x10U);
            vlSelfRef.u_lsu__DOT__mem_wr_r = 0xcU;
        } else {
            vlSelfRef.u_lsu__DOT__mem_data_r = (0xffffU 
                                                & vlSelfRef.lsu_opcode_rb_operand_w);
            vlSelfRef.u_lsu__DOT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSelfRef.lsu_opcode_valid_w) 
                & (0x23U == (0x707fU & vlSelfRef.lsu_opcode_opcode_w)))) {
        if ((2U & vlSelfRef.u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.u_lsu__DOT__mem_data_r = 
                    (vlSelfRef.lsu_opcode_rb_operand_w 
                     << 0x18U);
                vlSelfRef.u_lsu__DOT__mem_wr_r = 8U;
            } else {
                vlSelfRef.u_lsu__DOT__mem_data_r = 
                    (0xff0000U & (vlSelfRef.lsu_opcode_rb_operand_w 
                                  << 0x10U));
                vlSelfRef.u_lsu__DOT__mem_wr_r = 4U;
            }
        } else if ((1U & vlSelfRef.u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.u_lsu__DOT__mem_data_r = (0xff00U 
                                                & (vlSelfRef.lsu_opcode_rb_operand_w 
                                                   << 8U));
            vlSelfRef.u_lsu__DOT__mem_wr_r = 2U;
        } else {
            vlSelfRef.u_lsu__DOT__mem_data_r = (0xffU 
                                                & vlSelfRef.lsu_opcode_rb_operand_w);
            vlSelfRef.u_lsu__DOT__mem_wr_r = 1U;
        }
    } else {
        vlSelfRef.u_lsu__DOT__mem_wr_r = 0U;
    }
    vlSelfRef.u_div__DOT__opcode_ra_operand_i = vlSelfRef.opcode0_ra_operand_w;
    vlSelfRef.u_exec0__DOT__opcode_ra_operand_i = vlSelfRef.opcode0_ra_operand_w;
    vlSelfRef.u_exec0__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x13U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__imm12_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x7013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__imm12_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x2013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__imm12_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x3013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__imm12_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x6013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__imm12_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__imm12_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__shamt_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__shamt_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_input_b_r = vlSelfRef.u_exec0__DOT__shamt_r;
        vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_ra_operand_w;
    } else {
        if ((0x37U != (0x7fU & vlSelfRef.opcode0_opcode_w))) {
            if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_w))) {
                vlSelfRef.u_exec0__DOT__alu_input_b_r 
                    = vlSelfRef.u_exec0__DOT__imm20_r;
            } else if (((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_w)) 
                        | (0x67U == (0x707fU & vlSelfRef.opcode0_opcode_w)))) {
                vlSelfRef.u_exec0__DOT__alu_input_b_r = 4U;
            }
        }
        if ((0x37U == (0x7fU & vlSelfRef.opcode0_opcode_w))) {
            vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.u_exec0__DOT__imm20_r;
        } else if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_w))) {
            vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_pc_w;
        } else if (((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.opcode0_opcode_w)))) {
            vlSelfRef.u_exec0__DOT__alu_input_a_r = vlSelfRef.opcode0_pc_w;
        }
    }
    vlSelfRef.u_exec0__DOT__branch_r = 0U;
    vlSelfRef.u_exec0__DOT__branch_taken_r = 0U;
    vlSelfRef.u_exec0__DOT__branch_call_r = 0U;
    vlSelfRef.u_exec0__DOT__branch_ret_r = 0U;
    vlSelfRef.u_exec0__DOT__branch_jmp_r = 0U;
    vlSelfRef.u_exec0__DOT__branch_target_r = (vlSelfRef.opcode0_pc_w 
                                               + vlSelfRef.u_exec0__DOT__bimm_r);
    vlSelfRef.u_mul__DOT__operand_b_r = ((0x2002033U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.mul_opcode_opcode_w))
                                          ? (QData)((IData)(vlSelfRef.mul_opcode_rb_operand_w))
                                          : ((0x2001033U 
                                              == (0xfe00707fU 
                                                  & vlSelfRef.mul_opcode_opcode_w))
                                              ? (((QData)((IData)(
                                                                  (vlSelfRef.mul_opcode_rb_operand_w 
                                                                   >> 0x1fU))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.mul_opcode_rb_operand_w)))
                                              : (QData)((IData)(vlSelfRef.mul_opcode_rb_operand_w))));
    if ((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_target_r = (vlSelfRef.opcode0_pc_w 
                                                   + vlSelfRef.u_exec0__DOT__jimm20_r);
        vlSelfRef.u_exec0__DOT__branch_call_r = (1U 
                                                 == (IData)(vlSelfRef.opcode0_rd_idx_w));
        vlSelfRef.u_exec0__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_ret_r = ((1U 
                                                 == (IData)(vlSelfRef.opcode0_ra_idx_w)) 
                                                & (0U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelfRef.u_exec0__DOT__imm12_r)));
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_target_r = (vlSelfRef.opcode0_ra_operand_w 
                                                   + vlSelfRef.u_exec0__DOT__imm12_r);
        vlSelfRef.u_exec0__DOT__branch_call_r = ((~ (IData)(vlSelfRef.u_exec0__DOT__branch_ret_r)) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.opcode0_rd_idx_w)));
        vlSelfRef.u_exec0__DOT__branch_target_r = (0xfffffffeU 
                                                   & vlSelfRef.u_exec0__DOT__branch_target_r);
        vlSelfRef.u_exec0__DOT__branch_jmp_r = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.u_exec0__DOT__branch_call_r) 
                                                    | (IData)(vlSelfRef.u_exec0__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = (vlSelfRef.opcode0_ra_operand_w 
                                                  == vlSelfRef.opcode0_rb_operand_w);
    } else if ((0x1063U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = (vlSelfRef.opcode0_ra_operand_w 
                                                  != vlSelfRef.opcode0_rb_operand_w);
    } else if ((0x4063U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
            = vlSelfRef.opcode0_rb_operand_w;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
            = vlSelfRef.opcode0_ra_operand_w;
        vlSelfRef.u_exec0__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
               - vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y);
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.u_exec0__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.u_exec0__DOT__branch_taken_r = vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = (([&]() {
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                        = vlSelfRef.opcode0_rb_operand_w;
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                        = vlSelfRef.opcode0_ra_operand_w;
                    vlSelfRef.u_exec0__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                           - vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x);
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelfRef.u_exec0__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout)) 
                                                  | (vlSelfRef.opcode0_ra_operand_w 
                                                     == vlSelfRef.opcode0_rb_operand_w));
    } else if ((0x6063U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = (vlSelfRef.opcode0_ra_operand_w 
                                                  < vlSelfRef.opcode0_rb_operand_w);
    } else if ((0x7063U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__branch_r = 1U;
        vlSelfRef.u_exec0__DOT__branch_taken_r = (vlSelfRef.opcode0_ra_operand_w 
                                                  >= vlSelfRef.opcode0_rb_operand_w);
    }
    vlSelfRef.u_mul__DOT__operand_a_r = ((0x2002033U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.mul_opcode_opcode_w))
                                          ? u_mul__DOT____VdfgRegularize_hab8637a6_0_3
                                          : ((0x2001033U 
                                              == (0xfe00707fU 
                                                  & vlSelfRef.mul_opcode_opcode_w))
                                              ? u_mul__DOT____VdfgRegularize_hab8637a6_0_3
                                              : (QData)((IData)(vlSelfRef.mul_opcode_ra_operand_w))));
    vlSelfRef.u_exec1__DOT__u_alu__DOT__alu_b_i = vlSelfRef.u_exec1__DOT__alu_input_b_r;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__alu_a_i = vlSelfRef.u_exec1__DOT__alu_input_a_r;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__sub_res_w = 
        (vlSelfRef.u_exec1__DOT__alu_input_a_r - vlSelfRef.u_exec1__DOT__alu_input_b_r);
    vlSelfRef.u_exec1__DOT__branch_d_pc_o = vlSelfRef.u_exec1__DOT__branch_target_r;
    vlSelfRef.branch_d_exec1_pc_w = vlSelfRef.u_exec1__DOT__branch_target_r;
    vlSelfRef.branch_d_exec1_request_w = ((IData)(vlSelfRef.u_exec1__DOT__branch_r) 
                                          & ((IData)(vlSelfRef.exec1_opcode_valid_w) 
                                             & (IData)(vlSelfRef.u_exec1__DOT__branch_taken_r)));
    vlSelfRef.u_exec0__DOT__u_alu__DOT__alu_b_i = vlSelfRef.u_exec0__DOT__alu_input_b_r;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__alu_a_i = vlSelfRef.u_exec0__DOT__alu_input_a_r;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__sub_res_w = 
        (vlSelfRef.u_exec0__DOT__alu_input_a_r - vlSelfRef.u_exec0__DOT__alu_input_b_r);
    vlSelfRef.u_exec0__DOT__branch_d_pc_o = vlSelfRef.u_exec0__DOT__branch_target_r;
    vlSelfRef.branch_d_exec0_pc_w = vlSelfRef.u_exec0__DOT__branch_target_r;
    vlSelfRef.branch_d_exec0_request_w = ((IData)(vlSelfRef.u_exec0__DOT__branch_r) 
                                          & ((IData)(vlSelfRef.exec0_opcode_valid_w) 
                                             & (IData)(vlSelfRef.u_exec0__DOT__branch_taken_r)));
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_1_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_2_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_4_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_8_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_1_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_2_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_4_r = 0U;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_8_r = 0U;
    if ((8U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))) {
        vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                ? vlSelfRef.u_exec1__DOT__alu_input_a_r
                : ((2U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                    ? ((1U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                        ? (((vlSelfRef.u_exec1__DOT__alu_input_a_r 
                             >> 0x1fU) != (vlSelfRef.u_exec1__DOT__alu_input_b_r 
                                           >> 0x1fU))
                            ? ((vlSelfRef.u_exec1__DOT__alu_input_a_r 
                                >> 0x1fU) ? 1U : 0U)
                            : ((vlSelfRef.u_exec1__DOT__u_alu__DOT__sub_res_w 
                                >> 0x1fU) ? 1U : 0U))
                        : ((vlSelfRef.u_exec1__DOT__alu_input_a_r 
                            < vlSelfRef.u_exec1__DOT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                                            ? (vlSelfRef.u_exec1__DOT__alu_input_a_r 
                                               ^ vlSelfRef.u_exec1__DOT__alu_input_b_r)
                                            : (vlSelfRef.u_exec1__DOT__alu_input_a_r 
                                               | vlSelfRef.u_exec1__DOT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))) {
        vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r 
            = ((2U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                ? ((1U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                    ? (vlSelfRef.u_exec1__DOT__alu_input_a_r 
                       & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                    : vlSelfRef.u_exec1__DOT__u_alu__DOT__sub_res_w)
                : ((1U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))
                    ? vlSelfRef.u_exec1__DOT__alu_input_a_r
                    : (vlSelfRef.u_exec1__DOT__alu_input_a_r 
                       + vlSelfRef.u_exec1__DOT__alu_input_b_r)));
    } else if ((2U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))) {
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelfRef.u_exec1__DOT__alu_input_a_r 
                 >> 0x1fU) & (3U == (IData)(vlSelfRef.u_exec1__DOT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? ((0x80000000U & ((IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec1__DOT__alu_input_a_r 
                                                 >> 1U))
                : vlSelfRef.u_exec1__DOT__alu_input_a_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? ((0xc0000000U & ((IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_1_r 
                                                 >> 2U))
                : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_1_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? ((0xf0000000U & ((IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_2_r 
                                                 >> 4U))
                : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_2_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? ((0xff000000U & ((IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_4_r 
                                                 >> 8U))
                : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_4_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? (((IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                    << 0x10U) | (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_8_r 
                                 >> 0x10U)) : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelfRef.u_exec1__DOT__alu_func_r))) {
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec1__DOT__alu_input_a_r 
                   << 1U) : vlSelfRef.u_exec1__DOT__alu_input_a_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_1_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_2_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_4_r);
        vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_8_r 
                   << 0x10U) : vlSelfRef.u_exec1__DOT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r 
            = vlSelfRef.u_exec1__DOT__alu_input_a_r;
    }
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_d_exec1_pc_i 
        = vlSelfRef.branch_d_exec1_pc_w;
    vlSelfRef.u_exec1__DOT__branch_d_request_o = vlSelfRef.branch_d_exec1_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_d_exec1_request_i 
        = vlSelfRef.branch_d_exec1_request_w;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_1_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_2_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_4_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_8_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_1_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_2_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_4_r = 0U;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_8_r = 0U;
    if ((8U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))) {
        vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                ? vlSelfRef.u_exec0__DOT__alu_input_a_r
                : ((2U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                    ? ((1U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                        ? (((vlSelfRef.u_exec0__DOT__alu_input_a_r 
                             >> 0x1fU) != (vlSelfRef.u_exec0__DOT__alu_input_b_r 
                                           >> 0x1fU))
                            ? ((vlSelfRef.u_exec0__DOT__alu_input_a_r 
                                >> 0x1fU) ? 1U : 0U)
                            : ((vlSelfRef.u_exec0__DOT__u_alu__DOT__sub_res_w 
                                >> 0x1fU) ? 1U : 0U))
                        : ((vlSelfRef.u_exec0__DOT__alu_input_a_r 
                            < vlSelfRef.u_exec0__DOT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                                            ? (vlSelfRef.u_exec0__DOT__alu_input_a_r 
                                               ^ vlSelfRef.u_exec0__DOT__alu_input_b_r)
                                            : (vlSelfRef.u_exec0__DOT__alu_input_a_r 
                                               | vlSelfRef.u_exec0__DOT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))) {
        vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r 
            = ((2U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                ? ((1U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                    ? (vlSelfRef.u_exec0__DOT__alu_input_a_r 
                       & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                    : vlSelfRef.u_exec0__DOT__u_alu__DOT__sub_res_w)
                : ((1U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))
                    ? vlSelfRef.u_exec0__DOT__alu_input_a_r
                    : (vlSelfRef.u_exec0__DOT__alu_input_a_r 
                       + vlSelfRef.u_exec0__DOT__alu_input_b_r)));
    } else if ((2U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))) {
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelfRef.u_exec0__DOT__alu_input_a_r 
                 >> 0x1fU) & (3U == (IData)(vlSelfRef.u_exec0__DOT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? ((0x80000000U & ((IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec0__DOT__alu_input_a_r 
                                                 >> 1U))
                : vlSelfRef.u_exec0__DOT__alu_input_a_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? ((0xc0000000U & ((IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_1_r 
                                                 >> 2U))
                : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_1_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? ((0xf0000000U & ((IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_2_r 
                                                 >> 4U))
                : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_2_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? ((0xff000000U & ((IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_4_r 
                                                 >> 8U))
                : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_4_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? (((IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                    << 0x10U) | (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_8_r 
                                 >> 0x10U)) : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelfRef.u_exec0__DOT__alu_func_r))) {
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec0__DOT__alu_input_a_r 
                   << 1U) : vlSelfRef.u_exec0__DOT__alu_input_a_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_1_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_2_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_4_r);
        vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_8_r 
                   << 0x10U) : vlSelfRef.u_exec0__DOT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r 
            = vlSelfRef.u_exec0__DOT__alu_input_a_r;
    }
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_d_exec0_pc_i 
        = vlSelfRef.branch_d_exec0_pc_w;
    vlSelfRef.u_exec0__DOT__branch_d_request_o = vlSelfRef.branch_d_exec0_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_d_exec0_request_i 
        = vlSelfRef.branch_d_exec0_request_w;
    vlSelfRef.u_exec1__DOT__alu_p_w = vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r;
    vlSelfRef.u_exec1__DOT__u_alu__DOT__alu_p_o = vlSelfRef.u_exec1__DOT__u_alu__DOT__result_r;
    vlSelfRef.u_exec0__DOT__alu_p_w = vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r;
    vlSelfRef.u_exec0__DOT__u_alu__DOT__alu_p_o = vlSelfRef.u_exec0__DOT__u_alu__DOT__result_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__0(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i = 0;
    IData/*28:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64 = 0;
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65 = 0;
    SData/*8:0*/ __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q = 0;
    SData/*8:0*/ __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q = 0;
    SData/*15:0*/ __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q = 0;
    CData/*1:0*/ __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__mem_rd_q;
    __Vdly__u_lsu__DOT__mem_rd_q = 0;
    CData/*3:0*/ __Vdly__u_lsu__DOT__mem_wr_q;
    __Vdly__u_lsu__DOT__mem_wr_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__mem_unaligned_e1_q;
    __Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0;
    CData/*1:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_div__DOT__div_busy_q;
    __Vdly__u_div__DOT__div_busy_q = 0;
    IData/*31:0*/ __Vdly__u_div__DOT__dividend_q;
    __Vdly__u_div__DOT__dividend_q = 0;
    QData/*62:0*/ __Vdly__u_div__DOT__divisor_q;
    __Vdly__u_div__DOT__divisor_q = 0;
    IData/*31:0*/ __Vdly__u_div__DOT__quotient_q;
    __Vdly__u_div__DOT__quotient_q = 0;
    IData/*31:0*/ __Vdly__u_div__DOT__q_mask_q;
    __Vdly__u_div__DOT__q_mask_q = 0;
    IData/*31:0*/ __Vdly__u_div__DOT__last_a_q;
    __Vdly__u_div__DOT__last_a_q = 0;
    IData/*31:0*/ __Vdly__u_div__DOT__last_b_q;
    __Vdly__u_div__DOT__last_b_q = 0;
    CData/*0:0*/ __Vdly__u_div__DOT__last_div_q;
    __Vdly__u_div__DOT__last_div_q = 0;
    CData/*0:0*/ __Vdly__u_div__DOT__last_divu_q;
    __Vdly__u_div__DOT__last_divu_q = 0;
    CData/*0:0*/ __Vdly__u_div__DOT__last_rem_q;
    __Vdly__u_div__DOT__last_rem_q = 0;
    CData/*0:0*/ __Vdly__u_div__DOT__last_remu_q;
    __Vdly__u_div__DOT__last_remu_q = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    CData/*2:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    CData/*2:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0;
    SData/*8:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0;
    SData/*8:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2 = 0;
    QData/*63:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 0;
    QData/*35:0*/ __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    // Body
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
        = vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0U;
    __Vdly__u_div__DOT__divisor_q = vlSelfRef.u_div__DOT__divisor_q;
    __Vdly__u_div__DOT__last_a_q = vlSelfRef.u_div__DOT__last_a_q;
    __Vdly__u_div__DOT__last_b_q = vlSelfRef.u_div__DOT__last_b_q;
    __Vdly__u_div__DOT__last_div_q = vlSelfRef.u_div__DOT__last_div_q;
    __Vdly__u_div__DOT__last_divu_q = vlSelfRef.u_div__DOT__last_divu_q;
    __Vdly__u_div__DOT__last_rem_q = vlSelfRef.u_div__DOT__last_rem_q;
    __Vdly__u_div__DOT__last_remu_q = vlSelfRef.u_div__DOT__last_remu_q;
    __Vdly__u_div__DOT__div_busy_q = vlSelfRef.u_div__DOT__div_busy_q;
    __Vdly__u_div__DOT__q_mask_q = vlSelfRef.u_div__DOT__q_mask_q;
    __Vdly__u_div__DOT__dividend_q = vlSelfRef.u_div__DOT__dividend_q;
    __Vdly__u_div__DOT__quotient_q = vlSelfRef.u_div__DOT__quotient_q;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0U;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
        = vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    __Vdly__u_lsu__DOT__mem_unaligned_e1_q = vlSelfRef.u_lsu__DOT__mem_unaligned_e1_q;
    __Vdly__u_lsu__DOT__mem_wr_q = vlSelfRef.u_lsu__DOT__mem_wr_q;
    __Vdly__u_lsu__DOT__mem_rd_q = vlSelfRef.u_lsu__DOT__mem_rd_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
        = vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 0U;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0U;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2 = 0U;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 0U;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 0U;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0U;
    if (vlSelfRef.rst_i) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 2U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 3U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 4U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 5U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 6U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 7U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 8U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 2U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 3U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 4U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 5U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 6U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 7U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 8U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 9U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0xaU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0xbU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0xcU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0xdU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0xeU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0xfU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x10U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x11U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x12U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x13U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x14U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x15U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x16U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x17U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x18U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x19U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x1aU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x1bU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x1cU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x1dU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x1eU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x1fU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x20U;
        vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__i = 1U;
        vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__i = 2U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i = 1U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i = 2U;
        __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q = 1U;
        __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q = 0U;
        __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4 = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q[(0x1ffU 
                                                                                & vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4)] = 3U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4 
                = ((IData)(1U) + vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4);
        }
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 1U;
        __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = 0U;
        __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 1U;
        __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q = 0U;
        __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q = 0U;
        __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0 = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q = 0U;
        vlSelfRef.u_div__DOT__wb_result_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_d_q = 0U;
        vlSelfRef.u_mul__DOT__operand_b_e1_q = 0ULL;
        vlSelfRef.u_mul__DOT__operand_a_e1_q = 0ULL;
        vlSelfRef.u_mul__DOT__mulhi_sel_e1_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__pred_d_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_fetch_q = 0U;
        vlSelfRef.u_exec0__DOT__branch_jmp_q = 0U;
        vlSelfRef.u_exec1__DOT__branch_jmp_q = 0U;
        vlSelfRef.u_exec0__DOT__branch_taken_q = 0U;
        vlSelfRef.u_exec0__DOT__branch_ntaken_q = 0U;
        vlSelfRef.u_exec1__DOT__pc_m_q = 0U;
        vlSelfRef.u_exec0__DOT__pc_m_q = 0U;
        vlSelfRef.u_exec0__DOT__branch_call_q = 0U;
        vlSelfRef.u_exec0__DOT__branch_ret_q = 0U;
        vlSelfRef.u_exec1__DOT__branch_call_q = 0U;
        vlSelfRef.u_exec1__DOT__branch_ret_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U] = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] = 0U;
        vlSelfRef.u_exec1__DOT__branch_taken_q = 0U;
        vlSelfRef.u_exec1__DOT__branch_ntaken_q = 0U;
        vlSelfRef.u_exec1__DOT__pc_x_q = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q = 0U;
        vlSelfRef.u_exec0__DOT__pc_x_q = 0U;
        __Vdly__u_div__DOT__div_busy_q = 0U;
        __Vdly__u_div__DOT__dividend_q = 0U;
        __Vdly__u_div__DOT__divisor_q = 0ULL;
        vlSelfRef.u_div__DOT__invert_res_q = 0U;
        __Vdly__u_div__DOT__quotient_q = 0U;
        __Vdly__u_div__DOT__q_mask_q = 0U;
        vlSelfRef.u_div__DOT__div_inst_q = 0U;
        __Vdly__u_div__DOT__last_a_q = 0U;
        __Vdly__u_div__DOT__last_b_q = 0U;
        __Vdly__u_div__DOT__last_div_q = 0U;
        __Vdly__u_div__DOT__last_divu_q = 0U;
        __Vdly__u_div__DOT__last_rem_q = 0U;
        __Vdly__u_div__DOT__last_remu_q = 0U;
        vlSelfRef.u_exec0__DOT__result_q = 0U;
        vlSelfRef.u_exec1__DOT__result_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_q = 0U;
        vlSelfRef.u_mul__DOT__result_e3_q = 0U;
        vlSelfRef.u_lsu__DOT__pending_lsu_e2_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_addr_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_data_wr_q = 0U;
        __Vdly__u_lsu__DOT__mem_rd_q = 0U;
        __Vdly__u_lsu__DOT__mem_wr_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_cacheable_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_invalidate_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_writeback_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_flush_q = 0U;
        __Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_load_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_xb_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_xh_q = 0U;
        vlSelfRef.u_lsu__DOT__mem_ls_q = 0U;
        vlSelfRef.u_frontend__DOT__u_fetch__DOT__active_q = 0U;
        vlSelfRef.u_mul__DOT__result_e2_q = 0U;
    } else {
        if (vlSelfRef.branch_request_w) {
            vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i = 1U;
            vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i = 2U;
            __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q = 0U;
            __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q = 0U;
            __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q = 0U;
            __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2 = 1U;
        } else {
            if (((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w) 
                 & (~ (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w)))) {
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)));
            } else if (((~ (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w)) 
                        & (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w))) {
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
                    = (3U & ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q) 
                             - (IData)(1U)));
            }
            if (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w) {
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__data_in_i;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 1U;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 
                    = vlSelfRef.u_frontend__DOT__fetch_pc_w;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 
                    = (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__fetch_pred_branch_w)));
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q)));
            }
            if (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w) {
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
                __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 1U;
            }
            if (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w) {
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
                __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 1U;
            }
            if (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w) {
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q)));
            }
        }
        if (vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q 
                = ((1U & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q))
                    ? (0xb400U ^ (0x7fffU & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q) 
                                             >> 1U)))
                    : (0x7fffU & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q) 
                                  >> 1U)));
        }
        if (((IData)(vlSelfRef.branch_info_is_taken_w) 
             | (IData)(vlSelfRef.branch_info_is_not_taken_w))) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q 
                = ((0x1feU & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q) 
                              << 1U)) | (IData)(vlSelfRef.branch_info_is_taken_w));
        }
        if ((((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
              & (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.u_lsu__DOT__writeback_valid_o) 
                   & (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__valid_o))))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
                        & (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.u_lsu__DOT__writeback_valid_o) 
                       & (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__valid_o)))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.branch_info_request_w) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
                = ((0x1feU & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q) 
                              << 1U)) | (IData)(vlSelfRef.branch_info_is_taken_w));
        } else if (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w) 
                    | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_ntaken_w))) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
                = ((0x1feU & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q) 
                              << 1U)) | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w));
        }
        if (((IData)(vlSelfRef.branch_info_is_taken_w) 
             & (3U > vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w]))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 
                = (3U & ((IData)(1U) + vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                         [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w]));
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 1U;
        } else if (((IData)(vlSelfRef.branch_info_is_not_taken_w) 
                    & (0U < vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                       [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w]))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 
                = (3U & (vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                         [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w] 
                         - (IData)(1U)));
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1 = 1U;
        }
        if (((IData)(vlSelfRef.branch_info_request_w) 
             & (IData)(vlSelfRef.branch_info_is_call_w))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 
                = ((IData)(4U) + vlSelfRef.branch_info_source_w);
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
        } else if (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                    & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 
                = ((IData)(4U) + ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_w)
                                   ? (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w)
                                   : vlSelfRef.u_frontend__DOT__fetch_pc_f_w));
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
        } else if ((((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                     & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w)) 
                    | ((IData)(vlSelfRef.branch_info_request_w) 
                       & (IData)(vlSelfRef.branch_info_is_ret_w)))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
        }
        if (vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 
                = vlSelfRef.branch_info_is_jmp_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 1U;
            if (vlSelfRef.branch_info_is_taken_w) {
                __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 
                    = vlSelfRef.branch_info_pc_w;
                __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 
                    = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
                __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 1U;
            }
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 
                = vlSelfRef.branch_info_is_ret_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 
                = vlSelfRef.branch_info_is_call_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 
                = vlSelfRef.branch_info_source_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 1U;
        } else if (vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 
                = vlSelfRef.branch_info_is_jmp_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 
                = vlSelfRef.branch_info_pc_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 
                = vlSelfRef.branch_info_is_ret_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 
                = vlSelfRef.branch_info_is_call_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 
                = vlSelfRef.branch_info_source_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 1U;
        }
        if (((IData)(vlSelfRef.u_lsu__DOT__writeback_valid_o) 
             & (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__valid_o))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
             & (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__accept_o))) {
            __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 
                = vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__data_in_i;
            __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 
                = vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
            __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 1U;
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q)));
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r;
        if (vlSelfRef.u_div__DOT__div_complete_w) {
            vlSelfRef.u_div__DOT__wb_result_q = vlSelfRef.u_div__DOT__div_result_r;
        }
        if (((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_rd_o) 
             & (IData)(vlSelfRef.mmu_ifetch_accept_w))) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_d_q 
                = vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_pc_w;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__pred_d_q 
                = vlSelfRef.u_frontend__DOT__next_taken_f_w;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_fetch_q = 1U;
        } else if (vlSelfRef.mmu_ifetch_valid_w) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__pred_d_q = 0U;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_fetch_q = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.mul_hold_w)))) {
            if (((IData)(vlSelfRef.mul_opcode_valid_w) 
                 & (IData)(vlSelfRef.u_mul__DOT__mult_inst_w))) {
                vlSelfRef.u_mul__DOT__operand_b_e1_q 
                    = vlSelfRef.u_mul__DOT__operand_b_r;
                vlSelfRef.u_mul__DOT__operand_a_e1_q 
                    = vlSelfRef.u_mul__DOT__operand_a_r;
            } else {
                vlSelfRef.u_mul__DOT__operand_b_e1_q = 0ULL;
                vlSelfRef.u_mul__DOT__operand_a_e1_q = 0ULL;
            }
            vlSelfRef.u_mul__DOT__mulhi_sel_e1_q = 
                (((IData)(vlSelfRef.mul_opcode_valid_w) 
                  & (IData)(vlSelfRef.u_mul__DOT__mult_inst_w)) 
                 && (0x2000033U != (0xfe00707fU & vlSelfRef.mul_opcode_opcode_w)));
            vlSelfRef.u_mul__DOT__result_e3_q = vlSelfRef.u_mul__DOT__result_e2_q;
            vlSelfRef.u_mul__DOT__result_e2_q = vlSelfRef.u_mul__DOT__result_r;
        }
        if (vlSelfRef.exec0_opcode_valid_w) {
            vlSelfRef.u_exec0__DOT__branch_jmp_q = 
                (((IData)(vlSelfRef.u_exec0__DOT__branch_r) 
                  & (IData)(vlSelfRef.exec0_opcode_valid_w)) 
                 & (IData)(vlSelfRef.u_exec0__DOT__branch_jmp_r));
            vlSelfRef.u_exec0__DOT__branch_taken_q 
                = ((IData)(vlSelfRef.u_exec0__DOT__branch_r) 
                   & ((IData)(vlSelfRef.exec0_opcode_valid_w) 
                      & (IData)(vlSelfRef.u_exec0__DOT__branch_taken_r)));
            vlSelfRef.u_exec0__DOT__branch_ntaken_q 
                = ((IData)(vlSelfRef.u_exec0__DOT__branch_r) 
                   & ((IData)(vlSelfRef.exec0_opcode_valid_w) 
                      & (~ (IData)(vlSelfRef.u_exec0__DOT__branch_taken_r))));
            vlSelfRef.u_exec0__DOT__pc_m_q = vlSelfRef.opcode0_pc_w;
            vlSelfRef.u_exec0__DOT__branch_call_q = 
                (((IData)(vlSelfRef.u_exec0__DOT__branch_r) 
                  & (IData)(vlSelfRef.exec0_opcode_valid_w)) 
                 & (IData)(vlSelfRef.u_exec0__DOT__branch_call_r));
            vlSelfRef.u_exec0__DOT__branch_ret_q = 
                (((IData)(vlSelfRef.u_exec0__DOT__branch_r) 
                  & (IData)(vlSelfRef.exec0_opcode_valid_w)) 
                 & (IData)(vlSelfRef.u_exec0__DOT__branch_ret_r));
            vlSelfRef.u_exec0__DOT__pc_x_q = ((IData)(vlSelfRef.u_exec0__DOT__branch_taken_r)
                                               ? vlSelfRef.u_exec0__DOT__branch_target_r
                                               : ((IData)(4U) 
                                                  + vlSelfRef.opcode0_pc_w));
        }
        if (vlSelfRef.exec1_opcode_valid_w) {
            vlSelfRef.u_exec1__DOT__branch_jmp_q = 
                (((IData)(vlSelfRef.u_exec1__DOT__branch_r) 
                  & (IData)(vlSelfRef.exec1_opcode_valid_w)) 
                 & (IData)(vlSelfRef.u_exec1__DOT__branch_jmp_r));
            vlSelfRef.u_exec1__DOT__pc_m_q = vlSelfRef.opcode1_pc_w;
            vlSelfRef.u_exec1__DOT__branch_call_q = 
                (((IData)(vlSelfRef.u_exec1__DOT__branch_r) 
                  & (IData)(vlSelfRef.exec1_opcode_valid_w)) 
                 & (IData)(vlSelfRef.u_exec1__DOT__branch_call_r));
            vlSelfRef.u_exec1__DOT__branch_ret_q = 
                (((IData)(vlSelfRef.u_exec1__DOT__branch_r) 
                  & (IData)(vlSelfRef.exec1_opcode_valid_w)) 
                 & (IData)(vlSelfRef.u_exec1__DOT__branch_ret_r));
            vlSelfRef.u_exec1__DOT__branch_taken_q 
                = ((IData)(vlSelfRef.u_exec1__DOT__branch_r) 
                   & ((IData)(vlSelfRef.exec1_opcode_valid_w) 
                      & (IData)(vlSelfRef.u_exec1__DOT__branch_taken_r)));
            vlSelfRef.u_exec1__DOT__branch_ntaken_q 
                = ((IData)(vlSelfRef.u_exec1__DOT__branch_r) 
                   & ((IData)(vlSelfRef.exec1_opcode_valid_w) 
                      & (~ (IData)(vlSelfRef.u_exec1__DOT__branch_taken_r))));
            vlSelfRef.u_exec1__DOT__pc_x_q = ((IData)(vlSelfRef.u_exec1__DOT__branch_taken_r)
                                               ? vlSelfRef.u_exec1__DOT__branch_target_r
                                               : ((IData)(4U) 
                                                  + vlSelfRef.opcode1_pc_w));
        }
        if (((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_valid_o) 
             & (~ (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w)))) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U] 
                = (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_instr_o);
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U] 
                = (IData)((vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_instr_o 
                           >> 0x20U));
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U] 
                = vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_pc_o;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                = (((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_fault_page_o) 
                    << 3U) | (((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_fault_fetch_o) 
                               << 2U) | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_pred_branch_o)));
        } else {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U] = 0U;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U] = 0U;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U] = 0U;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] = 0U;
        }
        if (vlSelfRef.u_div__DOT__div_start_w) {
            if (((((((vlSelfRef.u_div__DOT__last_a_q 
                      == vlSelfRef.opcode0_ra_operand_w) 
                     & (vlSelfRef.u_div__DOT__last_b_q 
                        == vlSelfRef.opcode0_rb_operand_w)) 
                    & ((IData)(vlSelfRef.u_div__DOT__last_div_q) 
                       == (IData)(vlSelfRef.u_div__DOT__inst_div_w))) 
                   & ((IData)(vlSelfRef.u_div__DOT__last_divu_q) 
                      == (IData)(vlSelfRef.u_div__DOT__inst_divu_w))) 
                  & ((IData)(vlSelfRef.u_div__DOT__last_rem_q) 
                     == (IData)(vlSelfRef.u_div__DOT__inst_rem_w))) 
                 & ((IData)(vlSelfRef.u_div__DOT__last_remu_q) 
                    == (IData)(vlSelfRef.u_div__DOT__inst_remu_w)))) {
                __Vdly__u_div__DOT__div_busy_q = 1U;
            } else {
                __Vdly__u_div__DOT__last_a_q = vlSelfRef.opcode0_ra_operand_w;
                __Vdly__u_div__DOT__last_b_q = vlSelfRef.opcode0_rb_operand_w;
                __Vdly__u_div__DOT__last_div_q = vlSelfRef.u_div__DOT__inst_div_w;
                __Vdly__u_div__DOT__last_divu_q = vlSelfRef.u_div__DOT__inst_divu_w;
                __Vdly__u_div__DOT__last_rem_q = vlSelfRef.u_div__DOT__inst_rem_w;
                __Vdly__u_div__DOT__last_remu_q = vlSelfRef.u_div__DOT__inst_remu_w;
                __Vdly__u_div__DOT__div_busy_q = 1U;
                vlSelfRef.u_div__DOT__div_inst_q = vlSelfRef.u_div__DOT__div_operation_w;
                __Vdly__u_div__DOT__dividend_q = (((IData)(vlSelfRef.u_div__DOT__signed_operation_w) 
                                                   & (vlSelfRef.opcode0_ra_operand_w 
                                                      >> 0x1fU))
                                                   ? 
                                                  (- vlSelfRef.opcode0_ra_operand_w)
                                                   : vlSelfRef.opcode0_ra_operand_w);
                __Vdly__u_div__DOT__divisor_q = (((IData)(vlSelfRef.u_div__DOT__signed_operation_w) 
                                                  & (vlSelfRef.opcode0_rb_operand_w 
                                                     >> 0x1fU))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (- vlSelfRef.opcode0_rb_operand_w))) 
                                                  << 0x1fU)
                                                  : 
                                                 ((QData)((IData)(vlSelfRef.opcode0_rb_operand_w)) 
                                                  << 0x1fU));
                vlSelfRef.u_div__DOT__invert_res_q 
                    = ((((0x2004033U == (0xfe00707fU 
                                         & vlSelfRef.opcode0_opcode_w)) 
                         & ((vlSelfRef.opcode0_ra_operand_w 
                             >> 0x1fU) != (vlSelfRef.opcode0_rb_operand_w 
                                           >> 0x1fU))) 
                        & (0U != vlSelfRef.opcode0_rb_operand_w)) 
                       | ((0x2006033U == (0xfe00707fU 
                                          & vlSelfRef.opcode0_opcode_w)) 
                          & (vlSelfRef.opcode0_ra_operand_w 
                             >> 0x1fU)));
                __Vdly__u_div__DOT__quotient_q = 0U;
                __Vdly__u_div__DOT__q_mask_q = 0x80000000U;
            }
        } else if (vlSelfRef.u_div__DOT__div_complete_w) {
            __Vdly__u_div__DOT__div_busy_q = 0U;
        } else if (vlSelfRef.u_div__DOT__div_busy_q) {
            if ((vlSelfRef.u_div__DOT__divisor_q <= (QData)((IData)(vlSelfRef.u_div__DOT__dividend_q)))) {
                __Vdly__u_div__DOT__dividend_q = (vlSelfRef.u_div__DOT__dividend_q 
                                                  - (IData)(vlSelfRef.u_div__DOT__divisor_q));
                __Vdly__u_div__DOT__quotient_q = (vlSelfRef.u_div__DOT__quotient_q 
                                                  | vlSelfRef.u_div__DOT__q_mask_q);
            }
            __Vdly__u_div__DOT__divisor_q = (0x3fffffffffffffffULL 
                                             & (vlSelfRef.u_div__DOT__divisor_q 
                                                >> 1U));
            __Vdly__u_div__DOT__q_mask_q = (vlSelfRef.u_div__DOT__q_mask_q 
                                            >> 1U);
        }
        if ((1U & (~ (IData)(vlSelfRef.exec0_hold_w)))) {
            vlSelfRef.u_exec0__DOT__result_q = vlSelfRef.u_exec0__DOT__alu_p_w;
        }
        if ((1U & (~ (IData)(vlSelfRef.exec1_hold_w)))) {
            vlSelfRef.u_exec1__DOT__result_q = vlSelfRef.u_exec1__DOT__alu_p_w;
        }
        if (((IData)(vlSelfRef.branch_request_w) & 
             ((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w) 
              | (~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__active_q))))) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_q 
                = vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_w;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q 
                = vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w;
        } else if ((1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w)))) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_q = 0U;
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q = 0U;
        }
        if (((((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w) 
               | (~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__active_q))) 
              | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_q)) 
             & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w))) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_q 
                = vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_w;
        } else if ((1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_q 
                = vlSelfRef.u_frontend__DOT__next_pc_f_w;
        }
        if (vlSelfRef.u_lsu__DOT__issue_lsu_e1_w) {
            vlSelfRef.u_lsu__DOT__pending_lsu_e2_q = 1U;
        } else if (((IData)(vlSelfRef.u_lsu__DOT__complete_ok_e2_w) 
                    | (IData)(vlSelfRef.u_lsu__DOT__complete_err_e2_w))) {
            vlSelfRef.u_lsu__DOT__pending_lsu_e2_q = 0U;
        }
        if (((IData)(vlSelfRef.u_lsu__DOT__complete_err_e2_w) 
             | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q))) {
            vlSelfRef.u_lsu__DOT__mem_addr_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_data_wr_q = 0U;
            __Vdly__u_lsu__DOT__mem_rd_q = 0U;
            __Vdly__u_lsu__DOT__mem_wr_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_cacheable_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_invalidate_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_writeback_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_flush_q = 0U;
            __Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_load_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_xb_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_xh_q = 0U;
            vlSelfRef.u_lsu__DOT__mem_ls_q = 0U;
        } else if ((1U & (~ ((((IData)(vlSelfRef.u_lsu__DOT__mem_rd_q) 
                               | (0U != (IData)(vlSelfRef.u_lsu__DOT__mem_wr_q))) 
                              | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e1_q)) 
                             & (IData)(vlSelfRef.u_lsu__DOT__delay_lsu_e2_w))))) {
            if ((1U & (~ ((((((IData)(vlSelfRef.u_lsu__DOT__mem_writeback_o) 
                              | (IData)(vlSelfRef.u_lsu__DOT__mem_invalidate_o)) 
                             | (IData)(vlSelfRef.u_lsu__DOT__mem_flush_o)) 
                            | (IData)(vlSelfRef.u_lsu__DOT__mem_rd_o)) 
                           | (0U != (IData)(vlSelfRef.u_lsu__DOT__mem_wr_o))) 
                          & (~ (IData)(vlSelfRef.mmu_lsu_accept_w)))))) {
                vlSelfRef.u_lsu__DOT__mem_addr_q = 0U;
                vlSelfRef.u_lsu__DOT__mem_data_wr_q 
                    = vlSelfRef.u_lsu__DOT__mem_data_r;
                __Vdly__u_lsu__DOT__mem_rd_q = vlSelfRef.u_lsu__DOT__mem_rd_r;
                __Vdly__u_lsu__DOT__mem_wr_q = vlSelfRef.u_lsu__DOT__mem_wr_r;
                vlSelfRef.u_lsu__DOT__mem_cacheable_q = 0U;
                vlSelfRef.u_lsu__DOT__mem_invalidate_q = 0U;
                vlSelfRef.u_lsu__DOT__mem_writeback_q = 0U;
                vlSelfRef.u_lsu__DOT__mem_flush_q = 0U;
                __Vdly__u_lsu__DOT__mem_unaligned_e1_q 
                    = vlSelfRef.u_lsu__DOT__mem_unaligned_r;
                vlSelfRef.u_lsu__DOT__mem_load_q = 
                    ((IData)(vlSelfRef.lsu_opcode_valid_w) 
                     & (IData)(vlSelfRef.u_lsu__DOT__load_inst_w));
                vlSelfRef.u_lsu__DOT__mem_xb_q = ((IData)(vlSelfRef.u_lsu__DOT__req_lb_w) 
                                                  | (IData)(vlSelfRef.u_lsu__DOT__req_sb_w));
                vlSelfRef.u_lsu__DOT__mem_xh_q = ((IData)(vlSelfRef.u_lsu__DOT__req_lh_w) 
                                                  | (IData)(vlSelfRef.u_lsu__DOT__req_sh_w));
                vlSelfRef.u_lsu__DOT__mem_ls_q = vlSelfRef.u_lsu__DOT__load_signed_inst_w;
                vlSelfRef.u_lsu__DOT__mem_cacheable_q 
                    = (((0x80000000U <= vlSelfRef.u_lsu__DOT__mem_addr_r) 
                        & (0x8fffffffU >= vlSelfRef.u_lsu__DOT__mem_addr_r)) 
                       | ((IData)(vlSelfRef.lsu_opcode_valid_w) 
                          & (((IData)(vlSelfRef.u_lsu__DOT__dcache_invalidate_w) 
                              | (IData)(vlSelfRef.u_lsu__DOT__dcache_writeback_w)) 
                             | (IData)(vlSelfRef.u_lsu__DOT__dcache_flush_w))));
                vlSelfRef.u_lsu__DOT__mem_invalidate_q 
                    = ((IData)(vlSelfRef.lsu_opcode_valid_w) 
                       & (IData)(vlSelfRef.u_lsu__DOT__dcache_invalidate_w));
                vlSelfRef.u_lsu__DOT__mem_writeback_q 
                    = ((IData)(vlSelfRef.lsu_opcode_valid_w) 
                       & (IData)(vlSelfRef.u_lsu__DOT__dcache_writeback_w));
                vlSelfRef.u_lsu__DOT__mem_flush_q = 
                    ((IData)(vlSelfRef.lsu_opcode_valid_w) 
                     & (IData)(vlSelfRef.u_lsu__DOT__dcache_flush_w));
                vlSelfRef.u_lsu__DOT__mem_addr_q = vlSelfRef.u_lsu__DOT__mem_addr_r;
            }
        }
        if (vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w) {
            vlSelfRef.u_frontend__DOT__u_fetch__DOT__active_q = 1U;
        }
    }
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_q 
        = ((~ (IData)(vlSelfRef.rst_i)) & ((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_invalidate_o) 
                                           & (~ (IData)(vlSelfRef.mmu_ifetch_accept_w))));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_valid_q 
        = ((1U & (~ (IData)(vlSelfRef.rst_i))) && ((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_valid_o) 
                                                   & (~ (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w))));
    vlSelfRef.u_div__DOT__valid_q = ((~ (IData)(vlSelfRef.rst_i)) 
                                     & (IData)(vlSelfRef.u_div__DOT__div_complete_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q 
        = __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q 
        = __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
        = __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q;
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v1;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[0U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[1U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[2U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[3U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[4U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[5U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[6U] = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[7U] = 1U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[2U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[3U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[4U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[5U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[6U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[7U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[8U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[9U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xaU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xbU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xcU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xdU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xeU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xfU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x10U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x11U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x12U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x13U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x14U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x15U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x16U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x17U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x18U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x19U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1aU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1bU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1cU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1dU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1eU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[2U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[3U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[4U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[5U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[6U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[7U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[8U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[9U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xaU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xbU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xcU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xdU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xeU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xfU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x10U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x11U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x12U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x13U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x14U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x15U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x16U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x17U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x18U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x19U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1aU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1bU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1cU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1dU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1eU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[2U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[3U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[4U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[5U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[6U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[7U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[8U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[9U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xaU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xbU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xcU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xdU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xeU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xfU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x10U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x11U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x12U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x13U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x14U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x15U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x16U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x17U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x18U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x19U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1aU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1bU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1cU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1dU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1eU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[2U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[3U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[4U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[5U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[6U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[7U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[8U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[9U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xaU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xbU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xcU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xdU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xeU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xfU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x10U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x11U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x12U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x13U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x14U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x15U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x16U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x17U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x18U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x19U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1aU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1bU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1cU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1dU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1eU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[2U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[3U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[4U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[5U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[6U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[7U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[8U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[9U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xaU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xbU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xcU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xdU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xeU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xfU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x10U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x11U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x12U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x13U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x14U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x15U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x16U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x17U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x18U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x19U] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1aU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1bU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1cU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1dU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1eU] = 0U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    }
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
        = __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    if (__VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0) {
        vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q[0U] = 0ULL;
        vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q[1U] = 0ULL;
    }
    if (__VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2) {
        vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q[__VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2] 
            = __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    }
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q 
        = __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2) {
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[1U] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3) {
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3) {
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3] = 0U;
    }
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q 
        = __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0) {
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[0U] = 0ULL;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[0U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[1U] = 0ULL;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[1U] = 0U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[1U] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2) {
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2] = 1U;
        vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2;
    }
    vlSelfRef.u_div__DOT__divisor_q = __Vdly__u_div__DOT__divisor_q;
    vlSelfRef.u_div__DOT__last_a_q = __Vdly__u_div__DOT__last_a_q;
    vlSelfRef.u_div__DOT__last_b_q = __Vdly__u_div__DOT__last_b_q;
    vlSelfRef.u_div__DOT__last_div_q = __Vdly__u_div__DOT__last_div_q;
    vlSelfRef.u_div__DOT__last_divu_q = __Vdly__u_div__DOT__last_divu_q;
    vlSelfRef.u_div__DOT__last_rem_q = __Vdly__u_div__DOT__last_rem_q;
    vlSelfRef.u_div__DOT__last_remu_q = __Vdly__u_div__DOT__last_remu_q;
    vlSelfRef.u_div__DOT__div_busy_q = __Vdly__u_div__DOT__div_busy_q;
    vlSelfRef.u_div__DOT__q_mask_q = __Vdly__u_div__DOT__q_mask_q;
    vlSelfRef.u_div__DOT__dividend_q = __Vdly__u_div__DOT__dividend_q;
    vlSelfRef.u_div__DOT__quotient_q = __Vdly__u_div__DOT__quotient_q;
    vlSelfRef.u_lsu__DOT__mem_wr_q = __Vdly__u_lsu__DOT__mem_wr_q;
    vlSelfRef.u_lsu__DOT__mem_rd_q = __Vdly__u_lsu__DOT__mem_rd_q;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w 
        = (0x1fU & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.u_frontend__DOT__fetch_accept_w = (2U 
                                                 != (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q));
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__data_out_o 
        = vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
        [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q];
    vlSelfRef.u_lsu__DOT__resp_addr_w = (IData)((vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                 [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                 >> 4U));
    vlSelfRef.u_lsu__DOT__resp_byte_w = (1U & (IData)(
                                                      (vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                       [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                       >> 1U)));
    vlSelfRef.u_lsu__DOT__resp_half_w = (1U & (IData)(
                                                      (vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                       [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                       >> 2U)));
    vlSelfRef.u_lsu__DOT__resp_signed_w = (1U & (IData)(
                                                        (vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                         [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                         >> 3U)));
    vlSelfRef.u_lsu__DOT__resp_load_w = (1U & (IData)(
                                                      vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                      [vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_out_o 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
        [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q];
    vlSelfRef.fetch0_fault_fetch_w = (1U & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                      [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch0_fault_page_w = (1U & (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                           [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                           >> 1U));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_out_o 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
        [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q];
    vlSelfRef.fetch1_fault_fetch_w = (1U & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                      [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch1_fault_page_w = (1U & (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                           [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                           >> 1U));
    vlSelfRef.fetch1_valid_w = ((0U != (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q
                                [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch0_valid_w = ((0U != (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                & vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q
                                [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 
        = (vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q
           [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
           >> 3U);
    vlSelfRef.fetch0_instr_w = (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                       [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.fetch1_instr_w = (IData)((vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                        [vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                        >> 0x20U));
    vlSelfRef.u_div__DOT__writeback_value_o = vlSelfRef.u_div__DOT__wb_result_q;
    vlSelfRef.writeback_div_value_w = vlSelfRef.u_div__DOT__wb_result_q;
    __Vtemp_11[0U] = (IData)(vlSelfRef.u_mul__DOT__operand_a_e1_q);
    __Vtemp_11[1U] = (((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_a_e1_q 
                                                 >> 0x20U))))) 
                       << 1U) | (IData)((vlSelfRef.u_mul__DOT__operand_a_e1_q 
                                         >> 0x20U)));
    __Vtemp_11[2U] = ((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_a_e1_q 
                                                >> 0x20U))))) 
                      >> 0x1fU);
    __Vtemp_12[0U] = (IData)(vlSelfRef.u_mul__DOT__operand_b_e1_q);
    __Vtemp_12[1U] = (((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_b_e1_q 
                                                 >> 0x20U))))) 
                       << 1U) | (IData)((vlSelfRef.u_mul__DOT__operand_b_e1_q 
                                         >> 0x20U)));
    __Vtemp_12[2U] = ((- (IData)((1U & (IData)((vlSelfRef.u_mul__DOT__operand_b_e1_q 
                                                >> 0x20U))))) 
                      >> 0x1fU);
    VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
    vlSelfRef.u_mul__DOT__mult_result_w[0U] = __Vtemp_13[0U];
    vlSelfRef.u_mul__DOT__mult_result_w[1U] = __Vtemp_13[1U];
    vlSelfRef.u_mul__DOT__mult_result_w[2U] = (1U & 
                                               __Vtemp_13[2U]);
    vlSelfRef.u_exec0__DOT__branch_is_jmp_o = vlSelfRef.u_exec0__DOT__branch_jmp_q;
    vlSelfRef.branch_exec0_is_jmp_w = vlSelfRef.u_exec0__DOT__branch_jmp_q;
    vlSelfRef.u_exec1__DOT__branch_is_jmp_o = vlSelfRef.u_exec1__DOT__branch_jmp_q;
    vlSelfRef.branch_exec1_is_jmp_w = vlSelfRef.u_exec1__DOT__branch_jmp_q;
    vlSelfRef.u_exec0__DOT__branch_is_taken_o = vlSelfRef.u_exec0__DOT__branch_taken_q;
    vlSelfRef.branch_exec0_is_taken_w = vlSelfRef.u_exec0__DOT__branch_taken_q;
    vlSelfRef.u_exec0__DOT__branch_is_not_taken_o = vlSelfRef.u_exec0__DOT__branch_ntaken_q;
    vlSelfRef.branch_exec0_request_w = ((IData)(vlSelfRef.u_exec0__DOT__branch_ntaken_q) 
                                        | (IData)(vlSelfRef.u_exec0__DOT__branch_taken_q));
    vlSelfRef.branch_exec0_is_not_taken_w = vlSelfRef.u_exec0__DOT__branch_ntaken_q;
    vlSelfRef.u_exec1__DOT__branch_source_o = vlSelfRef.u_exec1__DOT__pc_m_q;
    vlSelfRef.branch_exec1_source_w = vlSelfRef.u_exec1__DOT__pc_m_q;
    vlSelfRef.u_exec0__DOT__branch_source_o = vlSelfRef.u_exec0__DOT__pc_m_q;
    vlSelfRef.branch_exec0_source_w = vlSelfRef.u_exec0__DOT__pc_m_q;
    vlSelfRef.u_exec0__DOT__branch_is_call_o = vlSelfRef.u_exec0__DOT__branch_call_q;
    vlSelfRef.branch_exec0_is_call_w = vlSelfRef.u_exec0__DOT__branch_call_q;
    vlSelfRef.u_exec0__DOT__branch_is_ret_o = vlSelfRef.u_exec0__DOT__branch_ret_q;
    vlSelfRef.branch_exec0_is_ret_w = vlSelfRef.u_exec0__DOT__branch_ret_q;
    vlSelfRef.u_exec1__DOT__branch_is_call_o = vlSelfRef.u_exec1__DOT__branch_call_q;
    vlSelfRef.branch_exec1_is_call_w = vlSelfRef.u_exec1__DOT__branch_call_q;
    vlSelfRef.u_exec1__DOT__branch_is_ret_o = vlSelfRef.u_exec1__DOT__branch_ret_q;
    vlSelfRef.branch_exec1_is_ret_w = vlSelfRef.u_exec1__DOT__branch_ret_q;
    if (vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_valid_q) {
        vlSelfRef.u_frontend__DOT__fetch_pred_branch_w 
            = (3U & vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U]);
        vlSelfRef.u_frontend__DOT__fetch_pc_w = vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U];
        vlSelfRef.u_frontend__DOT__fetch_instr_w = 
            (((QData)((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U])));
        vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w 
            = (1U & (vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__fetch_fault_page_w 
            = (1U & (vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 3U));
    } else {
        vlSelfRef.u_frontend__DOT__fetch_pred_branch_w 
            = (3U & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__pred_d_q));
        vlSelfRef.u_frontend__DOT__fetch_pc_w = (0xfffffff8U 
                                                 & vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_d_q);
        vlSelfRef.u_frontend__DOT__fetch_instr_w = vlSelfRef.mem_i_inst_i;
        vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w 
            = (1U & (IData)(vlSelfRef.mem_i_error_i));
        vlSelfRef.u_frontend__DOT__fetch_fault_page_w 
            = (1U & (IData)(vlSelfRef.u_mmu__DOT__fetch_in_fault_o));
    }
    vlSelfRef.u_exec1__DOT__branch_is_taken_o = vlSelfRef.u_exec1__DOT__branch_taken_q;
    vlSelfRef.branch_exec1_is_taken_w = vlSelfRef.u_exec1__DOT__branch_taken_q;
    vlSelfRef.u_exec1__DOT__branch_is_not_taken_o = vlSelfRef.u_exec1__DOT__branch_ntaken_q;
    vlSelfRef.branch_exec1_is_not_taken_w = vlSelfRef.u_exec1__DOT__branch_ntaken_q;
    vlSelfRef.branch_exec1_request_w = ((IData)(vlSelfRef.u_exec1__DOT__branch_ntaken_q) 
                                        | (IData)(vlSelfRef.u_exec1__DOT__branch_taken_q));
    vlSelfRef.u_exec1__DOT__branch_pc_o = vlSelfRef.u_exec1__DOT__pc_x_q;
    vlSelfRef.branch_exec1_pc_w = vlSelfRef.u_exec1__DOT__pc_x_q;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_pc_pred_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
        [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q];
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_0 
        = (1U & (~ vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                 [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]));
    vlSelfRef.u_exec0__DOT__branch_pc_o = vlSelfRef.u_exec0__DOT__pc_x_q;
    vlSelfRef.branch_exec0_pc_w = vlSelfRef.u_exec0__DOT__pc_x_q;
    vlSelfRef.u_div__DOT__div_complete_w = ((~ (IData)(
                                                       (0U 
                                                        != vlSelfRef.u_div__DOT__q_mask_q))) 
                                            & (IData)(vlSelfRef.u_div__DOT__div_busy_q));
    vlSelfRef.u_div__DOT__div_result_r = 0U;
    vlSelfRef.u_div__DOT__div_result_r = ((IData)(vlSelfRef.u_div__DOT__div_inst_q)
                                           ? ((IData)(vlSelfRef.u_div__DOT__invert_res_q)
                                               ? (- vlSelfRef.u_div__DOT__quotient_q)
                                               : vlSelfRef.u_div__DOT__quotient_q)
                                           : ((IData)(vlSelfRef.u_div__DOT__invert_res_q)
                                               ? (- vlSelfRef.u_div__DOT__dividend_q)
                                               : vlSelfRef.u_div__DOT__dividend_q));
    vlSelfRef.u_exec0__DOT__writeback_value_o = vlSelfRef.u_exec0__DOT__result_q;
    vlSelfRef.writeback_exec0_value_w = vlSelfRef.u_exec0__DOT__result_q;
    vlSelfRef.u_exec1__DOT__writeback_value_o = vlSelfRef.u_exec1__DOT__result_q;
    vlSelfRef.writeback_exec1_value_w = vlSelfRef.u_exec1__DOT__result_q;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_q 
        = ((~ (IData)(vlSelfRef.rst_i)) & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w));
    vlSelfRef.u_div__DOT__writeback_valid_o = vlSelfRef.u_div__DOT__valid_q;
    vlSelfRef.writeback_div_valid_w = vlSelfRef.u_div__DOT__valid_q;
    vlSelfRef.mem_d_cacheable_o = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.u_mmu__DOT__lsu_out_cacheable_o = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.u_lsu__DOT__mem_cacheable_o = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.mmu_lsu_cacheable_w = vlSelfRef.u_lsu__DOT__mem_cacheable_q;
    vlSelfRef.u_mmu__DOT__lsu_out_data_wr_o = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.u_lsu__DOT__mem_data_wr_o = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.mmu_lsu_data_wr_w = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.mem_d_data_wr_o = vlSelfRef.u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__data_in_i 
        = (((QData)((IData)(vlSelfRef.u_lsu__DOT__mem_addr_q)) 
            << 4U) | (QData)((IData)(((((IData)(vlSelfRef.u_lsu__DOT__mem_ls_q) 
                                        << 3U) | ((IData)(vlSelfRef.u_lsu__DOT__mem_xh_q) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.u_lsu__DOT__mem_xb_q) 
                                          << 1U) | (IData)(vlSelfRef.u_lsu__DOT__mem_load_q))))));
    vlSelfRef.mmu_lsu_addr_w = (0xfffffffcU & vlSelfRef.u_lsu__DOT__mem_addr_q);
    vlSelfRef.mem_d_invalidate_o = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.u_mmu__DOT__lsu_out_invalidate_o = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.u_lsu__DOT__mem_invalidate_o = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.mmu_lsu_invalidate_w = vlSelfRef.u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.mem_d_writeback_o = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.u_mmu__DOT__lsu_out_writeback_o = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.u_lsu__DOT__mem_writeback_o = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.mmu_lsu_writeback_w = vlSelfRef.u_lsu__DOT__mem_writeback_q;
    vlSelfRef.mem_d_flush_o = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.u_mmu__DOT__lsu_out_flush_o = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.u_lsu__DOT__mem_flush_o = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.mmu_lsu_flush_w = vlSelfRef.u_lsu__DOT__mem_flush_q;
    vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q = ((~ (IData)(vlSelfRef.rst_i)) 
                                                & ((IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e1_q) 
                                                   & (~ (IData)(vlSelfRef.u_lsu__DOT__delay_lsu_e2_w))));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__alloc_entry_o 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_alloc_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_accept_o 
        = vlSelfRef.u_frontend__DOT__fetch_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__accept_o 
        = vlSelfRef.u_frontend__DOT__fetch_accept_w;
    vlSelfRef.u_lsu__DOT__fault_load_bus_w = ((IData)(vlSelfRef.mem_d_error_i) 
                                              & (IData)(vlSelfRef.u_lsu__DOT__resp_load_w));
    vlSelfRef.u_lsu__DOT__fault_store_bus_w = ((~ (IData)(vlSelfRef.u_lsu__DOT__resp_load_w)) 
                                               & (IData)(vlSelfRef.mem_d_error_i));
    vlSelfRef.u_frontend__DOT__fetch0_fault_fetch_o 
        = vlSelfRef.fetch0_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_fault_fetch_o 
        = vlSelfRef.fetch0_fault_fetch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_fault_fetch_i 
        = vlSelfRef.fetch0_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__fetch0_fault_page_o 
        = vlSelfRef.fetch0_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_fault_page_o 
        = vlSelfRef.fetch0_fault_page_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_fault_page_i 
        = vlSelfRef.fetch0_fault_page_w;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i 
        = ((IData)(vlSelfRef.fetch0_fault_fetch_w) 
           | (IData)(vlSelfRef.fetch0_fault_page_w));
    vlSelfRef.u_frontend__DOT__fetch1_fault_fetch_o 
        = vlSelfRef.fetch1_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_fault_fetch_o 
        = vlSelfRef.fetch1_fault_fetch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_fault_fetch_i 
        = vlSelfRef.fetch1_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__fetch1_fault_page_o 
        = vlSelfRef.fetch1_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_fault_page_o 
        = vlSelfRef.fetch1_fault_page_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_fault_page_i 
        = vlSelfRef.fetch1_fault_page_w;
    u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i 
        = ((IData)(vlSelfRef.fetch1_fault_fetch_w) 
           | (IData)(vlSelfRef.fetch1_fault_page_w));
    vlSelfRef.u_frontend__DOT__fetch1_valid_o = vlSelfRef.fetch1_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_o 
        = vlSelfRef.fetch1_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_valid_o 
        = vlSelfRef.fetch1_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_valid_i 
        = vlSelfRef.fetch1_valid_w;
    vlSelfRef.u_frontend__DOT__fetch0_valid_o = vlSelfRef.fetch0_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_o 
        = vlSelfRef.fetch0_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_valid_o 
        = vlSelfRef.fetch0_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_valid_i 
        = vlSelfRef.fetch0_valid_w;
    vlSelfRef.fetch1_pc_w = (4U | (u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 
                                   << 3U));
    vlSelfRef.fetch0_pc_w = (u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h1553955f_0_1 
                             << 3U);
    vlSelfRef.u_frontend__DOT__fetch0_instr_o = vlSelfRef.fetch0_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__data0_out_o 
        = vlSelfRef.fetch0_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_o 
        = vlSelfRef.fetch0_instr_w;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57 
        = ((0x6fU == (0x7fU & vlSelfRef.fetch0_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64 
        = ((0x63U == (0x707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63 
        = ((0x6063U == (0x707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    vlSelfRef.fetch0_instr_lsu_w = ((3U == (0x707fU 
                                            & vlSelfRef.fetch0_instr_w)) 
                                    | ((0x1003U == 
                                        (0x707fU & vlSelfRef.fetch0_instr_w)) 
                                       | ((0x2003U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch0_instr_w)) 
                                          | ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                             | ((0x5003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                                | ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch0_instr_w)) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch0_instr_w)) 
                                                      | ((0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch0_instr_w)) 
                                                         | (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch0_instr_w))))))))));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65 
        = ((0x6073U == (0x707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60 
        = ((0x100073U == vlSelfRef.fetch0_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.fetch0_instr_w)));
    vlSelfRef.fetch0_instr_exec_w = ((0x7013U == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                     | ((0x13U == (0x707fU 
                                                   & vlSelfRef.fetch0_instr_w)) 
                                        | ((0x2013U 
                                            == (0x707fU 
                                                & vlSelfRef.fetch0_instr_w)) 
                                           | ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelfRef.fetch0_instr_w)) 
                                              | ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.fetch0_instr_w)) 
                                                 | ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.fetch0_instr_w)) 
                                                    | ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelfRef.fetch0_instr_w)) 
                                                       | ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelfRef.fetch0_instr_w)) 
                                                          | ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelfRef.fetch0_instr_w)) 
                                                             | ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.fetch0_instr_w)) 
                                                                | ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.fetch0_instr_w)) 
                                                                   | ((0x33U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelfRef.fetch0_instr_w)) 
                                                                      | ((0x40000033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.fetch0_instr_w)) 
                                                                         | ((0x2033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelfRef.fetch0_instr_w)) 
                                                                            | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                               | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w))))))))))))))))))))));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_i 
        = vlSelfRef.fetch0_instr_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_o = vlSelfRef.fetch1_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__data1_out_o 
        = vlSelfRef.fetch1_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_o 
        = vlSelfRef.fetch1_instr_w;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60 
        = ((0x100073U == vlSelfRef.fetch1_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65 
        = ((0x6073U == (0x707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57 
        = ((0x6fU == (0x7fU & vlSelfRef.fetch1_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64 
        = ((0x63U == (0x707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63 
        = ((0x6063U == (0x707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.fetch1_instr_w)));
    vlSelfRef.fetch1_instr_lsu_w = ((3U == (0x707fU 
                                            & vlSelfRef.fetch1_instr_w)) 
                                    | ((0x1003U == 
                                        (0x707fU & vlSelfRef.fetch1_instr_w)) 
                                       | ((0x2003U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch1_instr_w)) 
                                          | ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                             | ((0x5003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                                | ((0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch1_instr_w)) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch1_instr_w)) 
                                                      | ((0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch1_instr_w)) 
                                                         | (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch1_instr_w))))))))));
    vlSelfRef.fetch1_instr_exec_w = ((0x7013U == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                     | ((0x13U == (0x707fU 
                                                   & vlSelfRef.fetch1_instr_w)) 
                                        | ((0x2013U 
                                            == (0x707fU 
                                                & vlSelfRef.fetch1_instr_w)) 
                                           | ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelfRef.fetch1_instr_w)) 
                                              | ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.fetch1_instr_w)) 
                                                 | ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.fetch1_instr_w)) 
                                                    | ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelfRef.fetch1_instr_w)) 
                                                       | ((0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelfRef.fetch1_instr_w)) 
                                                          | ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelfRef.fetch1_instr_w)) 
                                                             | ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.fetch1_instr_w)) 
                                                                | ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.fetch1_instr_w)) 
                                                                   | ((0x33U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelfRef.fetch1_instr_w)) 
                                                                      | ((0x40000033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelfRef.fetch1_instr_w)) 
                                                                         | ((0x2033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelfRef.fetch1_instr_w)) 
                                                                            | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                               | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w))))))))))))))))))))));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.fetch1_instr_w)));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_i 
        = vlSelfRef.fetch1_instr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_jmp_i 
        = vlSelfRef.branch_exec0_is_jmp_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_jmp_i 
        = vlSelfRef.branch_exec1_is_jmp_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_taken_i 
        = vlSelfRef.branch_exec0_is_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_request_i 
        = vlSelfRef.branch_exec0_request_w;
    vlSelfRef.u_exec0__DOT__branch_request_o = vlSelfRef.branch_exec0_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_not_taken_i 
        = vlSelfRef.branch_exec0_is_not_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_source_i 
        = vlSelfRef.branch_exec1_source_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_source_i 
        = vlSelfRef.branch_exec0_source_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_call_i 
        = vlSelfRef.branch_exec0_is_call_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_is_ret_i 
        = vlSelfRef.branch_exec0_is_ret_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_call_i 
        = vlSelfRef.branch_exec1_is_call_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_ret_i 
        = vlSelfRef.branch_exec1_is_ret_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_pred_branch_o 
        = vlSelfRef.u_frontend__DOT__fetch_pred_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pred_branch_i 
        = vlSelfRef.u_frontend__DOT__fetch_pred_branch_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_pc_o 
        = vlSelfRef.u_frontend__DOT__fetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pc_i 
        = vlSelfRef.u_frontend__DOT__fetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_instr_i 
        = vlSelfRef.u_frontend__DOT__fetch_instr_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_instr_o 
        = vlSelfRef.u_frontend__DOT__fetch_instr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_fault_fetch_i 
        = vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_fault_fetch_o 
        = vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_fault_page_i 
        = vlSelfRef.u_frontend__DOT__fetch_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_fault_page_o 
        = vlSelfRef.u_frontend__DOT__fetch_fault_page_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__data_in_i 
        = (((IData)(vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w) 
            | (IData)(vlSelfRef.u_frontend__DOT__fetch_fault_page_w))
            ? 0ULL : vlSelfRef.u_frontend__DOT__fetch_instr_w);
    vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i 
        = (((IData)(vlSelfRef.u_frontend__DOT__fetch_fault_page_w) 
            << 1U) | (IData)(vlSelfRef.u_frontend__DOT__fetch_fault_fetch_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_taken_i 
        = vlSelfRef.branch_exec1_is_taken_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_is_not_taken_i 
        = vlSelfRef.branch_exec1_is_not_taken_w;
    vlSelfRef.u_exec1__DOT__branch_request_o = vlSelfRef.branch_exec1_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_request_i 
        = vlSelfRef.branch_exec1_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec1_pc_i 
        = vlSelfRef.branch_exec1_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_exec0_pc_i 
        = vlSelfRef.branch_exec0_pc_w;
    vlSelfRef.u_mul__DOT__result_r = ((IData)(vlSelfRef.u_mul__DOT__mulhi_sel_e1_q)
                                       ? vlSelfRef.u_mul__DOT__mult_result_w[1U]
                                       : vlSelfRef.u_mul__DOT__mult_result_w[0U]);
    vlSelfRef.u_mmu__DOT__lsu_in_cacheable_i = vlSelfRef.mmu_lsu_cacheable_w;
    vlSelfRef.u_mmu__DOT__lsu_in_data_wr_i = vlSelfRef.mmu_lsu_data_wr_w;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__data_in_i 
        = vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__data_in_i;
    vlSelfRef.u_mmu__DOT__lsu_in_addr_i = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.u_mmu__DOT__lsu_out_addr_o = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.u_lsu__DOT__mem_addr_o = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.mem_d_addr_o = vlSelfRef.mmu_lsu_addr_w;
    vlSelfRef.u_mmu__DOT__lsu_in_invalidate_i = vlSelfRef.mmu_lsu_invalidate_w;
    vlSelfRef.u_mmu__DOT__lsu_in_writeback_i = vlSelfRef.mmu_lsu_writeback_w;
    vlSelfRef.u_mmu__DOT__lsu_in_flush_i = vlSelfRef.mmu_lsu_flush_w;
    vlSelfRef.u_lsu__DOT__mem_unaligned_e1_q = __Vdly__u_lsu__DOT__mem_unaligned_e1_q;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__fetch_fault_i 
        = u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__fetch_fault_i 
        = u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__valid_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_valid_o;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__valid_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_valid_o;
    vlSelfRef.u_frontend__DOT__fetch1_pc_o = vlSelfRef.fetch1_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_pc_o 
        = vlSelfRef.fetch1_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc1_out_o 
        = vlSelfRef.fetch1_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_pc_i 
        = vlSelfRef.fetch1_pc_w;
    vlSelfRef.u_frontend__DOT__fetch0_pc_o = vlSelfRef.fetch0_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_pc_o 
        = vlSelfRef.fetch0_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc0_out_o 
        = vlSelfRef.fetch0_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_pc_i 
        = vlSelfRef.fetch0_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__opcode_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_o;
    vlSelfRef.fetch0_instr_branch_w = ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                       | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                          | ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                             | ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63)))));
    vlSelfRef.fetch0_instr_div_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61)));
    vlSelfRef.u_frontend__DOT__fetch0_instr_lsu_o = vlSelfRef.fetch0_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_lsu_o 
        = vlSelfRef.fetch0_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__lsu_o 
        = vlSelfRef.fetch0_instr_lsu_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_lsu_i 
        = vlSelfRef.fetch0_instr_lsu_w;
    vlSelfRef.fetch0_instr_rd_valid_w = ((0x67U == 
                                          (0x707fU 
                                           & vlSelfRef.fetch0_instr_w)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.fetch0_instr_w)) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.fetch0_instr_w)) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.fetch0_instr_w)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch0_instr_w)) 
                                                     | ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelfRef.fetch0_instr_w)) 
                                                        | ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch0_instr_w)) 
                                                           | ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch0_instr_w)) 
                                                              | ((0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch0_instr_w)) 
                                                                 | ((0x5013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelfRef.fetch0_instr_w)) 
                                                                    | ((0x40005013U 
                                                                        == 
                                                                        (0xfc00707fU 
                                                                         & vlSelfRef.fetch0_instr_w)) 
                                                                       | ((0x6013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch0_instr_w)) 
                                                                          | ((0x7013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch0_instr_w)) 
                                                                             | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_61) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65))))))))))))))))))))))))))))))))))))));
    vlSelfRef.fetch0_instr_mul_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_62)));
    vlSelfRef.u_frontend__DOT__fetch0_instr_exec_o 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_exec_o 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__exec_o 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.fetch0_instr_invalid_w = ((~ ((IData)(vlSelfRef.fetch0_instr_exec_w) 
                                            | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                               | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                                  | ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch0_instr_w)) 
                                                     | ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.fetch0_instr_w)) 
                                                        | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_63) 
                                                           | ((3U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch0_instr_w)) 
                                                              | ((0x1003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch0_instr_w)) 
                                                                 | ((0x2003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.fetch0_instr_w)) 
                                                                    | ((0x4003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.fetch0_instr_w)) 
                                                                       | ((0x5003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch0_instr_w)) 
                                                                          | ((0x6003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch0_instr_w)) 
                                                                             | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.fetch0_instr_w) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_65) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                                                                & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w)) 
                                                                                | (0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch0_instr_w))))))))))))))))))))))))))))))))))))) 
                                        & (IData)(vlSelfRef.fetch0_valid_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_exec_i 
        = vlSelfRef.fetch0_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__opcode_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_o;
    vlSelfRef.fetch1_instr_div_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61)));
    vlSelfRef.fetch1_instr_branch_w = ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                       | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                          | ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                             | ((0x5063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63)))));
    vlSelfRef.u_frontend__DOT__fetch1_instr_lsu_o = vlSelfRef.fetch1_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_lsu_o 
        = vlSelfRef.fetch1_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__lsu_o 
        = vlSelfRef.fetch1_instr_lsu_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_lsu_i 
        = vlSelfRef.fetch1_instr_lsu_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_exec_o 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_exec_o 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__exec_o 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.fetch1_instr_invalid_w = ((~ ((IData)(vlSelfRef.fetch1_instr_exec_w) 
                                            | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_57) 
                                               | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_64) 
                                                  | ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch1_instr_w)) 
                                                     | ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.fetch1_instr_w)) 
                                                        | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_63) 
                                                           | ((3U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch1_instr_w)) 
                                                              | ((0x1003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch1_instr_w)) 
                                                                 | ((0x2003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.fetch1_instr_w)) 
                                                                    | ((0x4003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.fetch1_instr_w)) 
                                                                       | ((0x5003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch1_instr_w)) 
                                                                          | ((0x6003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch1_instr_w)) 
                                                                             | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.fetch1_instr_w) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                                                                & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | (0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w))))))))))))))))))))))))))))))))))))) 
                                        & (IData)(vlSelfRef.fetch1_valid_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_exec_i 
        = vlSelfRef.fetch1_instr_exec_w;
    vlSelfRef.fetch1_instr_rd_valid_w = ((0x67U == 
                                          (0x707fU 
                                           & vlSelfRef.fetch1_instr_w)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.fetch1_instr_w)) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.fetch1_instr_w)) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.fetch1_instr_w)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.fetch1_instr_w)) 
                                                     | ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelfRef.fetch1_instr_w)) 
                                                        | ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.fetch1_instr_w)) 
                                                           | ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.fetch1_instr_w)) 
                                                              | ((0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.fetch1_instr_w)) 
                                                                 | ((0x5013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelfRef.fetch1_instr_w)) 
                                                                    | ((0x40005013U 
                                                                        == 
                                                                        (0xfc00707fU 
                                                                         & vlSelfRef.fetch1_instr_w)) 
                                                                       | ((0x6013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.fetch1_instr_w)) 
                                                                          | ((0x7013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.fetch1_instr_w)) 
                                                                             | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_59) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_61) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.fetch1_instr_w)) 
                                                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_65))))))))))))))))))))))))))))))))))))));
    vlSelfRef.fetch1_instr_mul_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__enable_muldiv_w) 
                                    & ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_58) 
                                       | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_62)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pred_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pred_branch_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_pc_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__data_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__data_in_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_in_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
    vlSelfRef.u_mul__DOT__writeback_value_o = vlSelfRef.u_mul__DOT__result_e2_q;
    vlSelfRef.writeback_mul_value_w = vlSelfRef.u_mul__DOT__result_e2_q;
    vlSelfRef.u_lsu__DOT__fault_load_align_w = ((IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q) 
                                                & (IData)(vlSelfRef.u_lsu__DOT__resp_load_w));
    vlSelfRef.u_lsu__DOT__fault_store_align_w = ((~ (IData)(vlSelfRef.u_lsu__DOT__resp_load_w)) 
                                                 & (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.u_frontend__DOT__fetch0_instr_branch_o 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_branch_o 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__branch_o 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_branch_i 
        = vlSelfRef.fetch0_instr_branch_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_div_o = vlSelfRef.fetch0_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_div_o 
        = vlSelfRef.fetch0_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__div_o 
        = vlSelfRef.fetch0_instr_div_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_div_i 
        = vlSelfRef.fetch0_instr_div_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_rd_valid_o 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_rd_valid_o 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__rd_valid_o 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_rd_valid_i 
        = vlSelfRef.fetch0_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_mul_o = vlSelfRef.fetch0_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_mul_o 
        = vlSelfRef.fetch0_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__mul_o 
        = vlSelfRef.fetch0_instr_mul_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_mul_i 
        = vlSelfRef.fetch0_instr_mul_w;
    vlSelfRef.u_frontend__DOT__fetch0_instr_invalid_o 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_invalid_o 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__invalid_o 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__invalid_w 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_invalid_i 
        = vlSelfRef.fetch0_instr_invalid_w;
    vlSelfRef.fetch0_instr_csr_w = ((0x73U == vlSelfRef.fetch0_instr_w) 
                                    | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                       | ((0x1073U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch0_instr_w)) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                             | ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch0_instr_w)) 
                                                | ((0x5073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch0_instr_w)) 
                                                   | ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch0_instr_w)) 
                                                      | ((0x7073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch0_instr_w)) 
                                                         | ((0x10500073U 
                                                             == 
                                                             (0xffff8fffU 
                                                              & vlSelfRef.fetch0_instr_w)) 
                                                            | ((0xfU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.fetch0_instr_w)) 
                                                               | ((0x100fU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.fetch0_instr_w)) 
                                                                  | ((0x12000073U 
                                                                      == 
                                                                      (0xfe007fffU 
                                                                       & vlSelfRef.fetch0_instr_w)) 
                                                                     | ((IData)(vlSelfRef.fetch0_instr_invalid_w) 
                                                                        | (IData)(u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec0__fetch_fault_i))))))))))))));
    vlSelfRef.u_frontend__DOT__fetch1_instr_div_o = vlSelfRef.fetch1_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_div_o 
        = vlSelfRef.fetch1_instr_div_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__div_o 
        = vlSelfRef.fetch1_instr_div_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_div_i 
        = vlSelfRef.fetch1_instr_div_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_branch_o 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_branch_o 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__branch_o 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_branch_i 
        = vlSelfRef.fetch1_instr_branch_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_invalid_o 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_invalid_o 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__invalid_o 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__invalid_w 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_invalid_i 
        = vlSelfRef.fetch1_instr_invalid_w;
    vlSelfRef.fetch1_instr_csr_w = ((0x73U == vlSelfRef.fetch1_instr_w) 
                                    | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h5f0d51ec_0_60) 
                                       | ((0x1073U 
                                           == (0x707fU 
                                               & vlSelfRef.fetch1_instr_w)) 
                                          | ((0x2073U 
                                              == (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                             | ((0x3073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.fetch1_instr_w)) 
                                                | ((0x5073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.fetch1_instr_w)) 
                                                   | ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.fetch1_instr_w)) 
                                                      | ((0x7073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.fetch1_instr_w)) 
                                                         | ((0x10500073U 
                                                             == 
                                                             (0xffff8fffU 
                                                              & vlSelfRef.fetch1_instr_w)) 
                                                            | ((0xfU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.fetch1_instr_w)) 
                                                               | ((0x100fU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.fetch1_instr_w)) 
                                                                  | ((0x12000073U 
                                                                      == 
                                                                      (0xfe007fffU 
                                                                       & vlSelfRef.fetch1_instr_w)) 
                                                                     | ((IData)(vlSelfRef.fetch1_instr_invalid_w) 
                                                                        | (IData)(u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_dec1__fetch_fault_i))))))))))))));
    vlSelfRef.u_frontend__DOT__fetch1_instr_rd_valid_o 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_rd_valid_o 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__rd_valid_o 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_rd_valid_i 
        = vlSelfRef.fetch1_instr_rd_valid_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_mul_o = vlSelfRef.fetch1_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_mul_o 
        = vlSelfRef.fetch1_instr_mul_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__mul_o 
        = vlSelfRef.fetch1_instr_mul_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_mul_i 
        = vlSelfRef.fetch1_instr_mul_w;
    vlSelfRef.writeback_mem_exception_w = ((IData)(vlSelfRef.u_lsu__DOT__fault_load_align_w)
                                            ? 0x14U
                                            : ((IData)(vlSelfRef.u_lsu__DOT__fault_store_align_w)
                                                ? 0x16U
                                                : ((IData)(vlSelfRef.u_lsu__DOT__fault_load_page_w)
                                                    ? 0x1dU
                                                    : 
                                                   ((IData)(vlSelfRef.u_lsu__DOT__fault_store_page_w)
                                                     ? 0x1fU
                                                     : 
                                                    ((IData)(vlSelfRef.u_lsu__DOT__fault_load_bus_w)
                                                      ? 0x15U
                                                      : 
                                                     ((IData)(vlSelfRef.u_lsu__DOT__fault_store_bus_w)
                                                       ? 0x17U
                                                       : 0U))))));
    vlSelfRef.u_frontend__DOT__fetch0_instr_csr_o = vlSelfRef.fetch0_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_instr_csr_o 
        = vlSelfRef.fetch0_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT__csr_o 
        = vlSelfRef.fetch0_instr_csr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_instr_csr_i 
        = vlSelfRef.fetch0_instr_csr_w;
    vlSelfRef.u_frontend__DOT__fetch1_instr_csr_o = vlSelfRef.fetch1_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_instr_csr_o 
        = vlSelfRef.fetch1_instr_csr_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT__csr_o 
        = vlSelfRef.fetch1_instr_csr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_instr_csr_i 
        = vlSelfRef.fetch1_instr_csr_w;
    vlSelfRef.u_lsu__DOT__writeback_exception_o = vlSelfRef.writeback_mem_exception_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mem_exception_i 
        = vlSelfRef.writeback_mem_exception_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmu_satp_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_satp_o;
    vlSelfRef.mmu_sum_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_sum_o;
    vlSelfRef.mmu_mxr_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_mxr_o;
    vlSelfRef.u_mmu__DOT__satp_i = vlSelfRef.mmu_satp_w;
    vlSelfRef.u_mmu__DOT__sum_i = vlSelfRef.mmu_sum_w;
    vlSelfRef.u_mmu__DOT__mxr_i = vlSelfRef.mmu_mxr_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__2(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmu_flush_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_flush_o;
    vlSelfRef.ifence_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.ifence_o;
    vlSelfRef.csr_result_e1_write_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_write_o;
    vlSelfRef.csr_result_e1_wdata_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_wdata_o;
    vlSelfRef.csr_result_e1_value_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_value_o;
    vlSelfRef.csr_result_e1_exception_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_result_e1_exception_o;
    vlSelfRef.take_interrupt_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.take_interrupt_o;
    vlSelfRef.branch_csr_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.branch_csr_pc_o;
    vlSelfRef.branch_csr_request_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.branch_csr_request_o;
    vlSelfRef.u_mmu__DOT__flush_i = vlSelfRef.mmu_flush_w;
    vlSelfRef.u_frontend__DOT__fetch_invalidate_i = vlSelfRef.ifence_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_invalidate_i 
        = vlSelfRef.u_frontend__DOT__fetch_invalidate_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__3(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_writeback_wdata_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_wdata_o;
    vlSelfRef.csr_writeback_write_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_write_o;
    vlSelfRef.csr_writeback_exception_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_exception_o;
    vlSelfRef.csr_writeback_waddr_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_waddr_o;
    vlSelfRef.csr_writeback_exception_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_exception_pc_o;
    vlSelfRef.csr_writeback_exception_addr_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_writeback_exception_addr_o;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_wdata_i 
        = vlSelfRef.csr_writeback_wdata_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_write_i 
        = vlSelfRef.csr_writeback_write_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_exception_i 
        = vlSelfRef.csr_writeback_exception_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_waddr_i 
        = vlSelfRef.csr_writeback_waddr_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_exception_pc_i 
        = vlSelfRef.csr_writeback_exception_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.csr_writeback_exception_addr_i 
        = vlSelfRef.csr_writeback_exception_addr_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__1(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_mmu__DOT__fetch_out_valid_i = vlSelfRef.mem_i_valid_i;
    vlSelfRef.u_mmu__DOT__fetch_in_valid_o = vlSelfRef.mem_i_valid_i;
    vlSelfRef.mmu_ifetch_valid_w = vlSelfRef.mem_i_valid_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w 
        = ((~ (IData)(vlSelfRef.mem_i_valid_i)) & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_fetch_q));
    vlSelfRef.u_mmu__DOT__lsu_out_ack_i = vlSelfRef.mem_d_ack_i;
    vlSelfRef.u_mmu__DOT__lsu_in_ack_o = vlSelfRef.mem_d_ack_i;
    vlSelfRef.u_lsu__DOT__complete_err_e2_w = ((IData)(vlSelfRef.mem_d_ack_i) 
                                               & (IData)(vlSelfRef.mem_d_error_i));
    vlSelfRef.u_lsu__DOT__complete_ok_e2_w = ((~ (IData)(vlSelfRef.mem_d_error_i)) 
                                              & (IData)(vlSelfRef.mem_d_ack_i));
    vlSelfRef.mmu_lsu_ack_w = vlSelfRef.mem_d_ack_i;
    vlSelfRef.writeback_mem_valid_w = ((IData)(vlSelfRef.mem_d_ack_i) 
                                       | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.u_frontend__DOT__icache_valid_i = vlSelfRef.mmu_ifetch_valid_w;
    vlSelfRef.mmu_ifetch_rd_w = ((IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__active_q) 
                                 & ((~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w)) 
                                    & (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w)));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w 
        = (1U & ((~ (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w)) 
                 | ((~ (IData)(vlSelfRef.mem_i_accept_i)) 
                    | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_busy_w))));
    vlSelfRef.u_lsu__DOT__mem_ack_i = vlSelfRef.mmu_lsu_ack_w;
    vlSelfRef.u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.u_lsu__DOT__addr_lsb_r = (3U & vlSelfRef.u_lsu__DOT__resp_addr_w);
    vlSelfRef.u_lsu__DOT__load_byte_r = vlSelfRef.u_lsu__DOT__resp_byte_w;
    vlSelfRef.u_lsu__DOT__load_half_r = vlSelfRef.u_lsu__DOT__resp_half_w;
    vlSelfRef.u_lsu__DOT__load_signed_r = vlSelfRef.u_lsu__DOT__resp_signed_w;
    if ((((IData)(vlSelfRef.mmu_lsu_ack_w) & (IData)(vlSelfRef.mmu_lsu_error_w)) 
         | (IData)(vlSelfRef.u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelfRef.u_lsu__DOT__wb_result_r = vlSelfRef.u_lsu__DOT__resp_addr_w;
    } else if (((IData)(vlSelfRef.mmu_lsu_ack_w) & (IData)(vlSelfRef.u_lsu__DOT__resp_load_w))) {
        if (vlSelfRef.u_lsu__DOT__load_byte_r) {
            vlSelfRef.u_lsu__DOT__wb_result_r = ((2U 
                                                  & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                   ? 
                                                  (vlSelfRef.mmu_lsu_data_rd_w 
                                                   >> 0x18U)
                                                   : 
                                                  (0xffU 
                                                   & (vlSelfRef.mmu_lsu_data_rd_w 
                                                      >> 0x10U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelfRef.mmu_lsu_data_rd_w 
                                                      >> 8U))
                                                   : 
                                                  (0xffU 
                                                   & vlSelfRef.mmu_lsu_data_rd_w)));
            if (((IData)(vlSelfRef.u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.u_lsu__DOT__wb_result_r = 
                    (0xffffff00U | (0xffU & vlSelfRef.u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.u_lsu__DOT__load_half_r) {
            vlSelfRef.u_lsu__DOT__wb_result_r = ((2U 
                                                  & (IData)(vlSelfRef.u_lsu__DOT__addr_lsb_r))
                                                  ? 
                                                 (vlSelfRef.mmu_lsu_data_rd_w 
                                                  >> 0x10U)
                                                  : 
                                                 (0xffffU 
                                                  & vlSelfRef.mmu_lsu_data_rd_w));
            if (((IData)(vlSelfRef.u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelfRef.u_lsu__DOT__wb_result_r = 
                    (0xffff0000U | (0xffffU & vlSelfRef.u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.u_lsu__DOT__wb_result_r = vlSelfRef.mmu_lsu_data_rd_w;
        }
    }
    vlSelfRef.u_lsu__DOT__writeback_valid_o = vlSelfRef.writeback_mem_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mem_valid_i 
        = vlSelfRef.writeback_mem_valid_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_valid_i 
        = vlSelfRef.u_frontend__DOT__icache_valid_i;
    vlSelfRef.u_mmu__DOT__fetch_in_rd_i = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.mem_i_rd_o = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_frontend__DOT__icache_rd_o = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_rd_o 
        = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_mmu__DOT__fetch_out_rd_o = vlSelfRef.mmu_ifetch_rd_w;
    vlSelfRef.u_frontend__DOT__fetch_pc_accept_w = 
        (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_w)));
    vlSelfRef.u_lsu__DOT__writeback_value_o = vlSelfRef.u_lsu__DOT__wb_result_r;
    vlSelfRef.writeback_mem_value_w = vlSelfRef.u_lsu__DOT__wb_result_r;
    vlSelfRef.u_lsu__DOT__u_lsu_request__DOT__pop_i 
        = vlSelfRef.u_lsu__DOT__writeback_valid_o;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__pc_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch_pc_accept_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_accept_o 
        = vlSelfRef.u_frontend__DOT__fetch_pc_accept_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mem_value_i 
        = vlSelfRef.writeback_mem_value_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__4(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmu_priv_d_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.mmu_priv_d_o;
    vlSelfRef.branch_csr_priv_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.branch_csr_priv_o;
    vlSelfRef.u_mmu__DOT__priv_d_i = vlSelfRef.mmu_priv_d_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_csr_priv_i 
        = vlSelfRef.branch_csr_priv_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__5(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_csr_pc_i 
        = vlSelfRef.branch_csr_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_csr_request_i 
        = vlSelfRef.branch_csr_request_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_exception_i 
        = vlSelfRef.csr_result_e1_exception_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_wdata_i 
        = vlSelfRef.csr_result_e1_wdata_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_write_i 
        = vlSelfRef.csr_result_e1_write_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_result_e1_value_i 
        = vlSelfRef.csr_result_e1_value_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.take_interrupt_i 
        = vlSelfRef.take_interrupt_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__6(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_sequent__TOP__biriscv_mem_top__u_core__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_div_valid_i 
        = vlSelfRef.writeback_div_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_mul_value_i 
        = vlSelfRef.writeback_mul_value_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_exec0_value_i 
        = vlSelfRef.writeback_exec0_value_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_div_value_i 
        = vlSelfRef.writeback_div_value_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.writeback_exec1_value_i 
        = vlSelfRef.writeback_exec1_value_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__3(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_info_is_taken_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_taken_o;
    vlSelfRef.branch_info_is_not_taken_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_not_taken_o;
    vlSelfRef.branch_info_is_jmp_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_jmp_o;
    vlSelfRef.branch_info_is_call_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_call_o;
    vlSelfRef.branch_info_is_ret_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_is_ret_o;
    vlSelfRef.branch_info_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_pc_o;
    vlSelfRef.branch_info_source_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_source_o;
    vlSelfRef.u_frontend__DOT__branch_info_is_taken_i 
        = vlSelfRef.branch_info_is_taken_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_not_taken_i 
        = vlSelfRef.branch_info_is_not_taken_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_jmp_i 
        = vlSelfRef.branch_info_is_jmp_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_call_i 
        = vlSelfRef.branch_info_is_call_w;
    vlSelfRef.u_frontend__DOT__branch_info_is_ret_i 
        = vlSelfRef.branch_info_is_ret_w;
    vlSelfRef.u_frontend__DOT__branch_info_pc_i = vlSelfRef.branch_info_pc_w;
    vlSelfRef.u_frontend__DOT__branch_info_source_i 
        = vlSelfRef.branch_info_source_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w 
        = (0x1ffU & (vlSelfRef.branch_info_source_w 
                     >> 2U));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_taken_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_taken_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_not_taken_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_not_taken_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_jmp_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_jmp_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_call_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_call_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_is_ret_i 
        = vlSelfRef.u_frontend__DOT__branch_info_is_ret_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_pc_i 
        = vlSelfRef.u_frontend__DOT__branch_info_pc_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_source_i 
        = vlSelfRef.u_frontend__DOT__branch_info_source_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__4(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.exec0_hold_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec0_hold_o;
    vlSelfRef.exec1_hold_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec1_hold_o;
    vlSelfRef.mul_hold_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_hold_o;
    vlSelfRef.u_exec0__DOT__hold_i = vlSelfRef.exec0_hold_w;
    vlSelfRef.u_exec1__DOT__hold_i = vlSelfRef.exec1_hold_w;
    vlSelfRef.u_mul__DOT__hold_i = vlSelfRef.mul_hold_w;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__5(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_pc_o;
    vlSelfRef.u_frontend__DOT__branch_pc_i = vlSelfRef.branch_pc_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_pc_i 
        = vlSelfRef.u_frontend__DOT__branch_pc_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_i 
        = vlSelfRef.u_frontend__DOT__branch_pc_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__6(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_priv_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_priv_o;
    vlSelfRef.u_frontend__DOT__branch_priv_i = vlSelfRef.branch_priv_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_priv_i 
        = vlSelfRef.u_frontend__DOT__branch_priv_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_priv_i 
        = vlSelfRef.u_frontend__DOT__branch_priv_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__7(Vbiriscv_mem_top_riscv_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vbiriscv_mem_top_riscv_core___nba_comb__TOP__biriscv_mem_top__u_core__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1;
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1 = 0;
    CData/*0:0*/ u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2;
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2 = 0;
    // Body
    vlSelfRef.branch_info_request_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_info_request_o;
    vlSelfRef.branch_request_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.branch_request_o;
    vlSelfRef.opcode1_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_pc_o;
    vlSelfRef.csr_opcode_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_pc_o;
    vlSelfRef.opcode0_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_pc_o;
    vlSelfRef.interrupt_inhibit_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.interrupt_inhibit_o;
    vlSelfRef.opcode1_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_opcode_o;
    vlSelfRef.csr_opcode_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_opcode_o;
    vlSelfRef.opcode0_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_opcode_o;
    vlSelfRef.opcode1_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_rd_idx_o;
    vlSelfRef.opcode1_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_rb_idx_o;
    vlSelfRef.opcode1_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode1_ra_idx_o;
    vlSelfRef.csr_opcode_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_rd_idx_o;
    vlSelfRef.opcode0_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_rd_idx_o;
    vlSelfRef.csr_opcode_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_rb_idx_o;
    vlSelfRef.opcode0_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_rb_idx_o;
    vlSelfRef.csr_opcode_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_ra_idx_o;
    vlSelfRef.opcode0_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.opcode0_ra_idx_o;
    vlSelfRef.fetch0_accept_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch0_accept_o;
    vlSelfRef.fetch1_accept_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.fetch1_accept_o;
    vlSelfRef.exec1_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec1_opcode_valid_o;
    vlSelfRef.mul_opcode_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_pc_o;
    vlSelfRef.mul_opcode_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_rd_idx_o;
    vlSelfRef.mul_opcode_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_ra_idx_o;
    vlSelfRef.mul_opcode_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_rb_idx_o;
    vlSelfRef.mul_opcode_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_opcode_o;
    vlSelfRef.lsu_opcode_pc_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_pc_o;
    vlSelfRef.lsu_opcode_rd_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_rd_idx_o;
    vlSelfRef.lsu_opcode_ra_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_ra_idx_o;
    vlSelfRef.lsu_opcode_rb_idx_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_rb_idx_o;
    vlSelfRef.lsu_opcode_opcode_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_opcode_o;
    vlSelfRef.csr_opcode_invalid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_invalid_o;
    vlSelfRef.mul_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.mul_opcode_valid_o;
    vlSelfRef.div_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.div_opcode_valid_o;
    vlSelfRef.exec0_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.exec0_opcode_valid_o;
    vlSelfRef.lsu_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.lsu_opcode_valid_o;
    vlSelfRef.csr_opcode_valid_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_issue.csr_opcode_valid_o;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
    vlSelfRef.u_frontend__DOT__branch_info_request_i 
        = vlSelfRef.branch_info_request_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__gshare_wr_entry_w 
        = (((IData)(vlSelfRef.branch_info_request_w)
             ? (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q)
             : (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q)) 
           ^ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_wr_entry_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r = 0U;
    if (vlSelfRef.branch_info_request_w) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 2U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 3U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 4U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 5U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 6U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 7U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 8U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 9U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xaU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xbU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xcU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xdU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xeU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0xfU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x10U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x11U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x12U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x13U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x14U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x15U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x16U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x17U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x18U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x19U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1aU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1bU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1cU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1dU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1eU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x1fU;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x20U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 2U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 3U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 4U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 5U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 6U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 7U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 8U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 9U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xaU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xbU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xcU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xdU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xeU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xfU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x10U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x11U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x12U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x13U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x14U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x15U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x16U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x17U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x18U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x19U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1aU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1bU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1cU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1dU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1eU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == vlSelfRef.branch_info_source_w)) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1fU;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r 
            = (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r)));
    }
    vlSelfRef.u_frontend__DOT__branch_request_i = vlSelfRef.branch_request_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_w 
        = (((~ (IData)(vlSelfRef.branch_request_w)) 
            & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q))
            ? vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_q
            : vlSelfRef.branch_pc_w);
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w 
        = ((IData)(vlSelfRef.branch_request_w) | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_q));
    vlSelfRef.u_exec1__DOT__opcode_pc_i = vlSelfRef.opcode1_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_pc_i 
        = vlSelfRef.csr_opcode_pc_w;
    vlSelfRef.u_div__DOT__opcode_pc_i = vlSelfRef.opcode0_pc_w;
    vlSelfRef.u_exec0__DOT__opcode_pc_i = vlSelfRef.opcode0_pc_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.interrupt_inhibit_i 
        = vlSelfRef.interrupt_inhibit_w;
    vlSelfRef.u_exec1__DOT__opcode_opcode_i = vlSelfRef.opcode1_opcode_w;
    vlSelfRef.u_exec1__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode1_opcode_w))) {
        vlSelfRef.u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSelfRef.opcode1_opcode_w))) {
        if ((0x17U == (0x7fU & vlSelfRef.opcode1_opcode_w))) {
            vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSelfRef.opcode1_opcode_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.opcode1_opcode_w)))) {
            vlSelfRef.u_exec1__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.u_exec1__DOT__shamt_r = (0x1fU & (vlSelfRef.opcode1_opcode_w 
                                                >> 0x14U));
    vlSelfRef.u_exec1__DOT__bimm_r = (((- (IData)((vlSelfRef.opcode1_opcode_w 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSelfRef.opcode1_opcode_w 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSelfRef.opcode1_opcode_w 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.opcode1_opcode_w 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.opcode1_opcode_w 
                                                            >> 7U)))));
    vlSelfRef.u_exec1__DOT__jimm20_r = (((- (IData)(
                                                    (vlSelfRef.opcode1_opcode_w 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | (((0xff000U 
                                             & vlSelfRef.opcode1_opcode_w) 
                                            | (0x800U 
                                               & (vlSelfRef.opcode1_opcode_w 
                                                  >> 9U))) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.opcode1_opcode_w 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.opcode1_opcode_w 
                                                    >> 0x14U)))));
    vlSelfRef.u_exec1__DOT__imm20_r = (0xfffff000U 
                                       & vlSelfRef.opcode1_opcode_w);
    vlSelfRef.u_exec1__DOT__imm12_r = (((- (IData)(
                                                   (vlSelfRef.opcode1_opcode_w 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.opcode1_opcode_w 
                                        >> 0x14U));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_opcode_i 
        = vlSelfRef.csr_opcode_opcode_w;
    vlSelfRef.u_div__DOT__opcode_opcode_i = vlSelfRef.opcode0_opcode_w;
    vlSelfRef.u_exec0__DOT__opcode_opcode_i = vlSelfRef.opcode0_opcode_w;
    vlSelfRef.u_div__DOT__inst_remu_w = (0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_div__DOT__inst_divu_w = (0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_div__DOT__inst_rem_w = (0x2006033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_div__DOT__inst_div_w = (0x2004033U 
                                        == (0xfe00707fU 
                                            & vlSelfRef.opcode0_opcode_w));
    vlSelfRef.u_exec0__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.opcode0_opcode_w))) {
        vlSelfRef.u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSelfRef.opcode0_opcode_w))) {
        if ((0x17U == (0x7fU & vlSelfRef.opcode0_opcode_w))) {
            vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSelfRef.opcode0_opcode_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.opcode0_opcode_w)))) {
            vlSelfRef.u_exec0__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.u_exec0__DOT__shamt_r = (0x1fU & (vlSelfRef.opcode0_opcode_w 
                                                >> 0x14U));
    vlSelfRef.u_exec0__DOT__bimm_r = (((- (IData)((vlSelfRef.opcode0_opcode_w 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSelfRef.opcode0_opcode_w 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSelfRef.opcode0_opcode_w 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.opcode0_opcode_w 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.opcode0_opcode_w 
                                                            >> 7U)))));
    vlSelfRef.u_exec0__DOT__jimm20_r = (((- (IData)(
                                                    (vlSelfRef.opcode0_opcode_w 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | (((0xff000U 
                                             & vlSelfRef.opcode0_opcode_w) 
                                            | (0x800U 
                                               & (vlSelfRef.opcode0_opcode_w 
                                                  >> 9U))) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.opcode0_opcode_w 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.opcode0_opcode_w 
                                                    >> 0x14U)))));
    vlSelfRef.u_exec0__DOT__imm20_r = (0xfffff000U 
                                       & vlSelfRef.opcode0_opcode_w);
    vlSelfRef.u_exec0__DOT__imm12_r = (((- (IData)(
                                                   (vlSelfRef.opcode0_opcode_w 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.opcode0_opcode_w 
                                        >> 0x14U));
    vlSelfRef.u_exec1__DOT__opcode_rd_idx_i = vlSelfRef.opcode1_rd_idx_w;
    vlSelfRef.u_exec1__DOT__opcode_rb_idx_i = vlSelfRef.opcode1_rb_idx_w;
    vlSelfRef.u_exec1__DOT__opcode_ra_idx_i = vlSelfRef.opcode1_ra_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_rd_idx_i 
        = vlSelfRef.csr_opcode_rd_idx_w;
    vlSelfRef.u_div__DOT__opcode_rd_idx_i = vlSelfRef.opcode0_rd_idx_w;
    vlSelfRef.u_exec0__DOT__opcode_rd_idx_i = vlSelfRef.opcode0_rd_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_rb_idx_i 
        = vlSelfRef.csr_opcode_rb_idx_w;
    vlSelfRef.u_div__DOT__opcode_rb_idx_i = vlSelfRef.opcode0_rb_idx_w;
    vlSelfRef.u_exec0__DOT__opcode_rb_idx_i = vlSelfRef.opcode0_rb_idx_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_ra_idx_i 
        = vlSelfRef.csr_opcode_ra_idx_w;
    vlSelfRef.u_div__DOT__opcode_ra_idx_i = vlSelfRef.opcode0_ra_idx_w;
    vlSelfRef.u_exec0__DOT__opcode_ra_idx_i = vlSelfRef.opcode0_ra_idx_w;
    vlSelfRef.u_frontend__DOT__fetch0_accept_i = vlSelfRef.fetch0_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w 
        = ((IData)(vlSelfRef.fetch0_accept_w) & (IData)(vlSelfRef.fetch0_valid_w));
    vlSelfRef.u_frontend__DOT__fetch1_accept_i = vlSelfRef.fetch1_accept_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w 
        = ((IData)(vlSelfRef.fetch1_accept_w) & (IData)(vlSelfRef.fetch1_valid_w));
    vlSelfRef.u_exec1__DOT__opcode_valid_i = vlSelfRef.exec1_opcode_valid_w;
    vlSelfRef.u_mul__DOT__opcode_pc_i = vlSelfRef.mul_opcode_pc_w;
    vlSelfRef.u_mul__DOT__opcode_rd_idx_i = vlSelfRef.mul_opcode_rd_idx_w;
    vlSelfRef.u_mul__DOT__opcode_ra_idx_i = vlSelfRef.mul_opcode_ra_idx_w;
    vlSelfRef.u_mul__DOT__opcode_rb_idx_i = vlSelfRef.mul_opcode_rb_idx_w;
    vlSelfRef.u_mul__DOT__opcode_opcode_i = vlSelfRef.mul_opcode_opcode_w;
    vlSelfRef.u_mul__DOT__mult_inst_w = ((0x2000033U 
                                          == (0xfe00707fU 
                                              & vlSelfRef.mul_opcode_opcode_w)) 
                                         | ((0x2001033U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.mul_opcode_opcode_w)) 
                                            | ((0x2002033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.mul_opcode_opcode_w)) 
                                               | (0x2003033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelfRef.mul_opcode_opcode_w)))));
    vlSelfRef.u_lsu__DOT__opcode_pc_i = vlSelfRef.lsu_opcode_pc_w;
    vlSelfRef.u_lsu__DOT__opcode_rd_idx_i = vlSelfRef.lsu_opcode_rd_idx_w;
    vlSelfRef.u_lsu__DOT__opcode_ra_idx_i = vlSelfRef.lsu_opcode_ra_idx_w;
    vlSelfRef.u_lsu__DOT__opcode_rb_idx_i = vlSelfRef.lsu_opcode_rb_idx_w;
    vlSelfRef.u_lsu__DOT__opcode_opcode_i = vlSelfRef.lsu_opcode_opcode_w;
    vlSelfRef.u_lsu__DOT__req_lb_w = ((3U == (0x707fU 
                                              & vlSelfRef.lsu_opcode_opcode_w)) 
                                      | (0x4003U == 
                                         (0x707fU & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__dcache_invalidate_w = (IData)(
                                                        (0x3a201073U 
                                                         == 
                                                         (0xfff0707fU 
                                                          & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__dcache_writeback_w = (IData)(
                                                       (0x3a101073U 
                                                        == 
                                                        (0xfff0707fU 
                                                         & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__dcache_flush_w = (IData)(
                                                   (0x3a001073U 
                                                    == 
                                                    (0xfff0707fU 
                                                     & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__req_sb_w = (0x23U == (0x707fU 
                                                & vlSelfRef.lsu_opcode_opcode_w));
    vlSelfRef.u_lsu__DOT__req_lh_w = ((0x1003U == (0x707fU 
                                                   & vlSelfRef.lsu_opcode_opcode_w)) 
                                      | (0x5003U == 
                                         (0x707fU & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__load_signed_inst_w = ((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.lsu_opcode_opcode_w)) 
                                                | ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.lsu_opcode_opcode_w)) 
                                                   | (0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.lsu_opcode_opcode_w))));
    vlSelfRef.u_lsu__DOT__req_lw_w = ((0x2003U == (0x707fU 
                                                   & vlSelfRef.lsu_opcode_opcode_w)) 
                                      | (0x6003U == 
                                         (0x707fU & vlSelfRef.lsu_opcode_opcode_w)));
    vlSelfRef.u_lsu__DOT__req_sh_w = (0x1023U == (0x707fU 
                                                  & vlSelfRef.lsu_opcode_opcode_w));
    vlSelfRef.u_lsu__DOT__req_sw_w = (0x2023U == (0x707fU 
                                                  & vlSelfRef.lsu_opcode_opcode_w));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_invalid_i 
        = vlSelfRef.csr_opcode_invalid_w;
    vlSelfRef.u_mul__DOT__opcode_valid_i = vlSelfRef.mul_opcode_valid_w;
    vlSelfRef.u_div__DOT__opcode_valid_i = vlSelfRef.div_opcode_valid_w;
    vlSelfRef.u_exec0__DOT__opcode_valid_i = vlSelfRef.exec0_opcode_valid_w;
    vlSelfRef.u_lsu__DOT__opcode_valid_i = vlSelfRef.lsu_opcode_valid_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr.opcode_valid_i 
        = vlSelfRef.csr_opcode_valid_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__branch_request_i 
        = vlSelfRef.u_frontend__DOT__branch_info_request_i;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__alloc_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_request_i 
        = vlSelfRef.u_frontend__DOT__branch_request_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_request_i 
        = vlSelfRef.u_frontend__DOT__branch_request_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_resp_drop_w 
        = vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w;
    vlSelfRef.u_frontend__DOT__fetch_valid_w = ((~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w)) 
                                                & ((IData)(vlSelfRef.mem_i_valid_i) 
                                                   | (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__skid_valid_q)));
    vlSelfRef.u_frontend__DOT__fetch_pc_f_w = (((~ (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__stall_q)) 
                                                & (IData)(vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_w))
                                                ? vlSelfRef.u_frontend__DOT__u_fetch__DOT__branch_pc_w
                                                : vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_q);
    vlSelfRef.u_exec1__DOT__u_alu__DOT__alu_op_i = vlSelfRef.u_exec1__DOT__alu_func_r;
    vlSelfRef.u_div__DOT__signed_operation_w = ((IData)(vlSelfRef.u_div__DOT__inst_div_w) 
                                                | (IData)(vlSelfRef.u_div__DOT__inst_rem_w));
    vlSelfRef.u_div__DOT__div_operation_w = ((IData)(vlSelfRef.u_div__DOT__inst_div_w) 
                                             | (IData)(vlSelfRef.u_div__DOT__inst_divu_w));
    vlSelfRef.u_exec0__DOT__u_alu__DOT__alu_op_i = vlSelfRef.u_exec0__DOT__alu_func_r;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch0_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_accept_i 
        = vlSelfRef.u_frontend__DOT__fetch1_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w 
        = (((~ (IData)(vlSelfRef.fetch1_valid_w)) & (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w)) 
           | (((~ (IData)(vlSelfRef.fetch0_valid_w)) 
               | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w)) 
              & (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w)));
    vlSelfRef.u_lsu__DOT__load_inst_w = ((IData)(vlSelfRef.u_lsu__DOT__load_signed_inst_w) 
                                         | ((0x4003U 
                                             == (0x707fU 
                                                 & vlSelfRef.lsu_opcode_opcode_w)) 
                                            | ((0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.lsu_opcode_opcode_w)) 
                                               | (0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.lsu_opcode_opcode_w)))));
    vlSelfRef.u_lsu__DOT__req_sh_lh_w = ((IData)(vlSelfRef.u_lsu__DOT__req_sh_w) 
                                         | (IData)(vlSelfRef.u_lsu__DOT__req_lh_w));
    vlSelfRef.u_lsu__DOT__store_inst_w = ((IData)(vlSelfRef.u_lsu__DOT__req_sb_w) 
                                          | ((IData)(vlSelfRef.u_lsu__DOT__req_sh_w) 
                                             | (IData)(vlSelfRef.u_lsu__DOT__req_sw_w)));
    vlSelfRef.u_lsu__DOT__req_sw_lw_w = ((IData)(vlSelfRef.u_lsu__DOT__req_sw_w) 
                                         | (IData)(vlSelfRef.u_lsu__DOT__req_lw_w));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__flush_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__branch_request_i;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__fetch_valid_o 
        = vlSelfRef.u_frontend__DOT__fetch_valid_w;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__fetch_valid_w) 
           & (IData)(vlSelfRef.u_frontend__DOT__fetch_accept_w));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_valid_i 
        = vlSelfRef.u_frontend__DOT__fetch_valid_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__pc_f_i = vlSelfRef.u_frontend__DOT__fetch_pc_f_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__pc_f_o 
        = vlSelfRef.u_frontend__DOT__fetch_pc_f_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_pc_w 
        = vlSelfRef.u_frontend__DOT__fetch_pc_f_w;
    vlSelfRef.mmu_ifetch_pc_w = (0xfffffff8U & vlSelfRef.u_frontend__DOT__fetch_pc_f_w);
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r = 0U;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
        = ((IData)(8U) + (0xfffffff8U & vlSelfRef.u_frontend__DOT__fetch_pc_f_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 1U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [1U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [1U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 2U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [2U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [2U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 3U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [3U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [3U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 4U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [4U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [4U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 5U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [5U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [5U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 6U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [6U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [6U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 7U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [7U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [7U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 8U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [8U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [8U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 9U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [9U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [9U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xaU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xaU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xaU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xbU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xbU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xbU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xcU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xcU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xcU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xdU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xdU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xdU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xeU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xeU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xeU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xfU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xfU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xfU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x10U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x10U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x10U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x11U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x11U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x11U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x12U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x12U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x12U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x13U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x13U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x13U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x14U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x14U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x14U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x15U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x15U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x15U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x16U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x16U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x16U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x17U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x17U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x17U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x18U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x18U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x18U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x19U;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x19U] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x19U];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1aU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1aU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1aU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1bU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1bU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1bU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1cU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1cU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1cU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1dU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1dU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1dU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1eU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1eU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1eU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1fU;
    if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1fU] == vlSelfRef.u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1fU];
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    if ((1U & ((~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r)) 
               & (~ (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                     >> 2U))))) {
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 1U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [1U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 2U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [2U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 3U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [3U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 4U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [4U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 5U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [5U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 6U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [6U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 7U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [7U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 8U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [8U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 9U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [9U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xaU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xaU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xbU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xbU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xcU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xcU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xdU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xdU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xeU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xeU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0xfU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xfU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x10U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x10U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x11U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x11U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x12U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x12U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x13U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x13U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x14U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x14U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x15U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x15U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x16U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x16U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x17U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x17U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x18U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x18U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x19U;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x19U];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1aU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1aU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1bU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1bU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1cU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1cU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1dU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1dU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1eU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1eU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x1fU;
        if ((vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == (4U | vlSelfRef.u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1fU];
            vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
        }
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    }
    vlSelfRef.u_div__DOT__div_rem_inst_w = ((IData)(vlSelfRef.u_div__DOT__div_operation_w) 
                                            | ((IData)(vlSelfRef.u_div__DOT__inst_rem_w) 
                                               | (IData)(vlSelfRef.u_div__DOT__inst_remu_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop0_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out0_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_out1_accept_i;
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_i 
        = vlSelfRef.u_frontend__DOT__u_decode__DOT__fetch_in_valid_i;
    vlSelfRef.u_mmu__DOT__fetch_in_pc_i = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.mem_i_pc_o = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_frontend__DOT__icache_pc_o = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__icache_pc_o 
        = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_mmu__DOT__fetch_out_pc_o = vlSelfRef.mmu_ifetch_pc_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__hit_entry_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_rd_entry_w 
        = ((0x1feU & (vlSelfRef.u_frontend__DOT__fetch_pc_f_w 
                      >> 2U)) | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__hit_i 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_w 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_0) 
              & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r)));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_0) 
              & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r)));
    vlSelfRef.u_div__DOT__div_start_w = ((IData)(vlSelfRef.div_opcode_valid_w) 
                                         & (IData)(vlSelfRef.u_div__DOT__div_rem_inst_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__gshare_rd_entry_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q) 
           ^ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_rd_entry_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_predict_taken_w 
        = (2U <= vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
           [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_rd_entry_w]);
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
        = vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q;
    if (((IData)(vlSelfRef.branch_info_request_w) & (IData)(vlSelfRef.branch_info_is_call_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSelfRef.branch_info_request_w) 
                & (IData)(vlSelfRef.branch_info_is_ret_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    } else if (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q)));
    } else if (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w))) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q) 
                     - (IData)(1U)));
    }
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_predict_taken_w) 
           | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r));
    vlSelfRef.u_frontend__DOT__next_pc_f_w = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w)
                                               ? vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                                              [vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]
                                               : ((IData)(u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1)
                                                   ? vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r
                                                   : 
                                                  ((IData)(8U) 
                                                   + vlSelfRef.mmu_ifetch_pc_w)));
    u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
              | (IData)(u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_1)));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__next_pc_f_i 
        = vlSelfRef.u_frontend__DOT__next_pc_f_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__next_pc_f_o 
        = vlSelfRef.u_frontend__DOT__next_pc_f_w;
    if (u_frontend__DOT__u_npc__DOT____VdfgRegularize_hbaeca962_0_2) {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w 
            = vlSelfRef.u_frontend__DOT__fetch_pc_accept_w;
        vlSelfRef.u_frontend__DOT__next_taken_f_w = 
            ((4U & vlSelfRef.u_frontend__DOT__fetch_pc_f_w)
              ? ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                 << 1U) : (((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                            << 1U) | (1U & (~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))));
    } else {
        vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w = 0U;
        vlSelfRef.u_frontend__DOT__next_taken_f_w = 0U;
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_ntaken_w 
        = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((~ (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w)) 
              & (IData)(vlSelfRef.u_frontend__DOT__fetch_pc_accept_w)));
    vlSelfRef.u_frontend__DOT__u_fetch__DOT__next_taken_f_i 
        = vlSelfRef.u_frontend__DOT__next_taken_f_w;
    vlSelfRef.u_frontend__DOT__u_npc__DOT__next_taken_f_o 
        = vlSelfRef.u_frontend__DOT__next_taken_f_w;
}
