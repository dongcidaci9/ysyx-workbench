// getopt
#include <getopt.h>

// include
#include "include/debug.h"
#include "include/cpu.h"
#include "include/macro.h"
#include "include/sdb.h"

//////////////////////////////////////////////
/*                	Monitor           		*/	
//////////////////////////////////////////////

static uint8_t *mem = NULL;

uint8_t* guest_to_host(addr_t paddr) { return mem + paddr - MBASE; }

void welcome() {
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

// default build-in image
static const uint32_t img [] = {
	0x00000287,
	0x00028823,
	0x0102c503,
	0x00100073,
	0xdeadbeef,
};

void init_isa() {
	memcpy(guest_to_host(MBASE), img, sizeof(img));
}

// initialize memory
void init_mem() {
	mem = (uint8_t*)malloc(MSIZE);
}

static inline word_t mem_read(void *addr) {
	return *(addr_t *)addr;
}

word_t inst_fetch(addr_t* pc) {
	uint32_t inst = mem_read(guest_to_host(*pc));
	return inst;
} 

static char *log_file = NULL;
static char *img_file = NULL;

// command line
static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		// {"batch" , no_argument		, NULL, 'b'},
		{"log"   , required_argument, NULL, 'l'},
    	{"help"  , no_argument      , NULL, 'h'},
		{0       , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-hl:", table, NULL)) != -1) {
		switch (o) {
			// case 'b': sdb_set_batch_mode(); break;
			case 'l': log_file = optarg; break;
			case  1 : img_file = optarg; return 0; // non-option argument
			default:
 				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        		printf("\t-l,--log=FILE           output log to FILE\n");
        		printf("\n");
        		exit(0);
		}
	}
	return 0;
}

static long load_img() {
	if (img_file == NULL) {
		Log("No image is given. Use the default build-in image.");
		return 4096;
	}

	FILE *fp = fopen(img_file, "rb");
	// assert(fp, "Can not open '%s'", img_file);

	fseek(fp, 0, SEEK_END); // *fp seek to the end of this file
	long size = ftell(fp);

	Log("The image is %s, size = %ld", img_file, size);

	fseek(fp, 0, SEEK_SET); // *fp seek to the start of this file
	int ret = fread(guest_to_host(MLEFT), size, 1, fp); // *fp read the data and save it to host
	assert(ret == 1);

	fclose(fp);
	return size;
}

void init_monitor(int argc, char *argv[]) {
	parse_args(argc, argv);
	// init_log(log_file);
	init_mem();
	init_isa();
	long img_size = load_img();
	welcome();
}

