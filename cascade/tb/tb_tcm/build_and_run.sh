#!/bin/bash

set -e  

echo "\n=== Updating package lists ===\n"
apt update

echo "\n=== Installing required packages ===\n"
apt install -y libelf-dev binutils-dev libsystemc-dev

echo "\n=== Sourcing environment ===\n"
source setup_environment.sh

echo "\n=== Generating verilated files ===\n"
make -f makefile.generate_verilated

echo "\n=== Building verilated code ===\n"
make -f makefile.build_verilated

echo "\n=== Building SystemC testbench ===\n"
make -f makefile.build_sysc_tb

echo "\n=== Running simulation ===\n"
./build/test.x --elf test.elf

echo "\n=== Done! ===\n"
