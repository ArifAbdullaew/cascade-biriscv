#!/bin/bash

set -e  

echo "=== Updating package lists ==="
apt update

echo "=== Installing required packages ==="
apt install -y libelf-dev binutils-dev libsystemc-dev

echo "=== Sourcing environment ==="
source setup_environment.sh

echo "=== Generating verilated files ==="
make -f makefile.generate_verilated

echo "=== Building verilated code ==="
make -f makefile.build_verilated

echo "=== Building SystemC testbench ==="
make -f makefile.build_sysc_tb

echo "=== Running simulation ==="
./build/test.x --elf test.elf

echo "=== Done! ==="
