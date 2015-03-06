 
/**
 * @file slist_common.cpp
 * @date 2015/03/05 18:15:47
 * @brief 
 *  
 **/

#include <cstdlib>
#include <cstdio>
#include "slist.h"

//create single link list, with head node not exist.
listnode* create_init_slist(const int nodeinitval, const int listsize){
    int nodenum = 0;
    int nodeval = nodeinitval;
    listnode *head = NULL;
    listnode *pre = NULL;
    
    while (nodenum < listsize){
       listnode *newnode = (listnode*)malloc(sizeof(listnode));
       if(NULL != newnode){
           newnode -> next = NULL;
           newnode -> data = nodeval;
           ++nodenum;
           ++nodeval;
           if(nodenum == 1){//head node == first node
               head = newnode;
               pre  = head;
           }
           else{
               pre -> next = newnode;
               pre = newnode;
           }
       }
    }

    return head;
}

//print single link list
int print_slist(const listnode *head){
    if(NULL == head)
    {
        return 0; 
    }

    const listnode *cur = head;
    for(cur = head; cur != NULL; cur = cur -> next){
        printf(" %ld ", cur -> data);
    }
    printf("\n");

    return 0;
}



/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
