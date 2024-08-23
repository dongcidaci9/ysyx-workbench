#ifndef __CPU_H__
#define __CPU_H__

#include <common.h>
#include <utils.h>

#define NR_GPR 32

typedef struct {
    word_t gpr[NR_GPR];
    addr_t pc;
} riscv32_CPU_state;

typedef riscv32_CPU_state CPU_state;

void cpu_exec(uint64_t n);

void set_npc_state(int state, addr_t pc, int halt_ret);

#define NPCTRAP(thispc, code) set_npc_state(NPC_END, thispc, code)

#endif