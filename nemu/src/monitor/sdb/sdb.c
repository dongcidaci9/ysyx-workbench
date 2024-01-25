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
#include <memory/paddr.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void test_expr();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT;
	return -1;
}

static int cmd_x(char *args);

static int cmd_info(char *args);

static int cmd_si(char *args);

static int cmd_p(char *args);

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Program pauses execution after executing N instructions in a single step, when N is not given, the default is 1", cmd_si },
  { "info", "Print registers/watchpoints status", cmd_info },
  { "x", "As starting memory address, output N consecutive 4 bytes in hexadecimal form", cmd_x },
  { "p", "Find the value of the expression EXPR", cmd_p }

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_x(char *args) {
	char *arg = strtok(NULL, " ");

	if (arg == NULL) {
		printf("Usage:\nx N EXPR\n");
		return 0;
	}

	char *baseaddr = strtok(NULL, " ");

	int len = 0;
	paddr_t addr = 0;
	sscanf(arg, "%d", &len);
	sscanf(baseaddr, "%x", &addr);

	int i = 0;
	for (i = 0; i < len ; i ++) {
		printf("%#x\n", paddr_read(addr, 4));
		addr = addr + 4;
	}
	return 0;
}

static int cmd_info(char *args) {
	char *arg = strtok(NULL, " ");
	
	if (arg == NULL) {
		printf("Usage:\nr - Print register status\nw- Print watchpoints status\n");	
	} else {
		if (strcmp(arg, "r") == 0) { 
			isa_reg_display(); 
		} else if (strcmp(arg, "w") == 0) {
			//undefined	
		} else { 
			printf("ERROR: undefined command.\n"); 
		}
	}
	
	return 0;
}

static int cmd_si(char *args) {
	char *arg = strtok(NULL, " ");
	int step;
	
	if (arg == NULL) step = 1;
	else sscanf(arg, "%d", &step);
	
	cpu_exec(step);

	return 0;
}

static int cmd_p(char *args) {
	bool success = true;
	word_t res = expr(args, &success);
	if (!success) {
		printf("Invalid expression\n");
	} else {
		printf("%u\n", res);
	}
	return 0;
}

static int cmd_help(char *args) {
	char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();
	/* Test mathmatic expression calculations. */
	test_expr();
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
