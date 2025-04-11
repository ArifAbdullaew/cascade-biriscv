all: run_vanilla_notrace

corefiles:
	@rm -f run_*.core
	@cp run_vanilla_notrace.core.template run_vanilla_notrace.core

run_vanilla_notrace: corefiles
	fusesoc run --target=verilator --tool=verilator biriscv_vanilla_notrace

clean:
	rm -rf build
