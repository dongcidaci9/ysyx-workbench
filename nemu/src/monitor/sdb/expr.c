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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

word_t eval(int p, int q, bool *success); 
enum {
  TK_NOTYPE = 256, TK_NUM, TK_HEXNUM, TK_EQ, TK_NEQ, 

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

	{" +", TK_NOTYPE},									// spaces
	{"[0-9]+", TK_NUM},									// one decimal number
	{"^0x[0-9,a-f]+$", TK_HEXNUM},			// one hexadecimal number ??
	{"\\+", '+'},												// plus
	{"\\-", '-'},												// minus
	{"\\*", '*'},												// multiply 
	{"\\/", '/'},												// divide
	{"\\(", '('},												// left parentthesis 
	{"\\)", ')'},												// right parentthesis 
	{"==", TK_EQ},											// equal
	{"!=", TK_NEQ}											// nonequal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, sizeof(error_msg));
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}


typedef struct token {
  int type;
  char str[512];
} Token; // token buffer

static Token tokens[512] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0; // means that could be not used.

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
				if (rules[i].token_type == TK_NOTYPE) break;

				tokens[nr_token].type = rules[i].token_type;

				switch (rules[i].token_type) {
					case TK_NUM: case TK_HEXNUM:
						strncpy(tokens[nr_token].str, substr_start, substr_len);
						tokens[nr_token].str[substr_len] = '\0';
					}
				nr_token ++;
				break;
			}
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p, int q) {
	if (tokens[p].type == '(' && tokens[q].type == ')') return true; 
	return false;
}

int find_op(int p, int q) {
	int ret = -1, par = 0, op = 0;
	for (int i = p; i <= q; i ++) {
		if (tokens[i].type == TK_NUM || tokens[i].type == TK_HEXNUM) {
			continue;	
		}
		if (tokens[i].type == '(') {
			par ++;
		} else if (tokens[i].type == ')') {
			par --;
		} else if (par > 0) {
			continue;
		} else {
			int tmp = 0;
			switch (tokens[i].type) {
				case '*' : case '/': tmp = 1; break;
				case '+' : case '-': tmp = 2; break;
				default: assert(0);
			}
			if (tmp >= op) {
				op = tmp;
				ret = i;
			}
		}
	}
	if (par != 0) return -1;
	printf("op: %d\n", ret);
	return ret;
}

word_t eval(int p, int q, bool *success) {
	*success = true;
	if (p > q) {
    /* Bad expression */
		*success = false;
		return 0;
  } else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
		if (tokens[p].type != TK_NUM && tokens[p].type != TK_HEXNUM) {
			*success = false;
			return 0;
		}
		word_t ret = strtol(tokens[p].str, NULL, 10);
		return ret;
  } else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success);
  } else {
    int op = find_op(p, q);
		if (op < 0) {
			*success = false;
			return 0;
		}

    word_t val1 = eval(p, op - 1, success);
		if (!*success) return 0;
    word_t val2 = eval(op + 1, q, success);
		if (!*success) return 0;

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': if (val2 == 0) {
									*success = false;
									return 0;
								} else {
									return (sword_t)val1 / (sword_t)val2;
								}
      default: assert(0);
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */

  return eval(0, nr_token-1, success);
	
}

void test_expr() {
  FILE *fp = fopen("/home/liangzhongqi/Desktop/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  if (fp == NULL) perror("test_expr error");

  char *e = NULL;
  word_t correct_res;
  size_t len = 0;
  ssize_t read;
  bool *success = false;

  while (true) {
    if(fscanf(fp, "%u ", &correct_res) == -1) break;
    read = getline(&e, &len, fp);
    e[read] = '\0';
    
    word_t res = expr(e, success);
    assert(success);

    if (res != correct_res) {
      puts(e);
      printf("expected: %u, got: %u\n", correct_res, res);
      assert(0);
    }
  }

  fclose(fp);
  if (e) free(e);

  Log("expr test pass");
}
