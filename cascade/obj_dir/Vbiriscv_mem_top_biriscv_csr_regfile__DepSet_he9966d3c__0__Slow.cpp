// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_csr_regfile.h"

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_csr_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___eval_initial__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.irq_priv_r = 3U;
    vlSelfRef.exception_s_w = 0U;
}

VL_ATTR_COLD void Vbiriscv_mem_top_biriscv_csr_regfile___ctor_var_reset(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->ext_intr_i = VL_RAND_RESET_I(1);
    vlSelf->timer_intr_i = VL_RAND_RESET_I(1);
    vlSelf->cpu_id_i = VL_RAND_RESET_I(32);
    vlSelf->misa_i = VL_RAND_RESET_I(32);
    vlSelf->exception_i = VL_RAND_RESET_I(6);
    vlSelf->exception_pc_i = VL_RAND_RESET_I(32);
    vlSelf->exception_addr_i = VL_RAND_RESET_I(32);
    vlSelf->csr_ren_i = VL_RAND_RESET_I(1);
    vlSelf->csr_raddr_i = VL_RAND_RESET_I(12);
    vlSelf->csr_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->csr_branch_o = VL_RAND_RESET_I(1);
    vlSelf->csr_target_o = VL_RAND_RESET_I(32);
    vlSelf->priv_o = VL_RAND_RESET_I(2);
    vlSelf->status_o = VL_RAND_RESET_I(32);
    vlSelf->satp_o = VL_RAND_RESET_I(32);
    vlSelf->interrupt_o = VL_RAND_RESET_I(32);
    vlSelf->csr_mepc_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mcause_q = VL_RAND_RESET_I(32);
    vlSelf->csr_sr_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mtvec_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mip_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mie_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mpriv_q = VL_RAND_RESET_I(2);
    vlSelf->csr_mcycle_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mcycle_h_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mscratch_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mtval_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mtimecmp_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mtime_ie_q = VL_RAND_RESET_I(1);
    vlSelf->csr_medeleg_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mideleg_q = VL_RAND_RESET_I(32);
    vlSelf->csr_sepc_q = VL_RAND_RESET_I(32);
    vlSelf->csr_stvec_q = VL_RAND_RESET_I(32);
    vlSelf->csr_scause_q = VL_RAND_RESET_I(32);
    vlSelf->csr_stval_q = VL_RAND_RESET_I(32);
    vlSelf->csr_satp_q = VL_RAND_RESET_I(32);
    vlSelf->csr_sscratch_q = VL_RAND_RESET_I(32);
    vlSelf->irq_pending_r = VL_RAND_RESET_I(32);
    vlSelf->irq_masked_r = VL_RAND_RESET_I(32);
    vlSelf->irq_priv_r = VL_RAND_RESET_I(2);
    vlSelf->m_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->m_interrupts_r = VL_RAND_RESET_I(32);
    vlSelf->s_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->s_interrupts_r = VL_RAND_RESET_I(32);
    vlSelf->irq_priv_q = VL_RAND_RESET_I(2);
    vlSelf->csr_mip_upd_q = VL_RAND_RESET_I(1);
    vlSelf->buffer_mip_w = VL_RAND_RESET_I(1);
    vlSelf->rdata_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mepc_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mcause_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mtval_r = VL_RAND_RESET_I(32);
    vlSelf->csr_sr_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mip_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mie_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mpriv_r = VL_RAND_RESET_I(2);
    vlSelf->csr_mcycle_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mtimecmp_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mtime_ie_r = VL_RAND_RESET_I(1);
    vlSelf->csr_medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->csr_mip_next_q = VL_RAND_RESET_I(32);
    vlSelf->csr_mip_next_r = VL_RAND_RESET_I(32);
    vlSelf->csr_sepc_r = VL_RAND_RESET_I(32);
    vlSelf->csr_stvec_r = VL_RAND_RESET_I(32);
    vlSelf->csr_scause_r = VL_RAND_RESET_I(32);
    vlSelf->csr_stval_r = VL_RAND_RESET_I(32);
    vlSelf->csr_satp_r = VL_RAND_RESET_I(32);
    vlSelf->csr_sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->is_exception_w = VL_RAND_RESET_I(1);
    vlSelf->exception_s_w = VL_RAND_RESET_I(1);
    vlSelf->branch_r = VL_RAND_RESET_I(1);
    vlSelf->branch_target_r = VL_RAND_RESET_I(32);
}
