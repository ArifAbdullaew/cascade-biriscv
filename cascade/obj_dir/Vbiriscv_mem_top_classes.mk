# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vbiriscv_mem_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vbiriscv_mem_top \
	Vbiriscv_mem_top___024root__DepSet_h2ee4f114__0 \
	Vbiriscv_mem_top___024root__DepSet_hd4d9a3f0__0 \
	Vbiriscv_mem_top_biriscv_mem_top__DepSet_h2d49e5b8__0 \
	Vbiriscv_mem_top_riscv_core__DepSet_h9333b82d__0 \
	Vbiriscv_mem_top_riscv_core__DepSet_h2786dab7__0 \
	Vbiriscv_mem_top_biriscv_issue__DepSet_hf56a7a25__0 \
	Vbiriscv_mem_top_biriscv_issue__DepSet_hf56a7a25__1 \
	Vbiriscv_mem_top_biriscv_issue__DepSet_h895f18bf__0 \
	Vbiriscv_mem_top_biriscv_csr__SB0__DepSet_h731ce2b2__0 \
	Vbiriscv_mem_top_biriscv_csr__SB0__DepSet_h07b1b152__0 \
	Vbiriscv_mem_top_biriscv_csr_regfile__DepSet_he9966d3c__0 \
	Vbiriscv_mem_top_biriscv_regfile__DepSet_hc7d6aeff__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vbiriscv_mem_top___024root__Slow \
	Vbiriscv_mem_top___024root__DepSet_h2ee4f114__0__Slow \
	Vbiriscv_mem_top___024root__DepSet_hd4d9a3f0__0__Slow \
	Vbiriscv_mem_top_biriscv_mem_top__Slow \
	Vbiriscv_mem_top_biriscv_mem_top__DepSet_h2d49e5b8__0__Slow \
	Vbiriscv_mem_top_biriscv_mem_top__DepSet_hd17cb04c__0__Slow \
	Vbiriscv_mem_top_riscv_core__Slow \
	Vbiriscv_mem_top_riscv_core__DepSet_h2786dab7__0__Slow \
	Vbiriscv_mem_top_biriscv_issue__Slow \
	Vbiriscv_mem_top_biriscv_issue__DepSet_h895f18bf__0__Slow \
	Vbiriscv_mem_top_biriscv_csr__SB0__Slow \
	Vbiriscv_mem_top_biriscv_csr__SB0__DepSet_h07b1b152__0__Slow \
	Vbiriscv_mem_top_biriscv_csr_regfile__Slow \
	Vbiriscv_mem_top_biriscv_csr_regfile__DepSet_he9966d3c__0__Slow \
	Vbiriscv_mem_top_biriscv_regfile__Slow \
	Vbiriscv_mem_top_biriscv_regfile__DepSet_hc7d6aeff__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vbiriscv_mem_top__Dpi \
	Vbiriscv_mem_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vbiriscv_mem_top__Syms \
	Vbiriscv_mem_top__Trace__0__Slow \
	Vbiriscv_mem_top__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
