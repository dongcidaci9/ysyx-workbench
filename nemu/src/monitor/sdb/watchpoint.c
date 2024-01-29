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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {}; // Total 32 include 0-31 
															 // Visable only in this file
static WP *head = NULL, *idle_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  idle_ = wp_pool; // pointor "idle_" point towards wp_pool 
											 // eg. = wp_pool + 0, = &wp_pool[0]
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp() {
	assert(idle_);
	if (!head) head = wp_pool;  
	WP *ret = idle_;
	idle_ = idle_->next;
	return ret;
}

void free_wp(WP *wp) {

	memset(wp->expr, '\0', sizeof(wp->expr));	
	wp->old = 0;
	wp->new = 0;

	WP* Node_ = head;
	WP* Node2_ = head;
	while (Node2_->next != idle_) Node2_ = Node_->next;

	if (wp == head) head = wp->next;
	else while (Node_->next != wp) {
		Node_ = Node_->next;
		Node_->next = wp->next;
	}
		wp->next = idle_;
		Node2_->next = wp;
		idle_ = wp;
}

void wp_watch(char *expr, word_t res) {
	WP* wp = new_wp();
	strcpy(wp->expr, expr);
	wp->old = res;
	printf("Watchpoint %d: %s\n", wp->NO, wp->expr);
}	

void wp_remove(int no) {
	assert(no < NR_WP);
	WP* wp = &wp_pool[no];
	free_wp(wp);
	printf("Having been deleted watchpoint %d: %s\n", wp->NO, wp->expr);
}

void wp_iterate() {
	WP* Node_ = head;
	while (Node_) {
		printf("Watchpoint %d: %s\n", Node_->NO, Node_->expr);
		Node_ = Node_->next;
	}
}

void wp_difftest() {
	WP *Node_ = head;
	while (Node_) {
	bool success;
	word_t new = expr(Node_->expr, &success);
	assert(success);
	if (Node_->old != new) {
		printf("Watchpoint %d: %s\n"
				"Old value = %d\n"
				"New value = %d\n"
				, Node_->NO, Node_->expr, Node_->old, Node_->new);
		Node_->old = new;
	}
	Node_ = Node_->next;
	}
}



