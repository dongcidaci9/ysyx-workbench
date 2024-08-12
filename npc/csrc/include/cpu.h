#ifndef __CPU_H__
#define __CPU_H__

#include "common.h"
#include "utils.h"

void cpu_exec(uint64_t n);

void set_npc_state(int state, addr_t pc, int halt_ret);

#define NPCTRAP(thispc, code) set_npc_state(NPC_END, thispc, code)

#endif