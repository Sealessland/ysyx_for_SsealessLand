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
#include<common.h>
#include "sdb.h"
#include <stdbool.h>
#define NR_WP 32

static bool success = true;
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  uint32_t value;
  char expr[32];

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {

  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  head = NULL;
  free_ = wp_pool;
}
WP *new_wp(){
  if(free_==NULL){
    printf("No enough watchpoint!\n");
    assert(0);
  }
  WP *wp=free_;
  free_=free_->next;
  wp->next=head;
  head= wp ;
  return wp ;
  
}
void print_wp(){
  printf("printf_wp is running");
  WP *p=head;
  while(p!=NULL){
    printf("watchpoint %d: %s=%d\n",p->NO,p->expr,p->value);
    p=p->next;
  }
}
void check_watchpoint(){
  //printf("check point is running");
WP *wp=head;
   if(wp==NULL){
     return;
   }else if (wp->value!=expr(wp->expr,&success)){
     printf("watchpoint %d: %s\n",wp->NO,wp->expr);
     printf("Old value: %d\n",wp->value);
     printf("New value: %d\n",expr(wp->expr,&success));
     wp->value=expr(wp->expr,&success);
     nemu_state.state=NEMU_STOP;
   }
    wp=wp->next;
}



void delete_WP(int target){
  WP *p = head, *prev = NULL;
  while(p != NULL){
    if(p->NO == target){
      if(p == head){
        head = p->next;
      }else{
        prev->next = p->next;
      }
      p->next = free_;
      free_ = p;
      return;
    }
    prev = p;
    p = p->next;
  }
  printf("Watchpoint %d not found\n", target);
}
/* TODO: Implement the functionality of watchpoint */
