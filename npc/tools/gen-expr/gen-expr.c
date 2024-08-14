/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
#define BUF_SIZE 512 * 512 

static char buf[BUF_SIZE] = {};
static char code_buf[BUF_SIZE + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static char *buf_start = NULL;
static char *buf_end = buf + (sizeof(buf)/sizeof(buf[0]));

static uint32_t choose(uint32_t n) {
	return rand() % n;
}

/* static void gen_space() {
	int size = choose(3) + 1;
	if (buf_start < buf_end) {
		int writes = snprintf(buf_start, buf_end-buf_start, "%*s", size, "");
		if (writes > 0) {
			buf_start += writes;
		}
	}
}
*/
static void gen_num() {
	int num = choose(INT8_MAX) + 1;	// INT8_MAX = 127 
	if (buf_start < buf_end) {
		int writes = snprintf(buf_start, buf_end-buf_start, "%d", num);
		if (writes > 0) {
			buf_start += writes;
		}
	}
//	gen_space();
}

static void gen_char(char c) {
	if (buf_start < buf_end) {
		int writes = snprintf(buf_start, buf_end-buf_start, "%c", c);
		if (writes > 0) {
			buf_start += writes;
		}
	}
}

static char ops[] = {'+', '-', '*', '/'};
static void gen_rand_op() {
	int op_index = choose(sizeof(ops));
	char op = ops[op_index];
	gen_char(op);
}

static void gen_rand_expr(int limit, int n) {
	if (n >= limit) return;
  switch (choose(3)) {
    case 0: gen_num(); break;
		case 1: n ++; gen_char('('); gen_num(); gen_rand_op(); gen_num(); gen_char(')'); break;
    default: gen_rand_expr(limit, n); gen_rand_op(); gen_num(); break;
	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
	int limit = 10;
  for (i = 0; i < loop; i ++) {
		buf_start = buf;

    gen_rand_expr(limit, 0);

// write the code_buf
    sprintf(code_buf, code_format, buf);
		
// open file and write
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

// complie the c file
    int ret = system("gcc /tmp/.code.c -Wall -Werror -o /tmp/.expr -w");
    if (ret != 0) {
			i--;
			continue;
		}

// execute the c file
    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

// scanf the result
    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);
    printf("%d %s\n", result, buf);
  }

  return 0;
}
