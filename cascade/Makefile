OBJ_DIR = obj_dir
TOP_MODULE = Vbiriscv_tiny_soc
BUILD_DIR ?= $(shell pwd)/build
SIM_DIR = $(BUILD_DIR)/run_vanilla_notrace_0.1/default-verilator

CXX = g++
CXXFLAGS = -O2 -Wall -Wno-unused-variable -std=c++17
LDFLAGS = 
INCLUDES = -I$(OBJ_DIR) -I/usr/share/verilator/include -I/usr/share/verilator/include/vltstd
LIBS = -lverilated

ELF_FILE ?= program.elf

all: $(SIM_DIR)/$(TOP_MODULE)

$(SIM_DIR)/$(TOP_MODULE): $(OBJ_DIR)/$(TOP_MODULE).cpp main.cpp
	@echo "Building Verilator simulation binary..."
	mkdir -p $(SIM_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ main.cpp $(OBJ_DIR)/$(TOP_MODULE)__*.cpp $(OBJ_DIR)/$(TOP_MODULE).cpp $(LIBS) $(LDFLAGS)

run_vanilla_notrace: all
	@echo "Running biRISCV vanilla simulation on $(ELF_FILE)"
	CASCADE_ELF_FILE=$(ELF_FILE) $(SIM_DIR)/$(TOP_MODULE)

clean:
	rm -rf $(OBJ_DIR) $(BUILD_DIR)

.PHONY: all clean run_vanilla_notrace
