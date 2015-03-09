/***************************************************************************
 * 
 * 
 **************************************************************************/
 
/**
 * @file slist_delete.cpp
 * @author justforyou2works@foxmail.com
 * @date 2015/03/09 10:44:27
 * @brief 
 *  
 **/
#include "include/slist.h"

//premise: giving a head (slist)and a node pointer
//todo: delete the point, time: o(1)
//by exchange the cur node's data and next node's data
listnode* delete_1_node(listnode* head, listnode* pcur){
    if(head == NULL || pcur == NULL){
        return head;
    }
    assert(pcur -> next != NULL);
    listnode *pnext = pcur -> next;
    pcur -> next = pnext -> next;
    //exchange current node's data and next node data
    pcur -> data = pnext -> data;
    return pnext;//delete pnext 
}

//find out the last kth node (倒数第k个)
const listnode* findout_kth_node(const listnode* head, int k){
    const listnode* pslow = head;
    const listnode* pfast = head;
    for(int i = 0; i < k && pfast != NULL; i++){
        pfast = pfast -> next;
    }

    if(NULL == pfast){
        return NULL;
    }

    while(pfast != NULL){
        pslow = pslow -> next;
        pfast = pfast -> next;
    }

    return pslow;
}


const listnode* findout_middle_node(const listnode* head){
    const listnode* pslow = head;
    const listnode* pfast = head;
    while(pslow && pfast->next){
        pslow = pslow -> next;
        pfast = pfast -> next -> next;
    }

    return pslow;
}














/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
