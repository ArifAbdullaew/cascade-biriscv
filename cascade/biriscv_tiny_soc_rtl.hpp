#ifndef _BIRISCV_TINY_SOC_RTL_H_
#define _BIRISCV_TINY_SOC_RTL_H_

#include "Vbiriscv_tiny_soc.h"
#include "Vbiriscv_tiny_soc__Syms.h"
#include "Vbiriscv_tiny_soc___024root.h"

class biriscv_tiny_soc_rtl {
public:
    Vbiriscv_tiny_soc* v;

    biriscv_tiny_soc_rtl(Vbiriscv_tiny_soc* core) {
        v = core;
    }

    uint32_t get_register(int i) {
        return v->vlSymsp->TOP__biriscv_tiny_soc__u_core__u_issue__u_regfile.get_register(i);
    }
};

#endif
