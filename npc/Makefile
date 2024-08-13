.DEFAULT_GOAL = all

all:
	@echo "Write this Makefile by your self."

# Top module
TOP_MODULE = ysyx_23060201_TOP

# --- 1. Some path variables ---
# Verilog source directory
VERILOG_SRC_DIR = vsrc
VERILOG_SRC = $(wildcard $(VERILOG_SRC_DIR)/*.v)

# Simulation main func source directory
SIM_MAIN_SRC_DIR = csrc
SIM_MAIN_SRC += $(wildcard $(SIM_MAIN_SRC_DIR)/*.cpp)
SIM_MAIN_SRC += $(wildcard $(SIM_MAIN_SRC_DIR)/*.c)

# Object file directory
WORK_DIR = $(shell pwd)
VINC_DIR = $(WORK_DIR)/$(VERILOG_SRC_DIR)/include
VOBJ_DIR = $(WORK_DIR)/obj_dir

# --- 2. Compilation flags ---
VERILATOR := verilator
TOP_FLAGS := --top-module $(TOP_MODULE)
VOBJ_FLAGS := --Mdir $(VOBJ_DIR)
VINC_FLAGS := -I$(VINC_DIR)
VFLAGS := --timing -Wall -cc -build -exe -j 0 -trace 

# --- 3. Linkage flags ---

# --- 4. Target file --- 
TARGET = $(VOBJ_DIR)/V$(TOP_MODULE)
$(TARGET): $(VERILOG_SRC) $(SIM_MAIN_SRC)
	$(VERILATOR) $(TOP_FLAGS) $(VOBJ_FLAGS) $(VINC_FLAGS) $(VFLAGS) \
	$(VERILOG_SRC) $(SIM_MAIN_SRC) \
	-LDFLAGS -"lreadline"

WAVEFILE = $(WORK_DIR)/wave.vcd

BINARY = $(VOBJ_DIR)/V$(TOP_MODULE)

IMG ?=
NPC_EXEC := $(BINARY) $(ARGS) $(IMG)

# --- 6. Target command ---
sim: $(TARGET)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

wave: $(WAVEFILE)
	gtkwave $(WAVEFILE)

run: sim 
	$(call git_commit, "run NPC")
	$(NPC_EXEC) 
	
clean:
	-rm -rf $(VOBJ_DIR) $(WAVEFILE)

.PHONY:
	all sim run wave clean

include ../Makefile
