DESIGN_NAME := biriscv

all: run_vanilla_notrace

corefiles:
	@rm -f $(DESIGN_NAME)_vanilla_notrace.core
	@cp $(DESIGN_NAME)_vanilla_notrace.core.template $(DESIGN_NAME)_vanilla_notrace.core
	@fusesoc library add biriscv $(CURDIR)

run_vanilla_notrace: corefiles
	fusesoc run --target=verilator --tool=verilator $(DESIGN_NAME)_vanilla_notrace
	@mkdir -p build/run_vanilla_notrace_0.1/default-verilator
	@cp build/$(DESIGN_NAME)_vanilla_notrace_0/verilator-verilator/Vbiriscv_tiny_soc build/run_vanilla_notrace_0.1/default-verilator/

clean:
	rm -rf build
