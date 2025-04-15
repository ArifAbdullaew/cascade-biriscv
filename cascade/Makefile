DESIGN_NAME := biriscv

all: run_vanilla_notrace

corefiles:
	@rm -f $(DESIGN_NAME)_vanilla_notrace.core
	@cp $(DESIGN_NAME)_vanilla_notrace.core.template $(DESIGN_NAME)_vanilla_notrace.core
	@fusesoc library add biriscv $(CURDIR)

prepare_main:
	@mkdir -p src/$(DESIGN_NAME)_vanilla_notrace_0
	@cp -u main.cpp src/$(DESIGN_NAME)_vanilla_notrace_0/
	@cp -u biriscv_tiny_soc_rtl.h src/$(DESIGN_NAME)_vanilla_notrace_0/

run_vanilla_notrace: corefiles prepare_main
	fusesoc run --target=verilator --tool=verilator $(DESIGN_NAME)_vanilla_notrace
	@mkdir -p build/run_vanilla_notrace_0.1/default-verilator
	@cp build/$(DESIGN_NAME)_vanilla_notrace_0/verilator-verilator/Vbiriscv_tiny_soc build/run_vanilla_notrace_0.1/default-verilator/

clean:
	rm -rf build
