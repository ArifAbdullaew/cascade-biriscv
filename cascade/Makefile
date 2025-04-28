# Simple Makefile for biRISCV simulation with Verilator

TOP = Vbiriscv_mem_top

VERILATOR_FLAGS = -cc --exe --build -O3 -Wall --public-flat-rw --trace \
    -Wno-fatal \
    -CFLAGS "-std=c++17 -O3 -Wall -Wno-unused-variable" \
    -LDFLAGS "-lstdc++" \
    -Isrc/core \
    --top-module biriscv_mem_top

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
    src/core/biriscv_defs.v \
    dv/toplevel.cc \
    src/biriscv_ram.sv \
    src/core/biriscv_alu.v \
    src/core/biriscv_decode.v \
    src/core/biriscv_decoder.v \
    src/core/biriscv_csr_regfile.v \
    src/core/biriscv_fetch.v \
    src/core/biriscv_npc.v \
    src/core/biriscv_pipe_ctrl.v \
    src/core/biriscv_regfile.v \
    src/core/biriscv_trace_sim.v \
    src/core/biriscv_xilinx_2r1w.v \
    src/dcache/dcache.v \
    src/dcache/dcache_axi.v \
    src/dcache/dcache_axi_axi.v \
    src/dcache/dcache_core.v \
    src/dcache/dcache_core_data_ram.v \
    src/dcache/dcache_core_tag_ram.v \
    src/dcache/dcache_if_pmem.v \
    src/dcache/dcache_mux.v \
    src/dcache/dcache_pmem_mux.v \
    src/icache/icache.v \
    src/icache/icache_data_ram.v \
    src/icache/icache_tag_ram.v \
    src/tcm/dport_axi.v \
    src/tcm/dport_mux.v \
    src/tcm/tcm_mem.v \
    src/tcm/tcm_mem_pmem.v \
    src/tcm/tcm_mem_ram.v \
    src/top/riscv_tcm_top.v \
    src/top/riscv_top.v

EXEC_FILE = sim_biriscv

all: $(EXEC_FILE)

$(EXEC_FILE):
	verilator $(VERILATOR_FLAGS) $(VERILATOR_SRCS) -o $(EXEC_FILE)

run_vanilla_notrace: $(EXEC_FILE)
	@echo "Running simulation with ELF file: $(ELF_FILE)"
	./$(EXEC_FILE) --elf=$(ELF_FILE)

clean:
	rm -rf obj_dir $(EXEC_FILE) *.vcd

.PHONY: all clean run_vanilla_notrace
