# Simple Makefile for biRISCV simulation with Verilator

TOP = Vbiriscv_mem_top

VERILATOR_FLAGS = -cc --exe --build -O3 -Wall --public --trace \
    -CFLAGS "-std=c++17 -O3 -Wall -Wno-unused-variable" \
    -LDFLAGS "-lstdc++"

VERILATOR_SRCS = \
    dv/sv/biriscv_mem_top.sv \
    src/core/riscv_core.v \
    dv/sv/toplevel.cc

all: sim_biriscv

sim_biriscv:
	verilator $(VERILATOR_FLAGS) $(VERILATOR_SRCS) -o sim_biriscv

clean:
	rm -rf obj_dir sim_biriscv *.vcd

.PHONY: all clean
