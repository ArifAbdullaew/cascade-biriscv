// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbiriscv_mem_top.h for the primary calling header

#include "Vbiriscv_mem_top__pch.h"
#include "Vbiriscv_mem_top_biriscv_csr_regfile.h"

uint32_t Vbiriscv_mem_top_biriscv_csr_regfile::get_mcycle() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile::get_mcycle\n"); );
    VL_OUT(get_mcycle__Vfuncrtn,31,0);
    // Body
    get_mcycle__Vfuncrtn = this->csr_mcycle_q;
    // Final
    return (get_mcycle__Vfuncrtn);
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_mcycle_r = ((IData)(1U) + vlSelfRef.csr_mcycle_q);
    vlSelfRef.irq_pending_r = (vlSelfRef.csr_mip_q 
                               & vlSelfRef.csr_mie_q);
    vlSelfRef.irq_masked_r = ((8U & vlSelfRef.csr_sr_q)
                               ? vlSelfRef.irq_pending_r
                               : 0U);
    vlSelfRef.status_o = vlSelfRef.csr_sr_q;
    vlSelfRef.satp_o = vlSelfRef.csr_satp_q;
    vlSelfRef.priv_o = vlSelfRef.csr_mpriv_q;
    vlSelfRef.interrupt_o = vlSelfRef.irq_masked_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___ico_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.is_exception_w = (0x10U == (0x30U & (IData)(vlSelfRef.exception_i)));
    vlSelfRef.csr_mscratch_r = vlSelfRef.csr_mscratch_q;
    vlSelfRef.csr_mideleg_r = vlSelfRef.csr_mideleg_q;
    vlSelfRef.csr_mtvec_r = vlSelfRef.csr_mtvec_q;
    vlSelfRef.csr_stvec_r = vlSelfRef.csr_stvec_q;
    vlSelfRef.csr_mie_r = vlSelfRef.csr_mie_q;
    vlSelfRef.csr_satp_r = vlSelfRef.csr_satp_q;
    vlSelfRef.csr_sscratch_r = vlSelfRef.csr_sscratch_q;
    vlSelfRef.csr_mtimecmp_r = vlSelfRef.csr_mtimecmp_q;
    vlSelfRef.csr_medeleg_r = vlSelfRef.csr_medeleg_q;
    vlSelfRef.csr_mtime_ie_r = vlSelfRef.csr_mtime_ie_q;
    if ((0x20U != (0x30U & (IData)(vlSelfRef.exception_i)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSelfRef.exception_i)) 
                      & (0x33U >= (IData)(vlSelfRef.exception_i)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.is_exception_w) 
                          & (IData)(vlSelfRef.exception_s_w))))) {
                if ((1U & (~ (IData)(vlSelfRef.is_exception_w)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mscratch_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                    vlSelfRef.csr_mideleg_r 
                                                                        = 
                                                                        (0xffffU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_medeleg_r 
                                                                        = 
                                                                        (0xffffU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                    vlSelfRef.csr_mtvec_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mie_r 
                                                                        = 
                                                                        (0xaaaU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_mie_r 
                                                                    = 
                                                                    ((0xfffffdddU 
                                                                      & vlSelfRef.csr_mie_r) 
                                                                     | (0x222U 
                                                                        & vlSelfRef.csr_wdata_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                          >> 9U)))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                    vlSelfRef.csr_stvec_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_sscratch_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x80U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_satp_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x400U & (IData)(vlSelfRef.csr_waddr_i))) {
                            if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((0x80U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mtimecmp_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                    vlSelfRef.csr_mtime_ie_r = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.csr_mepc_r = vlSelfRef.csr_mepc_q;
    vlSelfRef.csr_mcause_r = vlSelfRef.csr_mcause_q;
    vlSelfRef.csr_sepc_r = vlSelfRef.csr_sepc_q;
    vlSelfRef.csr_scause_r = vlSelfRef.csr_scause_q;
    vlSelfRef.csr_mtval_r = vlSelfRef.csr_mtval_q;
    vlSelfRef.csr_stval_r = vlSelfRef.csr_stval_q;
    vlSelfRef.branch_r = 0U;
    vlSelfRef.csr_sr_r = vlSelfRef.csr_sr_q;
    vlSelfRef.csr_mpriv_r = vlSelfRef.csr_mpriv_q;
    if ((0x20U == (0x30U & (IData)(vlSelfRef.exception_i)))) {
        if ((3U == (IData)(vlSelfRef.irq_priv_q))) {
            vlSelfRef.csr_mepc_r = vlSelfRef.exception_pc_i;
            if ((8U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_mcause_r = 0x80000003U;
            } else if ((0x80U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_mcause_r = 0x80000007U;
            } else if ((0x800U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_mcause_r = 0x8000000bU;
            }
            vlSelfRef.csr_mtval_r = 0U;
            vlSelfRef.csr_sr_r = ((0xffffff7fU & vlSelfRef.csr_sr_r) 
                                  | (0x80U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 3U;
            vlSelfRef.csr_sr_r = ((0xffffe7ffU & vlSelfRef.csr_sr_r) 
                                  | ((IData)(vlSelfRef.csr_mpriv_q) 
                                     << 0xbU));
            vlSelfRef.csr_sr_r = (0xfffffff7U & vlSelfRef.csr_sr_r);
        } else {
            vlSelfRef.csr_sr_r = ((0xffffffdfU & vlSelfRef.csr_sr_r) 
                                  | (0x20U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 1U;
            vlSelfRef.csr_sr_r = ((0xfffffeffU & vlSelfRef.csr_sr_r) 
                                  | ((1U == (IData)(vlSelfRef.csr_mpriv_q)) 
                                     << 8U));
            vlSelfRef.csr_sr_r = (0xfffffffdU & vlSelfRef.csr_sr_r);
        }
        if ((3U != (IData)(vlSelfRef.irq_priv_q))) {
            vlSelfRef.csr_sepc_r = vlSelfRef.exception_pc_i;
            if ((2U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_scause_r = 0x80000001U;
            } else if ((0x20U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_scause_r = 0x80000005U;
            } else if ((0x200U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_scause_r = 0x80000009U;
            }
            vlSelfRef.csr_stval_r = 0U;
        }
    } else {
        if ((1U & (~ ((0x30U <= (IData)(vlSelfRef.exception_i)) 
                      & (0x33U >= (IData)(vlSelfRef.exception_i)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.is_exception_w) 
                          & (IData)(vlSelfRef.exception_s_w))))) {
                if (vlSelfRef.is_exception_w) {
                    vlSelfRef.csr_mepc_r = vlSelfRef.exception_pc_i;
                    vlSelfRef.csr_mcause_r = (0xfU 
                                              & (IData)(vlSelfRef.exception_i));
                    vlSelfRef.csr_mtval_r = ((0x20U 
                                              & (IData)(vlSelfRef.exception_i))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelfRef.exception_i))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.exception_i))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.exception_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? vlSelfRef.exception_addr_i
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? vlSelfRef.exception_addr_i
                                                      : vlSelfRef.exception_pc_i))
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.exception_i))
                                                    ? vlSelfRef.exception_addr_i
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? 0U
                                                      : vlSelfRef.exception_addr_i)
                                                     : vlSelfRef.exception_pc_i)))
                                               : 0U));
                } else if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                     >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_mepc_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_mcause_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSelfRef.csr_wdata_i);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_mtval_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.is_exception_w) 
                 & (IData)(vlSelfRef.exception_s_w))) {
                vlSelfRef.csr_sepc_r = vlSelfRef.exception_pc_i;
                vlSelfRef.csr_scause_r = (0xfU & (IData)(vlSelfRef.exception_i));
                vlSelfRef.csr_stval_r = ((0x20U & (IData)(vlSelfRef.exception_i))
                                          ? 0U : ((0x10U 
                                                   & (IData)(vlSelfRef.exception_i))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.exception_i))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.exception_i))
                                                       ? vlSelfRef.exception_addr_i
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.exception_i))
                                                       ? vlSelfRef.exception_addr_i
                                                       : vlSelfRef.exception_pc_i))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? vlSelfRef.exception_addr_i
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.exception_i))
                                                       ? 0U
                                                       : vlSelfRef.exception_addr_i)
                                                      : vlSelfRef.exception_pc_i)))
                                                   : 0U));
            } else if ((1U & (~ (IData)(vlSelfRef.is_exception_w)))) {
                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_sepc_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_scause_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSelfRef.csr_wdata_i);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_stval_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0x30U <= (IData)(vlSelfRef.exception_i)) 
             & (0x33U >= (IData)(vlSelfRef.exception_i)))) {
            if ((3U == (3U & (IData)(vlSelfRef.exception_i)))) {
                vlSelfRef.csr_mpriv_r = (3U & (vlSelfRef.csr_sr_r 
                                               >> 0xbU));
                vlSelfRef.csr_sr_r = ((0xfffffff7U 
                                       & vlSelfRef.csr_sr_r) 
                                      | (8U & (vlSelfRef.csr_sr_r 
                                               >> 4U)));
                vlSelfRef.csr_sr_r = (0x80U | vlSelfRef.csr_sr_r);
                vlSelfRef.csr_sr_r = (0xffffe7ffU & vlSelfRef.csr_sr_r);
            } else {
                vlSelfRef.csr_mpriv_r = ((0x100U & vlSelfRef.csr_sr_r)
                                          ? 1U : 0U);
                vlSelfRef.csr_sr_r = ((0xfffffffdU 
                                       & vlSelfRef.csr_sr_r) 
                                      | (2U & (vlSelfRef.csr_sr_r 
                                               >> 4U)));
                vlSelfRef.csr_sr_r = (0x20U | vlSelfRef.csr_sr_r);
                vlSelfRef.csr_sr_r = (0xfffffeffU & vlSelfRef.csr_sr_r);
            }
        } else if (((IData)(vlSelfRef.is_exception_w) 
                    & (IData)(vlSelfRef.exception_s_w))) {
            vlSelfRef.csr_sr_r = ((0xffffffdfU & vlSelfRef.csr_sr_r) 
                                  | (0x20U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 1U;
            vlSelfRef.csr_sr_r = ((0xfffffeffU & vlSelfRef.csr_sr_r) 
                                  | ((1U == (IData)(vlSelfRef.csr_mpriv_q)) 
                                     << 8U));
            vlSelfRef.csr_sr_r = (0xfffffffdU & vlSelfRef.csr_sr_r);
        } else if (vlSelfRef.is_exception_w) {
            vlSelfRef.csr_sr_r = ((0xffffff7fU & vlSelfRef.csr_sr_r) 
                                  | (0x80U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 3U;
            vlSelfRef.csr_sr_r = ((0xffffe7ffU & vlSelfRef.csr_sr_r) 
                                  | ((IData)(vlSelfRef.csr_mpriv_q) 
                                     << 0xbU));
            vlSelfRef.csr_sr_r = (0xfffffff7U & vlSelfRef.csr_sr_r);
        } else if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                             >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                    if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                        vlSelfRef.csr_sr_r 
                                                            = vlSelfRef.csr_wdata_i;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                    vlSelfRef.csr_sr_r 
                                                        = 
                                                        ((0xfffbfeccU 
                                                          & vlSelfRef.csr_sr_r) 
                                                         | (0x40133U 
                                                            & vlSelfRef.csr_wdata_i));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.csr_mip_next_r = vlSelfRef.csr_mip_next_q;
    vlSelfRef.csr_mip_r = vlSelfRef.csr_mip_q;
    if ((0x20U != (0x30U & (IData)(vlSelfRef.exception_i)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSelfRef.exception_i)) 
                      & (0x33U >= (IData)(vlSelfRef.exception_i)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.is_exception_w) 
                          & (IData)(vlSelfRef.exception_s_w))))) {
                if ((1U & (~ (IData)(vlSelfRef.is_exception_w)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mip_r 
                                                                        = 
                                                                        (0xaaaU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_mip_r 
                                                                    = 
                                                                    ((0xfffffdddU 
                                                                      & vlSelfRef.csr_mip_r) 
                                                                     | (0x222U 
                                                                        & vlSelfRef.csr_wdata_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.ext_intr_i) & (vlSelfRef.csr_mideleg_q 
                                          >> 0xbU))) {
        vlSelfRef.csr_mip_next_r = (0x200U | vlSelfRef.csr_mip_next_r);
    }
    if (((IData)(vlSelfRef.ext_intr_i) & (~ (vlSelfRef.csr_mideleg_q 
                                             >> 0xbU)))) {
        vlSelfRef.csr_mip_next_r = (0x800U | vlSelfRef.csr_mip_next_r);
    }
    if (((IData)(vlSelfRef.timer_intr_i) & (vlSelfRef.csr_mideleg_q 
                                            >> 7U))) {
        vlSelfRef.csr_mip_next_r = (0x20U | vlSelfRef.csr_mip_next_r);
    }
    if (((IData)(vlSelfRef.timer_intr_i) & (~ (vlSelfRef.csr_mideleg_q 
                                               >> 7U)))) {
        vlSelfRef.csr_mip_next_r = (0x80U | vlSelfRef.csr_mip_next_r);
    }
    if ((vlSelfRef.csr_mcycle_q == vlSelfRef.csr_mtimecmp_q)) {
        vlSelfRef.csr_mtime_ie_r = 0U;
        vlSelfRef.csr_mip_next_r = ((0x80U & vlSelfRef.csr_mideleg_q)
                                     ? ((0xffffffdfU 
                                         & vlSelfRef.csr_mip_next_r) 
                                        | ((IData)(vlSelfRef.csr_mtime_ie_q) 
                                           << 5U)) : 
                                    ((0xffffff7fU & vlSelfRef.csr_mip_next_r) 
                                     | ((IData)(vlSelfRef.csr_mtime_ie_q) 
                                        << 7U)));
    }
    vlSelfRef.csr_mip_r = (vlSelfRef.csr_mip_r | vlSelfRef.csr_mip_next_r);
    vlSelfRef.branch_target_r = 0U;
    if ((0x20U == (IData)(vlSelfRef.exception_i))) {
        vlSelfRef.branch_r = 1U;
        vlSelfRef.branch_target_r = ((3U == (IData)(vlSelfRef.irq_priv_q))
                                      ? vlSelfRef.csr_mtvec_q
                                      : vlSelfRef.csr_stvec_q);
    } else if (((0x30U <= (IData)(vlSelfRef.exception_i)) 
                & (0x33U >= (IData)(vlSelfRef.exception_i)))) {
        vlSelfRef.branch_r = 1U;
        vlSelfRef.branch_target_r = ((3U == (3U & (IData)(vlSelfRef.exception_i)))
                                      ? vlSelfRef.csr_mepc_q
                                      : vlSelfRef.csr_sepc_q);
    } else if (((IData)(vlSelfRef.is_exception_w) & (IData)(vlSelfRef.exception_s_w))) {
        vlSelfRef.branch_r = 1U;
        vlSelfRef.branch_target_r = vlSelfRef.csr_stvec_q;
    } else if (vlSelfRef.is_exception_w) {
        vlSelfRef.branch_r = 1U;
        vlSelfRef.branch_target_r = vlSelfRef.csr_mtvec_q;
    } else if ((0x34U == (IData)(vlSelfRef.exception_i))) {
        vlSelfRef.branch_r = 1U;
        vlSelfRef.branch_target_r = ((IData)(4U) + vlSelfRef.exception_pc_i);
    }
    vlSelfRef.csr_branch_o = vlSelfRef.branch_r;
    vlSelfRef.csr_target_o = vlSelfRef.branch_target_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___ico_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rdata_r = 0U;
    vlSelfRef.rdata_r = ((0x800U & (IData)(vlSelfRef.csr_raddr_i))
                          ? ((0x400U & (IData)(vlSelfRef.csr_raddr_i))
                              ? ((0x200U & (IData)(vlSelfRef.csr_raddr_i))
                                  ? ((0x100U & (IData)(vlSelfRef.csr_raddr_i))
                                      ? ((0x80U & (IData)(vlSelfRef.csr_raddr_i))
                                          ? 0U : ((0x40U 
                                                   & (IData)(vlSelfRef.csr_raddr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.csr_raddr_i))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.csr_raddr_i))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.csr_raddr_i))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.csr_raddr_i))
                                                         ? 0U
                                                         : vlSelfRef.cpu_id_i))
                                                       : 0U))
                                                     : 0U))))
                                      : 0U) : ((0x100U 
                                                & (IData)(vlSelfRef.csr_raddr_i))
                                                ? 0U
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.csr_raddr_i))
                                                    ? 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.csr_raddr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.csr_raddr_i))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.csr_raddr_i))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.csr_raddr_i))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.csr_raddr_i))
                                                           ? vlSelfRef.csr_mcycle_h_q
                                                           : 0U)))))))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.csr_raddr_i))
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.csr_raddr_i))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.csr_raddr_i))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.csr_raddr_i))
                                                          ? 0U
                                                          : vlSelfRef.csr_mcycle_q)))))))))
                              : 0U) : ((0x400U & (IData)(vlSelfRef.csr_raddr_i))
                                        ? ((0x200U 
                                            & (IData)(vlSelfRef.csr_raddr_i))
                                            ? ((0x100U 
                                                & (IData)(vlSelfRef.csr_raddr_i))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.csr_raddr_i))
                                                    ? 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.csr_raddr_i))
                                                     ? 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.csr_raddr_i))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.csr_raddr_i))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.csr_raddr_i))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.csr_raddr_i))
                                                           ? 0U
                                                           : vlSelfRef.csr_mtimecmp_q))))))
                                                     : 0U)
                                                    : 0U)
                                                : 0U)
                                            : 0U) : 
                                       ((0x200U & (IData)(vlSelfRef.csr_raddr_i))
                                         ? ((0x100U 
                                             & (IData)(vlSelfRef.csr_raddr_i))
                                             ? ((0x80U 
                                                 & (IData)(vlSelfRef.csr_raddr_i))
                                                 ? 0U
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelfRef.csr_raddr_i))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.csr_raddr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.csr_raddr_i))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.csr_raddr_i))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.csr_raddr_i))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? 0U
                                                        : 
                                                       (0xaaaU 
                                                        & vlSelfRef.csr_mip_q)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? vlSelfRef.csr_mtval_q
                                                        : 
                                                       (0x8000000fU 
                                                        & vlSelfRef.csr_mcause_q))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? vlSelfRef.csr_mepc_q
                                                        : vlSelfRef.csr_mscratch_q))))))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.csr_raddr_i))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.csr_raddr_i))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.csr_raddr_i))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.csr_raddr_i))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? vlSelfRef.csr_mtvec_q
                                                        : 
                                                       (0xaaaU 
                                                        & vlSelfRef.csr_mie_q)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.csr_raddr_i))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.csr_raddr_i))
                                                        ? vlSelfRef.misa_i
                                                        : vlSelfRef.csr_sr_q))))))))
                                             : 0U) : 0U)));
    vlSelfRef.buffer_mip_w = (((IData)(vlSelfRef.csr_ren_i) 
                               & ((0x344U == (IData)(vlSelfRef.csr_raddr_i)) 
                                  | (0x144U == (IData)(vlSelfRef.csr_raddr_i)))) 
                              | (IData)(vlSelfRef.csr_mip_upd_q));
    vlSelfRef.csr_rdata_o = vlSelfRef.rdata_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__csr_mcycle_q;
    __Vdly__csr_mcycle_q = 0;
    IData/*31:0*/ __Vdly__csr_mcycle_h_q;
    __Vdly__csr_mcycle_h_q = 0;
    // Body
    __Vdly__csr_mcycle_h_q = vlSelfRef.csr_mcycle_h_q;
    __Vdly__csr_mcycle_q = vlSelfRef.csr_mcycle_q;
    if (vlSelfRef.rst_i) {
        vlSelfRef.irq_priv_q = 3U;
        vlSelfRef.csr_mip_upd_q = 0U;
    } else {
        if ((0U != vlSelfRef.irq_masked_r)) {
            vlSelfRef.irq_priv_q = vlSelfRef.irq_priv_r;
        }
        if (((IData)(vlSelfRef.csr_ren_i) & ((0x344U 
                                              == (IData)(vlSelfRef.csr_raddr_i)) 
                                             | (0x144U 
                                                == (IData)(vlSelfRef.csr_raddr_i))))) {
            vlSelfRef.csr_mip_upd_q = 1U;
        } else if ((((0x344U == (IData)(vlSelfRef.csr_waddr_i)) 
                     | (0x144U == (IData)(vlSelfRef.csr_waddr_i))) 
                    | (0U != (IData)(vlSelfRef.exception_i)))) {
            vlSelfRef.csr_mip_upd_q = 0U;
        }
    }
    if (vlSelfRef.rst_i) {
        vlSelfRef.csr_mepc_q = 0U;
        vlSelfRef.csr_sr_q = 0U;
        vlSelfRef.csr_mcause_q = 0U;
        vlSelfRef.csr_mtval_q = 0U;
        vlSelfRef.csr_mtvec_q = 0U;
        vlSelfRef.csr_mip_q = 0U;
        vlSelfRef.csr_mie_q = 0U;
        vlSelfRef.csr_mpriv_q = 3U;
        __Vdly__csr_mcycle_q = 0U;
        __Vdly__csr_mcycle_h_q = 0U;
        vlSelfRef.csr_mscratch_q = 0U;
        vlSelfRef.csr_mtimecmp_q = 0U;
        vlSelfRef.csr_mtime_ie_q = 0U;
        vlSelfRef.csr_medeleg_q = 0U;
        vlSelfRef.csr_mideleg_q = 0U;
        vlSelfRef.csr_sepc_q = 0U;
        vlSelfRef.csr_stvec_q = 0U;
        vlSelfRef.csr_scause_q = 0U;
        vlSelfRef.csr_stval_q = 0U;
        vlSelfRef.csr_satp_q = 0U;
        vlSelfRef.csr_sscratch_q = 0U;
        vlSelfRef.csr_mip_next_q = 0U;
    } else {
        if ((0xffffffffU == vlSelfRef.csr_mcycle_q)) {
            __Vdly__csr_mcycle_h_q = ((IData)(1U) + vlSelfRef.csr_mcycle_h_q);
        }
        if ((((0x7b2U == (IData)(vlSelfRef.csr_waddr_i)) 
              | (0x8b2U == (IData)(vlSelfRef.csr_waddr_i))) 
             & (~ (IData)((0U != (IData)(vlSelfRef.exception_i)))))) {
            if (VL_UNLIKELY((0U == (0xff000000U & vlSelfRef.csr_wdata_i)))) {
                VL_FINISH_MT("src/core/biriscv_csr_regfile.v", 551, "");
                VL_FINISH_MT("src/core/biriscv_csr_regfile.v", 552, "");
            } else if (VL_UNLIKELY((0x1000000U == (0xff000000U 
                                                   & vlSelfRef.csr_wdata_i)))) {
                VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.csr_wdata_i));
            }
        }
        vlSelfRef.csr_mepc_q = vlSelfRef.csr_mepc_r;
        vlSelfRef.csr_sr_q = vlSelfRef.csr_sr_r;
        vlSelfRef.csr_mcause_q = vlSelfRef.csr_mcause_r;
        vlSelfRef.csr_mtval_q = vlSelfRef.csr_mtval_r;
        vlSelfRef.csr_mtvec_q = vlSelfRef.csr_mtvec_r;
        vlSelfRef.csr_mip_q = vlSelfRef.csr_mip_r;
        vlSelfRef.csr_mie_q = vlSelfRef.csr_mie_r;
        vlSelfRef.csr_mpriv_q = 3U;
        vlSelfRef.csr_mscratch_q = vlSelfRef.csr_mscratch_r;
        vlSelfRef.csr_mtimecmp_q = vlSelfRef.csr_mtimecmp_r;
        vlSelfRef.csr_mtime_ie_q = vlSelfRef.csr_mtime_ie_r;
        vlSelfRef.csr_medeleg_q = 0U;
        vlSelfRef.csr_mideleg_q = 0U;
        vlSelfRef.csr_sepc_q = 0U;
        vlSelfRef.csr_stvec_q = 0U;
        vlSelfRef.csr_scause_q = 0U;
        vlSelfRef.csr_stval_q = 0U;
        vlSelfRef.csr_satp_q = 0U;
        vlSelfRef.csr_sscratch_q = 0U;
        vlSelfRef.csr_mip_next_q = ((IData)(vlSelfRef.buffer_mip_w)
                                     ? vlSelfRef.csr_mip_next_r
                                     : 0U);
        __Vdly__csr_mcycle_q = vlSelfRef.csr_mcycle_r;
    }
    vlSelfRef.csr_mcycle_h_q = __Vdly__csr_mcycle_h_q;
    vlSelfRef.csr_mcycle_q = __Vdly__csr_mcycle_q;
    vlSelfRef.satp_o = vlSelfRef.csr_satp_q;
    vlSelfRef.csr_mcycle_r = ((IData)(1U) + vlSelfRef.csr_mcycle_q);
    vlSelfRef.priv_o = vlSelfRef.csr_mpriv_q;
    vlSelfRef.irq_pending_r = (vlSelfRef.csr_mip_q 
                               & vlSelfRef.csr_mie_q);
    vlSelfRef.irq_masked_r = ((8U & vlSelfRef.csr_sr_q)
                               ? vlSelfRef.irq_pending_r
                               : 0U);
    vlSelfRef.status_o = vlSelfRef.csr_sr_q;
    vlSelfRef.interrupt_o = vlSelfRef.irq_masked_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___nba_sequent__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.is_exception_w = (0x10U == (0x30U & (IData)(vlSelfRef.exception_i)));
    vlSelfRef.branch_r = 0U;
    if ((0x20U == (IData)(vlSelfRef.exception_i))) {
        vlSelfRef.branch_r = 1U;
    } else if (((0x30U <= (IData)(vlSelfRef.exception_i)) 
                & (0x33U >= (IData)(vlSelfRef.exception_i)))) {
        vlSelfRef.branch_r = 1U;
    } else if (((IData)(vlSelfRef.is_exception_w) & (IData)(vlSelfRef.exception_s_w))) {
        vlSelfRef.branch_r = 1U;
    } else if (vlSelfRef.is_exception_w) {
        vlSelfRef.branch_r = 1U;
    } else if ((0x34U == (IData)(vlSelfRef.exception_i))) {
        vlSelfRef.branch_r = 1U;
    }
    vlSelfRef.csr_branch_o = vlSelfRef.branch_r;
}

