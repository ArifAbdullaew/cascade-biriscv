TOP_MODULE = biriscv_mem_top
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj_dir
SIM_BIN = $(BUILD_DIR)/V$(TOP_MODULE)

VERILATOR = verilator
VERILATOR_FLAGS = -cc -O3 --exe --build \
    -Wall -Wno-fatal --trace \
    -CFLAGS "-std=c++17" \
    src/biriscv_mem_top.sv src/biriscv_ram.sv src/core/riscv_core.v \
    dv/main.cpp

build:
	mkdir -p $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) --Mdir $(OBJ_DIR) -o V$(TOP_MODULE)

run_vanilla_notrace: build
	@echo "Running simulation with ELF: $(ELF_FILE)"
	CASCADE_ELF_FILE=$(ELF_FILE) SIMULATION_LENGTH=1000000 ./$(SIM_BIN)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: build run_vanilla_notrace clean
