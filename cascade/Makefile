run_vanilla_notrace:
	verilator --cc --exe --build \
		-I../rtl \
		-I../tb/tb_tcm \
		tb/tb_tcm/main.cpp tb/tb_tcm/riscv_tcm_top_rtl.cpp tb/tb_tcm/elf_load.cpp \
		../rtl/biriscv_tiny_soc.v \
		--top-module biriscv_tiny_soc \
		-CFLAGS "-DVERILATOR"
	cd obj_dir && ./Vbiriscv_tiny_soc +elf=program.elf
