// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top__Syms.h"
#include "Vbiriscv_mem_top_riscv_core.h"

// Parameter definitions for Vbiriscv_mem_top_riscv_core
constexpr SData/*15:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__INITIAL_VALUE;
constexpr SData/*15:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__TAP_VALUE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_BRANCH_PREDICTION;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_MULDIV;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_SUPER;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_MMU;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_DUAL_ISSUE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_LOAD_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_MUL_BYPASS;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::SUPPORT_REGFILE_XILINX;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::EXTRA_DECODE_STAGE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::MEM_CACHE_ADDR_MIN;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::MEM_CACHE_ADDR_MAX;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::NUM_BTB_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::NUM_BTB_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::NUM_BHT_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::NUM_BHT_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::RAS_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::GSHARE_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::BHT_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::NUM_RAS_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::NUM_RAS_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__SUPPORT_BRANCH_PREDICTION;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__SUPPORT_MULDIV;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__SUPPORT_MMU;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__EXTRA_DECODE_STAGE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__NUM_BTB_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__NUM_BTB_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__NUM_BHT_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__NUM_BHT_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__RAS_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__GSHARE_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__BHT_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__NUM_RAS_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__NUM_RAS_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__SUPPORT_BRANCH_PREDICTION;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__NUM_BTB_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__NUM_BTB_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__NUM_BHT_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__NUM_BHT_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__RAS_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__GSHARE_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__BHT_ENABLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__NUM_RAS_ENTRIES;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__NUM_RAS_ENTRIES_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__RAS_INVALID;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__DEPTH;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__ADDR_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__SUPPORT_MULDIV;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__EXTRA_DECODE_STAGE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__WIDTH;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__DEPTH;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ADDR_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__OPC_INFO_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__COUNT_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_frontend__DOT__u_fetch__DOT__SUPPORT_MMU;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__MEM_CACHE_ADDR_MIN;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__MEM_CACHE_ADDR_MAX;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__SUPPORT_MMU;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__STATE_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__STATE_IDLE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__STATE_LEVEL_FIRST;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__STATE_LEVEL_SECOND;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mmu__DOT__STATE_UPDATE;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_lsu__DOT__MEM_CACHE_ADDR_MIN;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_lsu__DOT__MEM_CACHE_ADDR_MAX;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_lsu__DOT__u_lsu_request__DOT__WIDTH;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_lsu__DOT__u_lsu_request__DOT__DEPTH;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_lsu__DOT__u_lsu_request__DOT__ADDR_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_lsu__DOT__u_lsu_request__DOT__COUNT_W;
constexpr IData/*31:0*/ Vbiriscv_mem_top_riscv_core::u_mul__DOT__MULT_STAGES;


void Vbiriscv_mem_top_riscv_core___ctor_var_reset(Vbiriscv_mem_top_riscv_core* vlSelf);

Vbiriscv_mem_top_riscv_core::Vbiriscv_mem_top_riscv_core(Vbiriscv_mem_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbiriscv_mem_top_riscv_core___ctor_var_reset(this);
}

void Vbiriscv_mem_top_riscv_core::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbiriscv_mem_top_riscv_core::~Vbiriscv_mem_top_riscv_core() {
}
