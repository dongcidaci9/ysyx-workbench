#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

word_t mem_read(paddr_t addr);
uint8_t* guest_to_host(paddr_t paddr);

void reg_display();

#ifdef CONFIG_ITRACE
void display_inst();
#endif

#ifdef CONFIG_MTRACE
void display_mread(paddr_t addr, int len, word_t data);
void display_mwrite(paddr_t addr, int len, word_t data);
#endif


#endif