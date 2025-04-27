FUSESOC_LIBRARY_NAME=cascade-biriscv
FUSESOC_LIBRARY_PATH=./cascade-biriscv/cascade

# Имя дизайна
DESIGN_NAME=biriscv_tiny_soc

.PHONY: run_vanilla_notrace fusesoc_register

run_vanilla_notrace: fusesoc_register
	fusesoc run --target=vanilla_notrace --tool=verilator $(DESIGN_NAME)

fusesoc_register:
	@if ! fusesoc list-cores | grep -q $(DESIGN_NAME); then \
		echo "Registering FuseSoC library $(FUSESOC_LIBRARY_NAME)"; \
		fusesoc library add --sync-type local $(FUSESOC_LIBRARY_NAME) $(FUSESOC_LIBRARY_PATH); \
	else \
		echo "FuseSoC library $(FUSESOC_LIBRARY_NAME) already registered."; \
	fi
