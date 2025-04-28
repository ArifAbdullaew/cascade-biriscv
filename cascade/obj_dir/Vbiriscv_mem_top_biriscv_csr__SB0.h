// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_mem_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_MEM_TOP_BIRISCV_CSR__SB0_H_
#define VERILATED_VBIRISCV_MEM_TOP_BIRISCV_CSR__SB0_H_  // guard

#include "verilated.h"
class Vbiriscv_mem_top_biriscv_csr_regfile;


class Vbiriscv_mem_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_mem_top_biriscv_csr__SB0 final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_mem_top_biriscv_csr_regfile* u_csrfile;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(intr_i,0,0);
        VL_IN8(opcode_valid_i,0,0);
        VL_IN8(opcode_invalid_i,0,0);
        VL_IN8(opcode_rd_idx_i,4,0);
        VL_IN8(opcode_ra_idx_i,4,0);
        VL_IN8(opcode_rb_idx_i,4,0);
        VL_IN8(csr_writeback_write_i,0,0);
        VL_IN8(csr_writeback_exception_i,5,0);
        VL_IN8(interrupt_inhibit_i,0,0);
        VL_OUT8(csr_result_e1_write_o,0,0);
        VL_OUT8(csr_result_e1_exception_o,5,0);
        VL_OUT8(branch_csr_request_o,0,0);
        VL_OUT8(branch_csr_priv_o,1,0);
        VL_OUT8(take_interrupt_o,0,0);
        VL_OUT8(ifence_o,0,0);
        VL_OUT8(mmu_priv_d_o,1,0);
        VL_OUT8(mmu_sum_o,0,0);
        VL_OUT8(mmu_mxr_o,0,0);
        VL_OUT8(mmu_flush_o,0,0);
        CData/*0:0*/ ecall_w;
        CData/*0:0*/ ebreak_w;
        CData/*0:0*/ eret_w;
        CData/*1:0*/ eret_priv_w;
        CData/*0:0*/ csrrw_w;
        CData/*0:0*/ csrrs_w;
        CData/*0:0*/ csrrc_w;
        CData/*0:0*/ csrrwi_w;
        CData/*0:0*/ csrrsi_w;
        CData/*0:0*/ csrrci_w;
        CData/*0:0*/ wfi_w;
        CData/*0:0*/ fence_w;
        CData/*0:0*/ sfence_w;
        CData/*0:0*/ ifence_w;
        CData/*1:0*/ current_priv_w;
        CData/*1:0*/ csr_priv_r;
        CData/*0:0*/ csr_readonly_r;
        CData/*0:0*/ csr_write_r;
        CData/*0:0*/ set_r;
        CData/*0:0*/ clr_r;
        CData/*0:0*/ csr_fault_r;
        CData/*0:0*/ satp_update_w;
        CData/*0:0*/ timer_irq_w;
        CData/*0:0*/ csr_branch_w;
        CData/*0:0*/ rd_valid_e1_q;
        CData/*5:0*/ exception_e1_q;
        CData/*0:0*/ eret_fault_w;
        CData/*0:0*/ take_interrupt_q;
        CData/*0:0*/ tlb_flush_q;
        CData/*0:0*/ ifence_q;
        CData/*0:0*/ branch_q;
        CData/*0:0*/ reset_q;
        VL_IN16(csr_writeback_waddr_i,11,0);
        VL_IN(opcode_opcode_i,31,0);
        VL_IN(opcode_pc_i,31,0);
        VL_IN(opcode_ra_operand_i,31,0);
        VL_IN(opcode_rb_operand_i,31,0);
        VL_IN(csr_writeback_wdata_i,31,0);
        VL_IN(csr_writeback_exception_pc_i,31,0);
        VL_IN(csr_writeback_exception_addr_i,31,0);
        VL_IN(cpu_id_i,31,0);
        VL_IN(reset_vector_i,31,0);
        VL_OUT(csr_result_e1_value_o,31,0);
    };
    struct {
        VL_OUT(csr_result_e1_wdata_o,31,0);
        VL_OUT(branch_csr_pc_o,31,0);
        VL_OUT(mmu_satp_o,31,0);
        IData/*31:0*/ data_r;
        IData/*31:0*/ misa_w;
        IData/*31:0*/ csr_rdata_w;
        IData/*31:0*/ csr_target_w;
        IData/*31:0*/ interrupt_w;
        IData/*31:0*/ status_reg_w;
        IData/*31:0*/ satp_reg_w;
        IData/*31:0*/ rd_result_e1_q;
        IData/*31:0*/ csr_wdata_e1_q;
        IData/*31:0*/ branch_target_q;
    };

    // INTERNAL VARIABLES
    Vbiriscv_mem_top__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ SUPPORT_MULDIV = 1U;
    static constexpr IData/*31:0*/ SUPPORT_SUPER = 0U;

    // CONSTRUCTORS
    Vbiriscv_mem_top_biriscv_csr__SB0(Vbiriscv_mem_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_mem_top_biriscv_csr__SB0();
    VL_UNCOPYABLE(Vbiriscv_mem_top_biriscv_csr__SB0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
