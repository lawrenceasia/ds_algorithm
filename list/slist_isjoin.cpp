/**
 * @file slist_isjoin.cpp
 * @date 2015/03/05 18:22:31
 * @brief 
 *  
 **/
#include "slist.h"

bool is_slistjoin(const listnode *firsthead, const listnode *sechead){
    bool bjoin = false;
    const listnode *pfirst = firsthead;
    const listnode *psec   = sechead;
    while(pfirst -> next != NULL){
        pfirst = pfirst -> next;
    }
    while(psec -> next != NULL){
        psec = psec -> next;
    }

    if(pfirst == psec){
        bjoin = true;
    }
    return bjoin;
}









/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
