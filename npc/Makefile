VERILOG_SRC_DIR = vsrc
SIM_MAIN_SRC_DIR = csrc
VERILOG_SRC = $(wildcard $(VERILOG_SRC_DIR)/*.v)
SIM_MAIN_SRC = $(wildcard $(SIM_MAIN_SRC_DIR)/*.cpp)
SIM_TARGET_NOTDIR = $(notdir $(VERILOG_SRC))
SIM_TARGET = V$(basename $(SIM_TARGET_NOTDIR))

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall -cc -build -exe -j 0 -trace $(VERILOG_SRC) $(SIM_MAIN_SRC)

run:sim
	./obj_dir/$(SIM_TARGET)

wave:
	gtkwave wave.vcd

clean:
	rm -rf obj_dir wave.vcd

.PHONY:
	all sim run wave clean

include ../Makefile
