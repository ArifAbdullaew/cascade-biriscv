// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_csr__SB0.h"

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_csr__SB0___eval_initial__TOP__biriscv_mem_top__u_core__u_csr(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___eval_initial__TOP__biriscv_mem_top__u_core__u_csr\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_fault_r = 0U;
    vlSelfRef.timer_irq_w = 0U;
    vlSelfRef.misa_w = 0x40001100U;
}

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_csr__SB0___ctor_var_reset(Vbiriscv_mem_top_biriscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vbiriscv_mem_top_biriscv_csr__SB0___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->intr_i = VL_RAND_RESET_I(1);
    vlSelf->opcode_valid_i = VL_RAND_RESET_I(1);
    vlSelf->opcode_opcode_i = VL_RAND_RESET_I(32);
    vlSelf->opcode_pc_i = VL_RAND_RESET_I(32);
    vlSelf->opcode_invalid_i = VL_RAND_RESET_I(1);
    vlSelf->opcode_rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->opcode_ra_idx_i = VL_RAND_RESET_I(5);
    vlSelf->opcode_rb_idx_i = VL_RAND_RESET_I(5);
    vlSelf->opcode_ra_operand_i = VL_RAND_RESET_I(32);
    vlSelf->opcode_rb_operand_i = VL_RAND_RESET_I(32);
    vlSelf->csr_writeback_write_i = VL_RAND_RESET_I(1);
    vlSelf->csr_writeback_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->csr_writeback_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->csr_writeback_exception_i = VL_RAND_RESET_I(6);
    vlSelf->csr_writeback_exception_pc_i = VL_RAND_RESET_I(32);
    vlSelf->csr_writeback_exception_addr_i = VL_RAND_RESET_I(32);
    vlSelf->cpu_id_i = VL_RAND_RESET_I(32);
    vlSelf->reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->interrupt_inhibit_i = VL_RAND_RESET_I(1);
    vlSelf->csr_result_e1_value_o = VL_RAND_RESET_I(32);
    vlSelf->csr_result_e1_write_o = VL_RAND_RESET_I(1);
    vlSelf->csr_result_e1_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->csr_result_e1_exception_o = VL_RAND_RESET_I(6);
    vlSelf->branch_csr_request_o = VL_RAND_RESET_I(1);
    vlSelf->branch_csr_pc_o = VL_RAND_RESET_I(32);
    vlSelf->branch_csr_priv_o = VL_RAND_RESET_I(2);
    vlSelf->take_interrupt_o = VL_RAND_RESET_I(1);
    vlSelf->ifence_o = VL_RAND_RESET_I(1);
    vlSelf->mmu_priv_d_o = VL_RAND_RESET_I(2);
    vlSelf->mmu_sum_o = VL_RAND_RESET_I(1);
    vlSelf->mmu_mxr_o = VL_RAND_RESET_I(1);
    vlSelf->mmu_flush_o = VL_RAND_RESET_I(1);
    vlSelf->mmu_satp_o = VL_RAND_RESET_I(32);
    vlSelf->ecall_w = VL_RAND_RESET_I(1);
    vlSelf->ebreak_w = VL_RAND_RESET_I(1);
    vlSelf->eret_w = VL_RAND_RESET_I(1);
    vlSelf->eret_priv_w = VL_RAND_RESET_I(2);
    vlSelf->csrrw_w = VL_RAND_RESET_I(1);
    vlSelf->csrrs_w = VL_RAND_RESET_I(1);
    vlSelf->csrrc_w = VL_RAND_RESET_I(1);
    vlSelf->csrrwi_w = VL_RAND_RESET_I(1);
    vlSelf->csrrsi_w = VL_RAND_RESET_I(1);
    vlSelf->csrrci_w = VL_RAND_RESET_I(1);
    vlSelf->wfi_w = VL_RAND_RESET_I(1);
    vlSelf->fence_w = VL_RAND_RESET_I(1);
    vlSelf->sfence_w = VL_RAND_RESET_I(1);
    vlSelf->ifence_w = VL_RAND_RESET_I(1);
    vlSelf->current_priv_w = VL_RAND_RESET_I(2);
    vlSelf->csr_priv_r = VL_RAND_RESET_I(2);
    vlSelf->csr_readonly_r = VL_RAND_RESET_I(1);
    vlSelf->csr_write_r = VL_RAND_RESET_I(1);
    vlSelf->set_r = VL_RAND_RESET_I(1);
    vlSelf->clr_r = VL_RAND_RESET_I(1);
    vlSelf->csr_fault_r = VL_RAND_RESET_I(1);
    vlSelf->data_r = VL_RAND_RESET_I(32);
    vlSelf->satp_update_w = VL_RAND_RESET_I(1);
    vlSelf->timer_irq_w = VL_RAND_RESET_I(1);
    vlSelf->misa_w = VL_RAND_RESET_I(32);
    vlSelf->csr_rdata_w = VL_RAND_RESET_I(32);
    vlSelf->csr_branch_w = VL_RAND_RESET_I(1);
    vlSelf->csr_target_w = VL_RAND_RESET_I(32);
    vlSelf->interrupt_w = VL_RAND_RESET_I(32);
    vlSelf->status_reg_w = VL_RAND_RESET_I(32);
    vlSelf->satp_reg_w = VL_RAND_RESET_I(32);
    vlSelf->rd_valid_e1_q = VL_RAND_RESET_I(1);
    vlSelf->rd_result_e1_q = VL_RAND_RESET_I(32);
    vlSelf->csr_wdata_e1_q = VL_RAND_RESET_I(32);
    vlSelf->exception_e1_q = VL_RAND_RESET_I(6);
    vlSelf->eret_fault_w = VL_RAND_RESET_I(1);
    vlSelf->take_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->tlb_flush_q = VL_RAND_RESET_I(1);
    vlSelf->ifence_q = VL_RAND_RESET_I(1);
    vlSelf->branch_q = VL_RAND_RESET_I(1);
    vlSelf->branch_target_q = VL_RAND_RESET_I(32);
    vlSelf->reset_q = VL_RAND_RESET_I(1);
}
