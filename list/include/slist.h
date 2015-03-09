 
 
/**
 * @file slist.h
 * @date 2015/03/04 17:59:03
 * @brief 
 *  
 **/

#ifndef  __SLIST_H_
#define  __SLIST_H_
#include <cstdlib>
#include <cstdio>
#include <cassert>

typedef struct taglistnode{
    int data;
    struct taglistnode *next;
}listnode;

int get_slistlength(const listnode* head);

int print_slist(const listnode *head);

listnode* create_init_slist(const int nodeinitval, const int listsize);









#endif  //__SLIST_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
