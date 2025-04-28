// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbiriscv_mem_top.h for the primary calling header

#ifndef VERILATED_VBIRISCV_MEM_TOP___024ROOT_H_
#define VERILATED_VBIRISCV_MEM_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vbiriscv_mem_top_biriscv_mem_top;


class Vbiriscv_mem_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbiriscv_mem_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vbiriscv_mem_top_biriscv_mem_top* biriscv_mem_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_OUT8(mem_req_o,0,0);
    VL_OUT8(mem_we_o,0,0);
    VL_OUT8(mem_strb_o,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__1;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_lsu__DOT__complete_ok_e2_w__2;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__biriscv_mem_top__u_core__u_issue__u_regfile__clk_i__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_IN(mem_rdata_i,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<10> __VactTriggered;
    VlTriggerVec<10> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbiriscv_mem_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbiriscv_mem_top___024root(Vbiriscv_mem_top__Syms* symsp, const char* v__name);
    ~Vbiriscv_mem_top___024root();
    VL_UNCOPYABLE(Vbiriscv_mem_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
