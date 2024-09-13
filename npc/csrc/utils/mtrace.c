#include <common.h>

#ifdef CONFIG_MTRACE
void display_mread(paddr_t addr, int len, word_t data) {
	printf("memory read @" FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data);
}

void display_mwrite(paddr_t addr, int len, word_t data) {
	printf("memory write @" FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data);
}
#endif
