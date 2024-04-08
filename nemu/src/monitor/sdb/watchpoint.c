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
  for (int i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  idle_ = wp_pool; // pointor "idle_" point towards wp_pool 
											 // eg. = wp_pool + 0, = &wp_pool[0]
}
/*
 * not finished
void wp_update() {
	WP *Node_ = NULL;
	if (head) Node_ = head;
	else Node_ = idle_;
	while (Node_) {
		for (int i = 0; i < NR_WP; i ++) {
		Node_->NO = i;
		Node_ = Node_->next;
		}
	}
} 
*/

/* TODO: Implement the functionality of watchpoint */
WP* new_wp() {
	assert(idle_);
	if (!head) head = wp_pool;  
	WP *ret = idle_;
	idle_ = idle_->next;
	return ret;
}

// No always in order (Not finished)
void free_wp(WP *wp) {
  memset(wp->expr, '\0', sizeof(wp->expr));
  wp->new = 0;
  wp->old = 0;

	if (wp->next == idle_) {
		if (wp == head) head = NULL;
	} else {
			WP *Node2_ = head;
			while (Node2_->next != idle_) Node2_ = Node2_->next;
		if (wp == head) {
			head = head->next;
		} else {
			WP *Node1_ = head;
			while (Node1_->next != wp) Node1_ = Node1_->next;
			Node1_->next = wp->next;
		}
			Node2_->next = wp;
	}
	wp->next = idle_;
	idle_ = wp;
}

void wp_watch(char *expr, word_t res) {
	WP *wp = new_wp();
	strcpy(wp->expr, expr);
	wp->old = res;
	printf("\33[0;32mWP%02d: %s\33[0m\t", wp->NO, wp->expr);
}	

void wp_remove(int no) {
	assert(no < NR_WP);
	WP* wp = &wp_pool[no];
	printf("Deleted watchpoint %d: %-20s\n", wp->NO, wp->expr);
	free_wp(wp);
}

void wp_iterate() {
	WP *Node_ = NULL;
	if (head) Node_ = head;
	else Node_ = idle_;
	int i = 0;
	while (Node_) {
		i ++;
		printf("\33[0;32mWP%02d: %-10s\33[0m\t", Node_->NO, Node_->expr);
		Node_ = Node_->next;
		if (i % 3 == 0) printf("\n");
	} 
	printf("\n");
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



