// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_mem_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_MEM_TOP_BIRISCV_MEM_TOP_H_
#define VERILATED_VBIRISCV_MEM_TOP_BIRISCV_MEM_TOP_H_  // guard

#include "verilated.h"
class Vbiriscv_mem_top_riscv_core;


class Vbiriscv_mem_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_mem_top_biriscv_mem_top final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_mem_top_riscv_core* u_core;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_OUT8(mem_req_o,0,0);
    VL_OUT8(mem_we_o,0,0);
    VL_OUT8(mem_strb_o,3,0);
    CData/*0:0*/ mem_ready;
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_IN(mem_rdata_i,31,0);
    QData/*63:0*/ mem_inst_rdata_i;

    // INTERNAL VARIABLES
    Vbiriscv_mem_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_mem_top_biriscv_mem_top(Vbiriscv_mem_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_mem_top_biriscv_mem_top();
    VL_UNCOPYABLE(Vbiriscv_mem_top_biriscv_mem_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
