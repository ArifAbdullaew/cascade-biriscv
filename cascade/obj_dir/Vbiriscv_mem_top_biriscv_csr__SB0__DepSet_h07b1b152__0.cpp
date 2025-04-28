// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_csr__SB0.h"

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__1(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__reset_q;
    __Vdly__reset_q = 0;
    // Body
    __Vdly__reset_q = vlSelfRef.reset_q;
    vlSelfRef.tlb_flush_q = ((~ (IData)(vlSelfRef.rst_i)) 
                             & ((IData)(vlSelfRef.satp_update_w) 
                                | (IData)(vlSelfRef.sfence_w)));
    vlSelfRef.ifence_q = ((~ (IData)(vlSelfRef.rst_i)) 
                          & (IData)(vlSelfRef.ifence_w));
    vlSelfRef.rd_valid_e1_q = ((1U & (~ (IData)(vlSelfRef.rst_i))) 
                               && ((IData)(vlSelfRef.opcode_valid_i) 
                                   && (((IData)(vlSelfRef.set_r) 
                                        | (IData)(vlSelfRef.clr_r)) 
                                       & (~ (IData)(vlSelfRef.csr_fault_r)))));
    if (vlSelfRef.rst_i) {
        vlSelfRef.csr_wdata_e1_q = 0U;
        vlSelfRef.rd_result_e1_q = 0U;
        vlSelfRef.exception_e1_q = 0U;
        vlSelfRef.branch_target_q = 0U;
        vlSelfRef.branch_q = 0U;
        __Vdly__reset_q = 1U;
    } else {
        if (vlSelfRef.opcode_valid_i) {
            if (((IData)(vlSelfRef.set_r) & (IData)(vlSelfRef.clr_r))) {
                vlSelfRef.csr_wdata_e1_q = vlSelfRef.data_r;
            } else if (vlSelfRef.set_r) {
                vlSelfRef.csr_wdata_e1_q = (vlSelfRef.csr_rdata_w 
                                            | vlSelfRef.data_r);
            } else if (vlSelfRef.clr_r) {
                vlSelfRef.csr_wdata_e1_q = (vlSelfRef.csr_rdata_w 
                                            & (~ vlSelfRef.data_r));
            }
            vlSelfRef.rd_result_e1_q = ((((IData)(vlSelfRef.opcode_invalid_i) 
                                          | (IData)(vlSelfRef.csr_fault_r)) 
                                         | (IData)(vlSelfRef.eret_fault_w))
                                         ? vlSelfRef.opcode_opcode_i
                                         : vlSelfRef.csr_rdata_w);
            vlSelfRef.exception_e1_q = (0x3fU & ((0x73U 
                                                  == vlSelfRef.opcode_opcode_i)
                                                  ? 
                                                 ((IData)(0x18U) 
                                                  + (IData)(vlSelfRef.current_priv_w))
                                                  : 
                                                 ((IData)(vlSelfRef.eret_fault_w)
                                                   ? 0x12U
                                                   : 
                                                  ((0x200073U 
                                                    == 
                                                    (0xcfffffffU 
                                                     & vlSelfRef.opcode_opcode_i))
                                                    ? 
                                                   ((IData)(0x30U) 
                                                    + (IData)(vlSelfRef.eret_priv_w))
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelfRef.opcode_opcode_i)
                                                     ? 0x13U
                                                     : 
                                                    (((IData)(vlSelfRef.opcode_invalid_i) 
                                                      | (IData)(vlSelfRef.csr_fault_r))
                                                      ? 0x12U
                                                      : 
                                                     ((((IData)(vlSelfRef.satp_update_w) 
                                                        | (IData)(vlSelfRef.ifence_w)) 
                                                       | (IData)(vlSelfRef.sfence_w))
                                                       ? 0x34U
                                                       : 0U)))))));
        } else {
            vlSelfRef.csr_wdata_e1_q = 0U;
            vlSelfRef.rd_result_e1_q = 0U;
            vlSelfRef.exception_e1_q = 0U;
        }
        if (vlSelfRef.reset_q) {
            vlSelfRef.branch_target_q = vlSelfRef.reset_vector_i;
            vlSelfRef.branch_q = 1U;
            __Vdly__reset_q = 0U;
        } else {
            vlSelfRef.branch_q = vlSelfRef.csr_branch_w;
            vlSelfRef.branch_target_q = vlSelfRef.csr_target_w;
        }
    }
    vlSelfRef.take_interrupt_q = ((~ (IData)(vlSelfRef.rst_i)) 
                                  & ((0U != vlSelfRef.interrupt_w) 
                                     & (~ (IData)(vlSelfRef.interrupt_inhibit_i))));
    vlSelfRef.reset_q = __Vdly__reset_q;
    vlSelfRef.mmu_flush_o = vlSelfRef.tlb_flush_q;
    vlSelfRef.ifence_o = vlSelfRef.ifence_q;
    vlSelfRef.csr_result_e1_write_o = vlSelfRef.rd_valid_e1_q;
    vlSelfRef.csr_result_e1_wdata_o = vlSelfRef.csr_wdata_e1_q;
    vlSelfRef.csr_result_e1_value_o = vlSelfRef.rd_result_e1_q;
    vlSelfRef.csr_result_e1_exception_o = vlSelfRef.exception_e1_q;
    vlSelfRef.take_interrupt_o = vlSelfRef.take_interrupt_q;
    vlSelfRef.branch_csr_pc_o = vlSelfRef.branch_target_q;
    vlSelfRef.branch_csr_request_o = vlSelfRef.branch_q;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__2(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_r = ((((IData)(vlSelfRef.csrrwi_w) 
                          | (IData)(vlSelfRef.csrrsi_w)) 
                         | (IData)(vlSelfRef.csrrci_w))
                         ? (IData)(vlSelfRef.opcode_ra_idx_i)
                         : vlSelfRef.opcode_ra_operand_i);
}
