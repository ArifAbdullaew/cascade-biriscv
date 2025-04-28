// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBIRISCV_MEM_TOP__SYMS_H_
#define VERILATED_VBIRISCV_MEM_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbiriscv_mem_top.h"

// INCLUDE MODULE CLASSES
#include "Vbiriscv_mem_top___024root.h"
#include "Vbiriscv_mem_top_biriscv_mem_top.h"
#include "Vbiriscv_mem_top_riscv_core.h"
#include "Vbiriscv_mem_top_biriscv_issue.h"
#include "Vbiriscv_mem_top_biriscv_csr__SB0.h"
#include "Vbiriscv_mem_top_biriscv_csr_regfile.h"
#include "Vbiriscv_mem_top_biriscv_regfile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbiriscv_mem_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbiriscv_mem_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbiriscv_mem_top___024root     TOP;
    Vbiriscv_mem_top_biriscv_mem_top TOP__biriscv_mem_top;
    Vbiriscv_mem_top_riscv_core    TOP__biriscv_mem_top__u_core;
    Vbiriscv_mem_top_biriscv_csr__SB0 TOP__biriscv_mem_top__u_core__u_csr;
    Vbiriscv_mem_top_biriscv_csr_regfile TOP__biriscv_mem_top__u_core__u_csr__u_csrfile;
    Vbiriscv_mem_top_biriscv_issue TOP__biriscv_mem_top__u_core__u_issue;
    Vbiriscv_mem_top_biriscv_regfile TOP__biriscv_mem_top__u_core__u_issue__u_regfile;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_biriscv_mem_top;
    VerilatedScope __Vscope_biriscv_mem_top__u_core;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_csr;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_csr__u_csrfile;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_div;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_exec0;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_exec0__u_alu;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_exec1;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_exec1__u_alu;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_decode;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_decode__genblk1__u_dec0;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_decode__genblk1__u_dec1;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_decode__genblk1__u_fifo;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_fetch;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_npc;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_frontend__u_npc__BRANCH_PREDICTION__u_lru;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe0_ctrl;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe0_ctrl__u_trace_d;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe0_ctrl__u_trace_wb;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe0_dec0_verif;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe0_dec1_verif;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe1_ctrl;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe1_ctrl__u_trace_d;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_pipe1_ctrl__u_trace_wb;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_regfile;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_issue__u_regfile__REGFILE;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_lsu;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_lsu__u_lsu_request;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_mmu;
    VerilatedScope __Vscope_biriscv_mem_top__u_core__u_mul;

    // CONSTRUCTORS
    Vbiriscv_mem_top__Syms(VerilatedContext* contextp, const char* namep, Vbiriscv_mem_top* modelp);
    ~Vbiriscv_mem_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
