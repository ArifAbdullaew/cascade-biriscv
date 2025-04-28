// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_mem_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_MEM_TOP_BIRISCV_CSR_REGFILE_H_
#define VERILATED_VBIRISCV_MEM_TOP_BIRISCV_CSR_REGFILE_H_  // guard

#include "verilated.h"


class Vbiriscv_mem_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_mem_top_biriscv_csr_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(ext_intr_i,0,0);
        VL_IN8(timer_intr_i,0,0);
        VL_IN8(exception_i,5,0);
        VL_IN8(csr_ren_i,0,0);
        VL_OUT8(csr_branch_o,0,0);
        VL_OUT8(priv_o,1,0);
        CData/*1:0*/ csr_mpriv_q;
        CData/*0:0*/ csr_mtime_ie_q;
        CData/*1:0*/ irq_priv_r;
        CData/*0:0*/ m_enabled_r;
        CData/*0:0*/ s_enabled_r;
        CData/*1:0*/ irq_priv_q;
        CData/*0:0*/ csr_mip_upd_q;
        CData/*0:0*/ buffer_mip_w;
        CData/*1:0*/ csr_mpriv_r;
        CData/*0:0*/ csr_mtime_ie_r;
        CData/*0:0*/ is_exception_w;
        CData/*0:0*/ exception_s_w;
        CData/*0:0*/ branch_r;
        VL_IN16(csr_raddr_i,11,0);
        VL_IN16(csr_waddr_i,11,0);
        VL_IN(cpu_id_i,31,0);
        VL_IN(misa_i,31,0);
        VL_IN(exception_pc_i,31,0);
        VL_IN(exception_addr_i,31,0);
        VL_OUT(csr_rdata_o,31,0);
        VL_IN(csr_wdata_i,31,0);
        VL_OUT(csr_target_o,31,0);
        VL_OUT(status_o,31,0);
        VL_OUT(satp_o,31,0);
        VL_OUT(interrupt_o,31,0);
        IData/*31:0*/ csr_mepc_q;
        IData/*31:0*/ csr_mcause_q;
        IData/*31:0*/ csr_sr_q;
        IData/*31:0*/ csr_mtvec_q;
        IData/*31:0*/ csr_mip_q;
        IData/*31:0*/ csr_mie_q;
        IData/*31:0*/ csr_mcycle_q;
        IData/*31:0*/ csr_mcycle_h_q;
        IData/*31:0*/ csr_mscratch_q;
        IData/*31:0*/ csr_mtval_q;
        IData/*31:0*/ csr_mtimecmp_q;
        IData/*31:0*/ csr_medeleg_q;
        IData/*31:0*/ csr_mideleg_q;
        IData/*31:0*/ csr_sepc_q;
        IData/*31:0*/ csr_stvec_q;
        IData/*31:0*/ csr_scause_q;
        IData/*31:0*/ csr_stval_q;
        IData/*31:0*/ csr_satp_q;
        IData/*31:0*/ csr_sscratch_q;
        IData/*31:0*/ irq_pending_r;
        IData/*31:0*/ irq_masked_r;
        IData/*31:0*/ m_interrupts_r;
        IData/*31:0*/ s_interrupts_r;
        IData/*31:0*/ rdata_r;
        IData/*31:0*/ csr_mepc_r;
        IData/*31:0*/ csr_mcause_r;
        IData/*31:0*/ csr_mtval_r;
        IData/*31:0*/ csr_sr_r;
        IData/*31:0*/ csr_mtvec_r;
        IData/*31:0*/ csr_mip_r;
        IData/*31:0*/ csr_mie_r;
    };
    struct {
        IData/*31:0*/ csr_mcycle_r;
        IData/*31:0*/ csr_mscratch_r;
        IData/*31:0*/ csr_mtimecmp_r;
        IData/*31:0*/ csr_medeleg_r;
        IData/*31:0*/ csr_mideleg_r;
        IData/*31:0*/ csr_mip_next_q;
        IData/*31:0*/ csr_mip_next_r;
        IData/*31:0*/ csr_sepc_r;
        IData/*31:0*/ csr_stvec_r;
        IData/*31:0*/ csr_scause_r;
        IData/*31:0*/ csr_stval_r;
        IData/*31:0*/ csr_satp_r;
        IData/*31:0*/ csr_sscratch_r;
        IData/*31:0*/ branch_target_r;
    };

    // INTERNAL VARIABLES
    Vbiriscv_mem_top__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ SUPPORT_MTIMECMP = 1U;
    static constexpr IData/*31:0*/ SUPPORT_SUPER = 0U;

    // CONSTRUCTORS
    Vbiriscv_mem_top_biriscv_csr_regfile(Vbiriscv_mem_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_mem_top_biriscv_csr_regfile();
    VL_UNCOPYABLE(Vbiriscv_mem_top_biriscv_csr_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_mcycle();
};


#endif  // guard
