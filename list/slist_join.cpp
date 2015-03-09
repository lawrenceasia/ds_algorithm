/**
 * @file slist_isjoin.cpp
 * @date 2015/03/05 18:22:31
 * @brief 
 *  
 **/
#include "include/slist.h"

//judge whether two slist is joined or not
bool is_slistjoin(const listnode *firsthead, const listnode *sechead){
    bool bjoin = false;
    assert(NULL != firsthead);
    assert(NULL != sechead);
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


//get two slist joint point 
const listnode* slist_joinpoint(const listnode *p1sthead, const listnode *p2rdhead)/*const*/{
    const listnode *pjointpoint = NULL;
    int length1 = get_slistlength(p1sthead);
    int length2 = get_slistlength(p2rdhead);

    if(NULL == p1sthead || NULL == p2rdhead){
        return NULL;
    }

    const listnode *pcur_1st = p1sthead;
    const listnode *pcur_2rd = p2rdhead;
    if(length1 > length2 && length2 > 0){
        for (int i = 0; i < length1 - length2; i++ ){
            pcur_1st = pcur_1st -> next;
        }
    }
    else {
        for (int i = 0; i < length2 -length1; i++ ){
            pcur_2rd = pcur_2rd -> next;
        }
    }

    while(pcur_1st != NULL){
        if(pcur_1st == pcur_2rd)
            return pcur_1st;
        pcur_1st = pcur_1st -> next;
        pcur_2rd = pcur_2rd -> next;
    }

    return pcur_1st;
}





/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
