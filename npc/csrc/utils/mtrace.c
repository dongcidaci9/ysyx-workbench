#include <common.h>

#ifdef CONFIG_MTRACE
void display_mread(addr_t addr, int len) {
	printf("mem_read @" FMT_PADDR ", len = %d\n", addr, len);
}

void display_mwrite(addr_t addr, int len, word_t data) {
	printf("mem_write @" FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data);
}
#endif
