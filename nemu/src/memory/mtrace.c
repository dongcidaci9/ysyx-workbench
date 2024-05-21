#include <common.h>

#ifdef CONFIG_MTRACE
void display_pread(paddr_t addr, int len) {
	printf("pread @" FMT_PADDR ", len = %d\n", addr, len);
}

void display_pwrite(paddr_t addr, int len, word_t data) {
	printf("pwrite @" FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data);
}
#endif
