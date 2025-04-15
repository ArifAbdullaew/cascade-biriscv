all: build-verilated run

generate-verilated:
	$(MAKE) -C tb/tb_tcm -f makefile.generate_verilated

build-verilated: generate-verilated
	$(MAKE) -C tb/tb_tcm -f makefile.build_verilated

run: build-verilated
	./tb/tb_tcm/verilator_tb --elf tb/tb_tcm/test.elf --cycles 1000

clean:
	rm -rf tb/tb_tcm/verilator_out verilator_tb
