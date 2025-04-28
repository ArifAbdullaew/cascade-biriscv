// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_biriscv_csr__SB0.h"

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mmu_flush_o = vlSelfRef.tlb_flush_q;
    vlSelfRef.csr_result_e1_value_o = vlSelfRef.rd_result_e1_q;
    vlSelfRef.csr_result_e1_write_o = vlSelfRef.rd_valid_e1_q;
    vlSelfRef.csr_result_e1_wdata_o = vlSelfRef.csr_wdata_e1_q;
    vlSelfRef.csr_result_e1_exception_o = vlSelfRef.exception_e1_q;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.timer_intr_i 
        = vlSelfRef.timer_irq_w;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.misa_i 
        = vlSelfRef.misa_w;
    vlSelfRef.ifence_o = vlSelfRef.ifence_q;
    vlSelfRef.branch_csr_pc_o = vlSelfRef.branch_target_q;
    vlSelfRef.take_interrupt_o = vlSelfRef.take_interrupt_q;
    vlSelfRef.branch_csr_request_o = vlSelfRef.branch_q;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.ext_intr_i 
        = vlSelfRef.intr_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.cpu_id_i 
        = vlSelfRef.cpu_id_i;
    vlSelfRef.status_reg_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.status_o;
    vlSelfRef.satp_reg_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.satp_o;
    vlSelfRef.current_priv_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.priv_o;
    vlSelfRef.interrupt_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.interrupt_o;
    vlSelfRef.mmu_sum_o = (1U & (vlSelfRef.status_reg_w 
                                 >> 0x12U));
    vlSelfRef.mmu_mxr_o = (1U & (vlSelfRef.status_reg_w 
                                 >> 0x13U));
    vlSelfRef.mmu_satp_o = vlSelfRef.satp_reg_w;
    vlSelfRef.mmu_priv_d_o = (3U & ((0x20000U & vlSelfRef.status_reg_w)
                                     ? (vlSelfRef.status_reg_w 
                                        >> 0xbU) : (IData)(vlSelfRef.current_priv_w)));
    vlSelfRef.branch_csr_priv_o = ((vlSelfRef.satp_reg_w 
                                    >> 0x1fU) ? (IData)(vlSelfRef.current_priv_w)
                                    : 3U);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.rst_i 
        = vlSelfRef.rst_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.clk_i 
        = vlSelfRef.clk_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.exception_addr_i 
        = vlSelfRef.csr_writeback_exception_addr_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.exception_pc_i 
        = vlSelfRef.csr_writeback_exception_pc_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_wdata_i 
        = vlSelfRef.csr_writeback_wdata_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_waddr_i 
        = ((IData)(vlSelfRef.csr_writeback_write_i)
            ? (IData)(vlSelfRef.csr_writeback_waddr_i)
            : 0U);
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.exception_i 
        = vlSelfRef.csr_writeback_exception_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__2(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_branch_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_branch_o;
    vlSelfRef.csr_target_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_target_o;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_priv_r = (3U & (vlSelfRef.opcode_opcode_i 
                                  >> 0x1cU));
    vlSelfRef.csr_readonly_r = (3U == (vlSelfRef.opcode_opcode_i 
                                       >> 0x1eU));
    vlSelfRef.eret_priv_w = (3U & (vlSelfRef.opcode_opcode_i 
                                   >> 0x1cU));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_raddr_i 
        = (vlSelfRef.opcode_opcode_i >> 0x14U);
    vlSelfRef.ifence_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x100fU == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.sfence_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x12000073U == (0xfe007fffU 
                                             & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.ecall_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x73U == vlSelfRef.opcode_opcode_i));
    vlSelfRef.ebreak_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x100073U == vlSelfRef.opcode_opcode_i));
    vlSelfRef.wfi_w = ((IData)(vlSelfRef.opcode_valid_i) 
                       & (0x10500073U == (0xffff8fffU 
                                          & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.fence_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0xfU == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_ren_i 
        = vlSelfRef.opcode_valid_i;
    vlSelfRef.eret_w = ((IData)(vlSelfRef.opcode_valid_i) 
                        & (0x200073U == (0xcfffffffU 
                                         & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrs_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x2073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrc_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x3073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrsi_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x6073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrci_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x7073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrw_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x1073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrwi_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x5073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.eret_fault_w = ((IData)(vlSelfRef.eret_w) 
                              & ((IData)(vlSelfRef.current_priv_w) 
                                 < (IData)(vlSelfRef.eret_priv_w)));
    vlSelfRef.csr_write_r = (((0U != (IData)(vlSelfRef.opcode_ra_idx_i)) 
                              | (IData)(vlSelfRef.csrrw_w)) 
                             | (IData)(vlSelfRef.csrrwi_w));
    vlSelfRef.set_r = ((IData)(vlSelfRef.csrrw_w) | 
                       ((IData)(vlSelfRef.csrrs_w) 
                        | ((IData)(vlSelfRef.csrrwi_w) 
                           | (IData)(vlSelfRef.csrrsi_w))));
    vlSelfRef.clr_r = ((IData)(vlSelfRef.csrrw_w) | 
                       ((IData)(vlSelfRef.csrrc_w) 
                        | ((IData)(vlSelfRef.csrrwi_w) 
                           | (IData)(vlSelfRef.csrrci_w))));
    vlSelfRef.satp_update_w = ((IData)(vlSelfRef.opcode_valid_i) 
                               & (((IData)(vlSelfRef.clr_r) 
                                   | (IData)(vlSelfRef.set_r)) 
                                  & ((IData)(vlSelfRef.csr_write_r) 
                                     & (0x180U == (vlSelfRef.opcode_opcode_i 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_rdata_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_rdata_o;
    vlSelfRef.data_r = ((((IData)(vlSelfRef.csrrwi_w) 
                          | (IData)(vlSelfRef.csrrsi_w)) 
                         | (IData)(vlSelfRef.csrrci_w))
                         ? (IData)(vlSelfRef.opcode_ra_idx_i)
                         : vlSelfRef.opcode_ra_operand_i);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.satp_reg_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.satp_o;
    vlSelfRef.status_reg_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.status_o;
    vlSelfRef.mmu_satp_o = vlSelfRef.satp_reg_w;
    vlSelfRef.mmu_sum_o = (1U & (vlSelfRef.status_reg_w 
                                 >> 0x12U));
    vlSelfRef.mmu_mxr_o = (1U & (vlSelfRef.status_reg_w 
                                 >> 0x13U));
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__2(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_wdata_i 
        = vlSelfRef.csr_writeback_wdata_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.exception_i 
        = vlSelfRef.csr_writeback_exception_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_waddr_i 
        = ((IData)(vlSelfRef.csr_writeback_write_i)
            ? (IData)(vlSelfRef.csr_writeback_waddr_i)
            : 0U);
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.exception_pc_i 
        = vlSelfRef.csr_writeback_exception_pc_i;
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.exception_addr_i 
        = vlSelfRef.csr_writeback_exception_addr_i;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__3(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_branch_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_branch_o;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__4(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.current_priv_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.priv_o;
    vlSelfRef.interrupt_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.interrupt_o;
    vlSelfRef.mmu_priv_d_o = (3U & ((0x20000U & vlSelfRef.status_reg_w)
                                     ? (vlSelfRef.status_reg_w 
                                        >> 0xbU) : (IData)(vlSelfRef.current_priv_w)));
    vlSelfRef.branch_csr_priv_o = ((vlSelfRef.satp_reg_w 
                                    >> 0x1fU) ? (IData)(vlSelfRef.current_priv_w)
                                    : 3U);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__0(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_target_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_target_o;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_priv_r = (3U & (vlSelfRef.opcode_opcode_i 
                                  >> 0x1cU));
    vlSelfRef.csr_readonly_r = (3U == (vlSelfRef.opcode_opcode_i 
                                       >> 0x1eU));
    vlSelfRef.eret_priv_w = (3U & (vlSelfRef.opcode_opcode_i 
                                   >> 0x1cU));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_raddr_i 
        = (vlSelfRef.opcode_opcode_i >> 0x14U);
    vlSelfRef.ifence_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x100fU == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.sfence_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x12000073U == (0xfe007fffU 
                                             & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.ecall_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x73U == vlSelfRef.opcode_opcode_i));
    vlSelfRef.ebreak_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x100073U == vlSelfRef.opcode_opcode_i));
    vlSelfRef.wfi_w = ((IData)(vlSelfRef.opcode_valid_i) 
                       & (0x10500073U == (0xffff8fffU 
                                          & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.fence_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0xfU == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_ren_i 
        = vlSelfRef.opcode_valid_i;
    vlSelfRef.eret_w = ((IData)(vlSelfRef.opcode_valid_i) 
                        & (0x200073U == (0xcfffffffU 
                                         & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrs_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x2073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrc_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x3073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrsi_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x6073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrci_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x7073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrw_w = ((IData)(vlSelfRef.opcode_valid_i) 
                         & (0x1073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csrrwi_w = ((IData)(vlSelfRef.opcode_valid_i) 
                          & (0x5073U == (0x707fU & vlSelfRef.opcode_opcode_i)));
    vlSelfRef.csr_write_r = (((0U != (IData)(vlSelfRef.opcode_ra_idx_i)) 
                              | (IData)(vlSelfRef.csrrw_w)) 
                             | (IData)(vlSelfRef.csrrwi_w));
    vlSelfRef.set_r = ((IData)(vlSelfRef.csrrw_w) | 
                       ((IData)(vlSelfRef.csrrs_w) 
                        | ((IData)(vlSelfRef.csrrwi_w) 
                           | (IData)(vlSelfRef.csrrsi_w))));
    vlSelfRef.clr_r = ((IData)(vlSelfRef.csrrw_w) | 
                       ((IData)(vlSelfRef.csrrc_w) 
                        | ((IData)(vlSelfRef.csrrwi_w) 
                           | (IData)(vlSelfRef.csrrci_w))));
    vlSelfRef.satp_update_w = ((IData)(vlSelfRef.opcode_valid_i) 
                               & (((IData)(vlSelfRef.clr_r) 
                                   | (IData)(vlSelfRef.set_r)) 
                                  & ((IData)(vlSelfRef.csr_write_r) 
                                     & (0x180U == (vlSelfRef.opcode_opcode_i 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__3(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.eret_fault_w = ((IData)(vlSelfRef.eret_w) 
                              & ((IData)(vlSelfRef.current_priv_w) 
                                 < (IData)(vlSelfRef.eret_priv_w)));
    vlSelfRef.csr_rdata_w = vlSymsp->TOP__biriscv_mem_top__u_core__u_csr__u_csrfile.csr_rdata_o;
}
