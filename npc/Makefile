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
SIM_MAIN_SRC = $(wildcard $(SIM_MAIN_SRC_DIR)/*.cpp)

# Object file directory
WORK_DIR = $(shell pwd)
VINC_DIR = $(WORK_DIR)/include
VOBJ_DIR = $(WORK_DIR)/obj_dir

# --- 2. Simulation flags ---
VERILATOR := verilator
TOP_FLAGS := --top-module $(TOP_MODULE)
VFLAGS := --timing -Wall -cc -build -exe -j 0 -trace 
VOBJ_FLAGS := --Mdir $(VOBJ_DIR)
VINC_FLAGS := -I$(VINC_DIR)

# --- 3. Target file --- 
TARGET = $(VOBJ_DIR)/V$(TOP_MODULE)
$(TARGET): $(VERILOG_SRC) $(SIM_MAIN_SRC)
	$(VERILATOR) $(TOP_FLAGS) $(VINC_FLAGS) $(VFLAGS) $(VERILOG_SRC) $(SIM_MAIN_SRC) $(VOBJ_FLAGS)

WAVEFILE = $(WORK_DIR)/wave.vcd

# --- 4. Compilation flags ---
NAME = riscv32-npc-interpreter
BUILD_DIR = $(WORK_DIR)/build
CINC_PATH := $(WORK_DIR)/include $(INC_PATH)
OBJ_DIR = $(BUILD_DIR)/obj-$(NAME)
BINARY = $(BUILD_DIR)/$(NAME)

CXX := g++
LD := $(CXX)
INCLUDES = $(addprefix -I, $(CINC_PATH))
CFLAGS := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)
	
# Depencies
-include $(OBJS:.o=.d)

# --- 5. Link and bin file ---  
$(BINARY):: $(OBJS) $(ARCHIVES)
	@echo +LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

IMG ?=
NPC_EXEC := $(ARGS) $(IMG)

# --- 6. Target command ---
app: $(BINARY)
	@echo $(BINARY)

sim: $(TARGET)
	$(VOBJ_DIR)/V$(TOP_MODULE) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

wave: $(WAVEFILE)
	gtkwave $(WAVEFILE)

run: sim
	$(call git_commit, "run NPC")
	$(NPC_EXEC) 
	@echo $(NPC_EXEC)

clean:
	rm -rf $(VOBJ_DIR) wave.vcd

.PHONY:
	all sim run wave clean

include ../Makefile
