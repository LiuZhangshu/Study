#include<stdio.h>
#include<stdlib.h>
#include"Node.h"
int InitLinkList(LinkList* L  ){
    *L = (LinkList)malloc(sizeof(LinkList)) ; 
    (*L)->next = NULL ;
    (*L)->data = 0 ;
    return 1 ; 
}
int GetElem(const LinkList L , int i, int *e ){
    int j=1 ; 
    LinkList p = L->next ;
    while(p && j<i){
        j++ ; 
        p = p->next ; 
    }
    if(!p || j>i)
        return 0 ; 
    *e = p->data ; 
    return 1 ;
}

        
int ListInster(LinkList* L,int i ,int e ){
    int j=1 ; 
    LinkList p = *L ;
    LinkList s = (LinkList)malloc(sizeof(LinkList));
    while(p && j<i){
        j++ ; 
        p = p->next ; 
    }
    if(!p || j>i)
        return 0 ; 
    s->next = p->next ;
    s->data = e ;
    p->next = s ;
    (*L)->data++ ;
    return 1 ;
}
int ListDelete(LinkList* L ,int i ,int *e ){
    int j=1 ; 
    LinkList p = *L ;
    while(p && j<i){
        j++ ; 
        p = p->next ; 
    }
    if(!(p->next) || j>i)
        return 0 ; 
    LinkList q = p->next ;
    p->next = q->next ;
    *e = q->data ; 
    free(q) ;  
    return 1 ;
}
int ClearList(LinkList *L ){
    LinkList p,q ; 
    p = (*L)->next ;
    while(p){
        q = p->next ; 
        free(p) ;
        p = q ;
    }
    (*L)->next = NULL ;
    (*L)->data = 0 ;
    return 1 ;
}

int main(){
    LinkList a ;
    InitLinkList(&a) ; 
    printf("%d\n",a->data);
    for(int i =1 ;i<11;i++){
        ListInster(&a,i,i) ;
    }
    int out ; 
    for(int i = 1;i<=a->data;i++){
        GetElem(a,i,&out) ; 
        printf("%d\t",out);
    }
    printf("\n");
    ListDelete(&a ,5,&out) ; 
    for(int i = 1;i<a->data;i++){
        GetElem(a,i,&out) ; 
        printf("%d\t",out);
    }
    printf("\n");
    ClearList(&a) ; 
    printf("%d %p\n",a->data,a->next);
    return 0 ;
} 

 
    
