.PHONY: build run clean help

CORE_NAME = biriscv_tb
BUILD_DIR = build/$(CORE_NAME)_0/default-verilator
BIN_PATH  = $(BUILD_DIR)/Vbiriscv_tiny_soc
ELF       = /cascade-data/spikespeedcalibration.elf

help:
	@echo "Targets:"
	@echo "  make build     - Build Verilator simulation via FuseSoC"
	@echo "  make run       - Run simulation with $(ELF)"
	@echo "  make clean     - Clean build directory"

build:
	fusesoc run --target=default --setup --build $(CORE_NAME)

run: build
	$(BIN_PATH) -f $(ELF)

clean:
	rm -rf build
