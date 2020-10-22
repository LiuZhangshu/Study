#include<stdio.h>
#include "BiTNode.h"
/*
typedef struct BiTNode
{
    int data ;
    struct BiTNode *lchild,*rchild ;
} BiTNode, *BiTNode ;
*/
void PreOrderTraverse(BiTree T){
    if(T==NULL)
        return ;
    printf("%c",T->data) ;
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}

void InOrderTraverse(BiTree T){
    if(T==NULL)
        return ; 
    InOrderTraverse(T->lchild);
    printf("%c",T->data) ; 
    InOrderTraverse(T->rchild);
}
void PostOrderTraverse(BiTree T){
    if(T==NULL)
        return ; 
    PostOrderTraverse(T->lchild); 
    PostOrderTraverse(T->rchild);
    printf("%c",T->data) ; 
}

