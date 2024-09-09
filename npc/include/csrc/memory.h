#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <common.h>

word_t mem_read(addr_t addr);
uint8_t* guest_to_host(addr_t paddr);

void reg_display();

#ifdef CONFIG_MTRACE
void display_mread(addr_t addr, int len, word_t data);
void display_mwrite(addr_t addr, int len, word_t data);
#endif


#endif