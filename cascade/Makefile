# Путь к Verilator-сборке
OBJ_DIR = obj_dir
TOP_MODULE = Vbiriscv_tiny_soc
ELF_FILE ?= program.elf

BUILD_DIR ?= $(shell pwd)/build

run_vanilla_notrace:
	@echo "Running biRISCV vanilla simulation on $(ELF_FILE)"
	mkdir -p $(BUILD_DIR)/run_vanilla_notrace_0.1/default-verilator
	cp $(OBJ_DIR)/$(TOP_MODULE) $(BUILD_DIR)/run_vanilla_notrace_0.1/default-verilator/
	CASCADE_ELF_FILE=$(ELF_FILE) $(BUILD_DIR)/run_vanilla_notrace_0.1/default-verilator/$(TOP_MODULE)

clean:
	rm -rf $(OBJ_DIR) $(BUILD_DIR)
