 
/**
 * @file slist.cpp
 * @date 2015/03/04 18:01:07
 * @brief 
 *  
 **/
#include <cstdlib>
#include <cstdio>
#include "include/slist.h"

//reverse slist: by using insert node at head
listnode* reverse_slist(listnode *head){
    if(NULL == head || head -> next == NULL)//head is null ; or head has only one node
        return head;
    listnode *newhead = NULL;
    while(head != NULL){
        if(newhead == NULL){
            newhead = head;
            head = head -> next;
            newhead -> next = NULL;
        }
        else{
            listnode *pheadnext = head -> next;
            head -> next = newhead;
            newhead = head;
            head = pheadnext;
        }
    
    }

    return newhead;
}

//revers slist: by using 3 pointer
listnode* reverse_slist_3point(listnode *head){
    if(NULL == head || head -> next == NULL)//head is null ; or head has only one node
        return head;
    listnode *newhead = NULL;
    listnode *pcur = NULL;
    listnode *pnext = NULL;
    listnode *pnext_next = NULL;
    pcur = head;
    //next node point must be inited before while statement
    pnext = pcur -> next;
    //pre = pcur ;
    while(pnext != NULL){
        //if(pcur -> next != NULL)
        //pnext = pcur -> next;
        //listnode *pre = pcur;
        //pcur = pnext;
        pnext_next = pnext -> next;
        pnext -> next = pcur;
        //pre = pcur;
        pcur = pnext;
        pnext = pnext_next;
    }

    head -> next = NULL;
    newhead = pcur;
    return newhead;
} 

int main(void){
    listnode *head = create_init_slist(1, 10);
    print_slist(head);
    //listnode* newhead = reverse_slist(head);
    listnode* newhead = reverse_slist_3point(head);
    print_slist(newhead);
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
