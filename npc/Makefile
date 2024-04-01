VERILOG_SRC_DIR = vsrc
SIM_MAIN_SRC_DIR = csrc
VERILOG_SRC = $(wildcard $(VERILOG_SRC_DIR)/*.v)
SIM_MAIN_SRC = $(wildcard $(SIM_MAIN_SRC_DIR)/*.cpp)
TAG_NOTDIR = $(notdir $(VERILOG_SRC))
TAG = V$(basename $(SIM_TARGET_NOTDIR))

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -t ysyx_23060201_TOP --timing -Wall -cc -build -exe -j 0 -trace $(VERILOG_SRC) $(SIM_MAIN_SRC)
	./obj_dir/Vysyx_23060201_TOP

run:sim wave

wave:
	gtkwave wave.vcd

clean:
	rm -rf obj_dir wave.vcd

.PHONY:
	all sim run wave clean

include ../Makefile
