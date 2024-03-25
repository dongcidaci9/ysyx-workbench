#include <stdlib.h>
#include <stdint.h>
#include <string.h>

static const uint32_t img[] = {
	0b000000000101 00000 000 00001 0010011, // addi x1 = x0 + 5;
	0b000000000001 00000 000 00010 0010011, // addi x2 = x0 + 1;
	0b000000000010 00000 000 00010 0010011, // addi x2 = x0 + 2;
	0b000000000101 00001 000 00010 0010011, // addi x2 = x1 + 4;
	0b000000000111 00001 000 00010 0010011	// addi x2 = x1 + 7;
};

// initialize memory
uint32_t *init_mem(size_t size) {
	uint32_t *memory = (uint32_t *)malloc(size * sizeof(uint32_t));
	memcpy(memory, img, sizeof(img));
	if (memory == NULL) {
		exit(0);
	}
	return memory;
}

uint32_t guest_to_host(uint32_t addr) {
	return addr-0x80000000;
}

uint32_t pmem_read(uint32_t *memory, uint32_t vaddr) {
	uint32_t paddr = guest_to_host(vaddr);
	return memory[paddr/4];
}
