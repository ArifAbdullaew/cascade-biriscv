run_vanilla_notrace:
	verilator --cc --exe --build \
	  -I./src/top \
	  -I./src/core \
	  -I./src/icache \
	  -I./src/dcache \
	  -I./src/tcm \
	  tb/tb_tcm/main.cpp \
	  tb/tb_tcm/elf_load.cpp \
	  tb/tb_tcm/riscv_tcm_top_rtl.cpp \
	  biriscv_tiny_soc.v \
	  src/top/riscv_tcm_top.v \
	  src/top/riscv_top.v \
	  src/core/biriscv_alu.v \
	  src/core/biriscv_csr.v \
	  src/core/biriscv_csr_regfile.v \
	  src/core/biriscv_decode.v \
	  src/core/biriscv_decoder.v \
	  src/core/biriscv_defs.v \
	  src/core/biriscv_divider.v \
	  src/core/biriscv_exec.v \
	  src/core/biriscv_fetch.v \
	  src/core/biriscv_frontend.v \
	  src/core/biriscv_issue.v \
	  src/core/biriscv_lsu.v \
	  src/core/biriscv_mmu.v \
	  src/core/biriscv_multiplier.v \
	  src/core/biriscv_npc.v \
	  src/core/biriscv_pipe_ctrl.v \
	  src/core/biriscv_regfile.v \
	  src/core/biriscv_trace_sim.v \
	  src/core/biriscv_xilinx_2r1w.v \
	  src/core/riscv_core.v \
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
	  -CFLAGS "-O2 -DVL_USER_FINISH -I./tb/tb_tcm" \
	  -LDFLAGS "-lelf -lbfd" \
	  --top-module biriscv_tiny_soc \
	  --trace

	cd obj_dir && ./Vbiriscv_tiny_soc +elf=program.elf
