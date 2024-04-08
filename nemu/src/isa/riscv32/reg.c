/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define REG_NUM ARRLEN(regs)

void isa_reg_display() {
	int i;
	printf("\033[0;32mGPR info:\33[0m\n");
	for (i = 0; i < REG_NUM; i ++) {
		printf("\033[0;32m%d \033[0m%s: %#-10lx\t", i, regs[i], cpu.gpr[i]);
		if((i + 1) % 3 == 0) {
			printf("\n");
		}
	}
	printf("\n");
}

word_t isa_reg_str2val(const char *s, bool *success) {
	int ret;
	
	int i;
	for (i = 0; i < REG_NUM; i ++) {
		if (strcmp(s, regs[i]) == 0) {
			ret = cpu.gpr[i];
			return ret; 
		}
	}
	return 0;
}