VL_INLINE_OPT void Vbiriscv_mem_top_biriscv_csr_regfile___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0(Vbiriscv_mem_top_biriscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbiriscv_mem_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vbiriscv_mem_top_biriscv_csr_regfile___nba_comb__TOP__biriscv_mem_top__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_mscratch_r = vlSelfRef.csr_mscratch_q;
    vlSelfRef.csr_mideleg_r = vlSelfRef.csr_mideleg_q;
    vlSelfRef.csr_mtvec_r = vlSelfRef.csr_mtvec_q;
    vlSelfRef.csr_stvec_r = vlSelfRef.csr_stvec_q;
    vlSelfRef.csr_mie_r = vlSelfRef.csr_mie_q;
    vlSelfRef.csr_satp_r = vlSelfRef.csr_satp_q;
    vlSelfRef.csr_sscratch_r = vlSelfRef.csr_sscratch_q;
    vlSelfRef.csr_mtimecmp_r = vlSelfRef.csr_mtimecmp_q;
    vlSelfRef.csr_medeleg_r = vlSelfRef.csr_medeleg_q;
    vlSelfRef.csr_mtime_ie_r = vlSelfRef.csr_mtime_ie_q;
    if ((0x20U != (0x30U & (IData)(vlSelfRef.exception_i)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSelfRef.exception_i)) 
                      & (0x33U >= (IData)(vlSelfRef.exception_i)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.is_exception_w) 
                          & (IData)(vlSelfRef.exception_s_w))))) {
                if ((1U & (~ (IData)(vlSelfRef.is_exception_w)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mscratch_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                    vlSelfRef.csr_mideleg_r 
                                                                        = 
                                                                        (0xffffU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_medeleg_r 
                                                                        = 
                                                                        (0xffffU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                    vlSelfRef.csr_mtvec_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mie_r 
                                                                        = 
                                                                        (0xaaaU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_mie_r 
                                                                    = 
                                                                    ((0xfffffdddU 
                                                                      & vlSelfRef.csr_mie_r) 
                                                                     | (0x222U 
                                                                        & vlSelfRef.csr_wdata_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                          >> 9U)))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                    vlSelfRef.csr_stvec_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_sscratch_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x80U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_satp_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x400U & (IData)(vlSelfRef.csr_waddr_i))) {
                            if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((0x80U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mtimecmp_r 
                                                                        = vlSelfRef.csr_wdata_i;
                                                                    vlSelfRef.csr_mtime_ie_r = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.csr_mepc_r = vlSelfRef.csr_mepc_q;
    vlSelfRef.csr_mcause_r = vlSelfRef.csr_mcause_q;
    vlSelfRef.csr_sepc_r = vlSelfRef.csr_sepc_q;
    vlSelfRef.csr_scause_r = vlSelfRef.csr_scause_q;
    vlSelfRef.csr_mtval_r = vlSelfRef.csr_mtval_q;
    vlSelfRef.csr_stval_r = vlSelfRef.csr_stval_q;
    vlSelfRef.csr_sr_r = vlSelfRef.csr_sr_q;
    vlSelfRef.csr_mpriv_r = vlSelfRef.csr_mpriv_q;
    if ((0x20U == (0x30U & (IData)(vlSelfRef.exception_i)))) {
        if ((3U == (IData)(vlSelfRef.irq_priv_q))) {
            vlSelfRef.csr_mepc_r = vlSelfRef.exception_pc_i;
            if ((8U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_mcause_r = 0x80000003U;
            } else if ((0x80U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_mcause_r = 0x80000007U;
            } else if ((0x800U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_mcause_r = 0x8000000bU;
            }
            vlSelfRef.csr_mtval_r = 0U;
            vlSelfRef.csr_sr_r = ((0xffffff7fU & vlSelfRef.csr_sr_r) 
                                  | (0x80U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 3U;
            vlSelfRef.csr_sr_r = ((0xffffe7ffU & vlSelfRef.csr_sr_r) 
                                  | ((IData)(vlSelfRef.csr_mpriv_q) 
                                     << 0xbU));
            vlSelfRef.csr_sr_r = (0xfffffff7U & vlSelfRef.csr_sr_r);
        } else {
            vlSelfRef.csr_sr_r = ((0xffffffdfU & vlSelfRef.csr_sr_r) 
                                  | (0x20U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 1U;
            vlSelfRef.csr_sr_r = ((0xfffffeffU & vlSelfRef.csr_sr_r) 
                                  | ((1U == (IData)(vlSelfRef.csr_mpriv_q)) 
                                     << 8U));
            vlSelfRef.csr_sr_r = (0xfffffffdU & vlSelfRef.csr_sr_r);
        }
        if ((3U != (IData)(vlSelfRef.irq_priv_q))) {
            vlSelfRef.csr_sepc_r = vlSelfRef.exception_pc_i;
            if ((2U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_scause_r = 0x80000001U;
            } else if ((0x20U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_scause_r = 0x80000005U;
            } else if ((0x200U & vlSelfRef.irq_masked_r)) {
                vlSelfRef.csr_scause_r = 0x80000009U;
            }
            vlSelfRef.csr_stval_r = 0U;
        }
    } else {
        if ((1U & (~ ((0x30U <= (IData)(vlSelfRef.exception_i)) 
                      & (0x33U >= (IData)(vlSelfRef.exception_i)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.is_exception_w) 
                          & (IData)(vlSelfRef.exception_s_w))))) {
                if (vlSelfRef.is_exception_w) {
                    vlSelfRef.csr_mepc_r = vlSelfRef.exception_pc_i;
                    vlSelfRef.csr_mcause_r = (0xfU 
                                              & (IData)(vlSelfRef.exception_i));
                    vlSelfRef.csr_mtval_r = ((0x20U 
                                              & (IData)(vlSelfRef.exception_i))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelfRef.exception_i))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.exception_i))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.exception_i))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? vlSelfRef.exception_addr_i
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? vlSelfRef.exception_addr_i
                                                      : vlSelfRef.exception_pc_i))
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.exception_i))
                                                    ? vlSelfRef.exception_addr_i
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? 0U
                                                      : vlSelfRef.exception_addr_i)
                                                     : vlSelfRef.exception_pc_i)))
                                               : 0U));
                } else if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                     >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_mepc_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_mcause_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSelfRef.csr_wdata_i);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_mtval_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.is_exception_w) 
                 & (IData)(vlSelfRef.exception_s_w))) {
                vlSelfRef.csr_sepc_r = vlSelfRef.exception_pc_i;
                vlSelfRef.csr_scause_r = (0xfU & (IData)(vlSelfRef.exception_i));
                vlSelfRef.csr_stval_r = ((0x20U & (IData)(vlSelfRef.exception_i))
                                          ? 0U : ((0x10U 
                                                   & (IData)(vlSelfRef.exception_i))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.exception_i))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.exception_i))
                                                       ? vlSelfRef.exception_addr_i
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.exception_i))
                                                       ? vlSelfRef.exception_addr_i
                                                       : vlSelfRef.exception_pc_i))
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.exception_i))
                                                     ? vlSelfRef.exception_addr_i
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.exception_i))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.exception_i))
                                                       ? 0U
                                                       : vlSelfRef.exception_addr_i)
                                                      : vlSelfRef.exception_pc_i)))
                                                   : 0U));
            } else if ((1U & (~ (IData)(vlSelfRef.is_exception_w)))) {
                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_sepc_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_scause_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSelfRef.csr_wdata_i);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.csr_waddr_i))) {
                                                                vlSelfRef.csr_stval_r 
                                                                    = vlSelfRef.csr_wdata_i;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0x30U <= (IData)(vlSelfRef.exception_i)) 
             & (0x33U >= (IData)(vlSelfRef.exception_i)))) {
            if ((3U == (3U & (IData)(vlSelfRef.exception_i)))) {
                vlSelfRef.csr_mpriv_r = (3U & (vlSelfRef.csr_sr_r 
                                               >> 0xbU));
                vlSelfRef.csr_sr_r = ((0xfffffff7U 
                                       & vlSelfRef.csr_sr_r) 
                                      | (8U & (vlSelfRef.csr_sr_r 
                                               >> 4U)));
                vlSelfRef.csr_sr_r = (0x80U | vlSelfRef.csr_sr_r);
                vlSelfRef.csr_sr_r = (0xffffe7ffU & vlSelfRef.csr_sr_r);
            } else {
                vlSelfRef.csr_mpriv_r = ((0x100U & vlSelfRef.csr_sr_r)
                                          ? 1U : 0U);
                vlSelfRef.csr_sr_r = ((0xfffffffdU 
                                       & vlSelfRef.csr_sr_r) 
                                      | (2U & (vlSelfRef.csr_sr_r 
                                               >> 4U)));
                vlSelfRef.csr_sr_r = (0x20U | vlSelfRef.csr_sr_r);
                vlSelfRef.csr_sr_r = (0xfffffeffU & vlSelfRef.csr_sr_r);
            }
        } else if (((IData)(vlSelfRef.is_exception_w) 
                    & (IData)(vlSelfRef.exception_s_w))) {
            vlSelfRef.csr_sr_r = ((0xffffffdfU & vlSelfRef.csr_sr_r) 
                                  | (0x20U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 1U;
            vlSelfRef.csr_sr_r = ((0xfffffeffU & vlSelfRef.csr_sr_r) 
                                  | ((1U == (IData)(vlSelfRef.csr_mpriv_q)) 
                                     << 8U));
            vlSelfRef.csr_sr_r = (0xfffffffdU & vlSelfRef.csr_sr_r);
        } else if (vlSelfRef.is_exception_w) {
            vlSelfRef.csr_sr_r = ((0xffffff7fU & vlSelfRef.csr_sr_r) 
                                  | (0x80U & (vlSelfRef.csr_sr_r 
                                              << 4U)));
            vlSelfRef.csr_mpriv_r = 3U;
            vlSelfRef.csr_sr_r = ((0xffffe7ffU & vlSelfRef.csr_sr_r) 
                                  | ((IData)(vlSelfRef.csr_mpriv_q) 
                                     << 0xbU));
            vlSelfRef.csr_sr_r = (0xfffffff7U & vlSelfRef.csr_sr_r);
        } else if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                             >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                    if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                        vlSelfRef.csr_sr_r 
                                                            = vlSelfRef.csr_wdata_i;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                    vlSelfRef.csr_sr_r 
                                                        = 
                                                        ((0xfffbfeccU 
                                                          & vlSelfRef.csr_sr_r) 
                                                         | (0x40133U 
                                                            & vlSelfRef.csr_wdata_i));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.csr_mip_next_r = vlSelfRef.csr_mip_next_q;
    vlSelfRef.csr_mip_r = vlSelfRef.csr_mip_q;
    if ((0x20U != (0x30U & (IData)(vlSelfRef.exception_i)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSelfRef.exception_i)) 
                      & (0x33U >= (IData)(vlSelfRef.exception_i)))))) {
            if ((1U & (~ ((IData)(vlSelfRef.is_exception_w) 
                          & (IData)(vlSelfRef.exception_s_w))))) {
                if ((1U & (~ (IData)(vlSelfRef.is_exception_w)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.csr_waddr_i) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                    vlSelfRef.csr_mip_r 
                                                                        = 
                                                                        (0xaaaU 
                                                                         & vlSelfRef.csr_wdata_i);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.csr_waddr_i)))) {
                                                                vlSelfRef.csr_mip_r 
                                                                    = 
                                                                    ((0xfffffdddU 
                                                                      & vlSelfRef.csr_mip_r) 
                                                                     | (0x222U 
                                                                        & vlSelfRef.csr_wdata_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.ext_intr_i) & (vlSelfRef.csr_mideleg_q 
                                          >> 0xbU))) {
        vlSelfRef.csr_mip_next_r = (0x200U | vlSelfRef.csr_mip_next_r);
    }
    if (((IData)(vlSelfRef.ext_intr_i) & (~ (vlSelfRef.csr_mideleg_q 
                                             >> 0xbU)))) {
        vlSelfRef.csr_mip_next_r = (0x800U | vlSelfRef.csr_mip_next_r);
    }
    if (((IData)(vlSelfRef.timer_intr_i) & (vlSelfRef.csr_mideleg_q 
                                            >> 7U))) {
        vlSelfRef.csr_mip_next_r = (0x20U | vlSelfRef.csr_mip_next_r);
    }
    if (((IData)(vlSelfRef.timer_intr_i) & (~ (vlSelfRef.csr_mideleg_q 
                                               >> 7U)))) {
        vlSelfRef.csr_mip_next_r = (0x80U | vlSelfRef.csr_mip_next_r);
    }
    if ((vlSelfRef.csr_mcycle_q == vlSelfRef.csr_mtimecmp_q)) {
        vlSelfRef.csr_mtime_ie_r = 0U;
        vlSelfRef.csr_mip_next_r = ((0x80U & vlSelfRef.csr_mideleg_q)
                                     ? ((0xffffffdfU 
                                         & vlSelfRef.csr_mip_next_r) 
                                        | ((IData)(vlSelfRef.csr_mtime_ie_q) 
                                           << 5U)) : 
                                    ((0xffffff7fU & vlSelfRef.csr_mip_next_r) 
                                     | ((IData)(vlSelfRef.csr_mtime_ie_q) 
                                        << 7U)));
    }
    vlSelfRef.csr_mip_r = (vlSelfRef.csr_mip_r | vlSelfRef.csr_mip_next_r);
    vlSelfRef.branch_target_r = 0U;
    if ((0x20U == (IData)(vlSelfRef.exception_i))) {
        vlSelfRef.branch_target_r = ((3U == (IData)(vlSelfRef.irq_priv_q))
                                      ? vlSelfRef.csr_mtvec_q
                                      : vlSelfRef.csr_stvec_q);
    } else if (((0x30U <= (IData)(vlSelfRef.exception_i)) 
                & (0x33U >= (IData)(vlSelfRef.exception_i)))) {
        vlSelfRef.branch_target_r = ((3U == (3U & (IData)(vlSelfRef.exception_i)))
                                      ? vlSelfRef.csr_mepc_q
                                      : vlSelfRef.csr_sepc_q);
    } else if (((IData)(vlSelfRef.is_exception_w) & (IData)(vlSelfRef.exception_s_w))) {
        vlSelfRef.branch_target_r = vlSelfRef.csr_stvec_q;
    } else if (vlSelfRef.is_exception_w) {
        vlSelfRef.branch_target_r = vlSelfRef.csr_mtvec_q;
    } else if ((0x34U == (IData)(vlSelfRef.exception_i))) {
        vlSelfRef.branch_target_r = ((IData)(4U) + vlSelfRef.exception_pc_i);
    }
    vlSelfRef.csr_target_o = vlSelfRef.branch_target_r;
}
