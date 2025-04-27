# Путь к Verilator-сборке
OBJ_DIR = obj_dir
TOP_MODULE = Vbiriscv_tiny_soc
ELF_FILE ?= program.elf  

build:
	verilator --cc --exe --Wno-WIDTH \
		-I./src/top -I./src/core -I./src/icache -I./src/dcache -I./src/tcm \
		tb/tb_verilator_simple/main.cpp tb/tb_verilator_simple/load_elf.cpp \
		biriscv_tiny_soc.v src/top/riscv_tcm_top.v src/top/riscv_top.v \
		src/core/*.v src/dcache/*.v src/icache/*.v src/tcm/*.v \
		--top-module biriscv_tiny_soc --build

run_vanilla_notrace: build
	@echo "Running biRISCV vanilla simulation on $(ELF_FILE)"
	CASCADE_ELF_FILE=$(ELF_FILE) ./$(OBJ_DIR)/$(TOP_MODULE)

run_traced: build
	@echo "Running biRISCV traced simulation on $(ELF_FILE)"
	CASCADE_ELF_FILE=$(ELF_FILE) ./$(OBJ_DIR)/$(TOP_MODULE) +trace

clean:
	rm -rf $(OBJ_DIR)
