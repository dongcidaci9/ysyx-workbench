#include <utils.h>

extern NPCState npc_state;

void set_npc_state(int state, paddr_t pc, int halt_ret) {
	npc_state.state 	= state;
	npc_state.halt_pc 	= pc;
	npc_state.halt_ret 	= halt_ret;
}