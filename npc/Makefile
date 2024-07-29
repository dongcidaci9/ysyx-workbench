.DEFAULT_GOAL = all

all:
	@echo "Write this Makefile by your self."

# Top module
TOP_MODULE = ysyx_23060201_TOP

# Marco define 
__GUEST_ISA__  = riscv32;

# --- 1. Some path variables ---
# Verilog source directory
VERILOG_SRC_DIR = vsrc
VERILOG_SRC = $(wildcard $(VERILOG_SRC_DIR)/*.v)

# Simulation main func source directory
SIM_MAIN_SRC_DIR = csrc
SIM_MAIN_SRC = $(wildcard $(SIM_MAIN_SRC_DIR)/*.cpp)

# Object file directory
WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
VOBJ_DIR = $(WORK_DIR)/obj_dir

# Include directory
VINC_DIR = $(WORK_DIR)/include/verilog

# --- 2. Simulation flags ---
VERILATOR := verilator
TOP_FLAGS := --top-module $(TOP_MODULE)
VFLAGS := --timing -Wall -cc -build -exe -j 0 -trace 
VOBJ_FLAGS := --Mdir $(VOBJ_DIR)
VINC_FLAGS := -I$(VINC_DIR)

# --- 3. Generate target file --- 
TARGET = $(VOBJ_DIR)/V$(TOP_MODULE)
$(TARGET): $(VERILOG_SRC) $(SIM_MAIN_SRC)
	$(VERILATOR) $(TOP_FLAGS) $(VINC_FLAGS) $(VFLAGS) $(VERILOG_SRC) $(SIM_MAIN_SRC) $(VOBJ_FLAGS)

sim: $(TARGET)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

# --- 4. Compilation flags ---
CXX := g++
LD := $(CXX)
CFLAGS := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)

# --- 5. Generate bin file ---  
$(BINARY):: $(OBJS) $(ARCHIVES)
	@echo +LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

# override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
IMG ?=
NPC_EXEC := $(BINARY) $(ARGS) $(IMG)

# --- 6. Target command ---
run: $(NPC_EXEC) sim
	$(call git_commit, "run NPC")

wave:
	gtkwave wave.vcd

clean:
	rm -rf $(VOBJ_DIR) wave.vcd

.PHONY:
	all sim run wave clean

include ../Makefile
