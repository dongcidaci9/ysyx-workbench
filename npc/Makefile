VERILOG_SRC_DIR = vsrc
SIM_MAIN_SRC_DIR = csrc
VERILOG_SRCS = $(wildcard $(VERILOG_SRC_DIR)/*.v)
SIM_MAIN_SRCS = $(wildcard $(SIM_MAIN_SRC_DIR)/*.cpp)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall -cc -build -exe -j 0 -trace $(VERILOG_SRCS) $(SIM_MAIN_SRCS)

run:
	./obj_dir/Vexample

wave:
	gtkwave wave.vcd

clean:
	rm -rf obj_dir wave.vcd

.PHONY:
	all sim run wave clean

include ../Makefile
