/**
 * @file slist_iscycle.cpp
 * @date 2015/03/06 11:43:52
 * @brief 
 *  
 **/

#include "include/slist.h"

bool is_slistcycle(const listnode *head){
    bool biscycle = false;
    const listnode *pslow = head;
    const listnode *pfast = head;
    while(pslow != NULL &&  pfast->next != NULL){
        pslow = pslow -> next;
        pfast = pfast->next->next;
        if(pslow == pfast){
            biscycle = true;
            break;
        }
    }

    return biscycle;
}








/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
