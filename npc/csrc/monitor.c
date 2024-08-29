// getopt
#include <getopt.h>

// include
#include <debug.h>
#include <cpu.h>
#include <macro.h>
#include <sdb.h>

void init_disasm(const char *triple);
void init_elf(const char *elf_file);
void init_difftest(char *ref_so_file, long img_size, int port);

//////////////////////////////////////////////
/*                	Monitor           		*/	
//////////////////////////////////////////////

static uint8_t *mem = NULL;

uint8_t* guest_to_host(addr_t paddr) { return mem + paddr - MBASE; }

void welcome() {
  Log("Tracer: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Instruction Tracer: %s", MUXDEF(CONFIG_ITRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Function Tracer: %s", MUXDEF(CONFIG_FTRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

// default build-in image
static const uint32_t img [] = {
	0x00000297,
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

static inline word_t host_read(void *addr) {
	return *(addr_t *)addr;
}

word_t pmem_read(addr_t raddr) {
	// 总是读取地址为`raddr & ~0x3u`的4字节返回
	word_t addr = raddr & ~0x3u;
	word_t ret = host_read(guest_to_host(addr));

	return ret;
}

/*
extern "C" void pmem_write(addr_t waddr, word_t wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
	word_t data = wdata & wmask;
	memset(guest_to_host(waddr), data, 4);
}
*/

// addr_t* pc_addr = &pc; *pc_addr = pc; 
word_t inst_fetch(addr_t* pc_addr) {
	uint32_t inst = pmem_read(*pc_addr);
	return inst;
} 

static char *log_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;

// command line
static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"batch" , no_argument		, NULL, 'b'},
		{"log"   , required_argument, NULL, 'l'},
		{"elf"   , required_argument, NULL, 'e'},
		{"diff"  , required_argument, NULL, 'd'},
		{"port"  , required_argument, NULL, 'p'},
    	{"help"  , no_argument      , NULL, 'h'},
		{0       , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-bhl:e:d:p:", table, NULL)) != -1) {
		switch (o) {
			case 'b': sdb_set_batch_mode(); break;
			case 'l': log_file = optarg; break;
			case 'e': elf_file = optarg; break;
			case 'd': diff_so_file = optarg; break;
			case 'p': sscanf(optarg, "%d", &difftest_port); break;
			case  1 : img_file = optarg; return 0; // non-option argument
			default:
 				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        		printf("\t-b,--batch           		run with batch mode\n");
        		printf("\t-l,--log=FILE           	output log to FILE\n");
        		printf("\t-e,--elf=FILE           	elf file to be parsed\n");
        		printf("\t-d,--diff=REF_SO          run DiffTest with reference REF_SO\n");
        		printf("\t-p,--port=PORT          	run DiffTest with port PORT\n");
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
	IFDEF(CONFIG_ITRACE, init_disasm("riscv32" "-pc-linux-gnu"));
	IFDEF(CONFIG_FTRACE, init_elf(elf_file));
	IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, img_size, difftest_port));
	welcome();
}

