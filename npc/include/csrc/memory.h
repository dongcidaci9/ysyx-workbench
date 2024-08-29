#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <common.h>

word_t pmem_read(addr_t addr);
uint8_t* guest_to_host(addr_t paddr);

void reg_display();

#endif