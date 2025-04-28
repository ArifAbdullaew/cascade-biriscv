# Simple Makefile for biRISCV simulation with Verilator

TOP = Vbiriscv_mem_top

VERILATOR_FLAGS = -cc --exe --build -O3 -Wall --public --trace \
    -CFLAGS "-std=c++17 -O3 -Wall -Wno-unused-variable" \
    -LDFLAGS "-lstdc++"

VERILATOR_SRCS = \
    dv/sv/biriscv_mem_top.sv \
    src/core/riscv_core.v \
    src/core/biriscv_frontend.v \
    src/core/biriscv_mmu.v \
    src/core/biriscv_lsu.v \
    src/core/biriscv_csr.v \
    src/core/biriscv_multiplier.v \
    src/core/biriscv_divider.v \
    src/core/biriscv_issue.v \
    src/core/biriscv_exec.v \
    dv/toplevel.cc

all: sim_biriscv

sim_biriscv:
	verilator $(VERILATOR_FLAGS) $(VERILATOR_SRCS) -o sim_biriscv

clean:
	rm -rf obj_dir sim_biriscv *.vcd

.PHONY: all clean
