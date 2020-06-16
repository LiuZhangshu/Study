#include<stdio.h>
#include"SqStack.h"

int InitStack(SqStack *S){
   S->top =-1 ; 
} 
int DestroyStack(SqStack *S) ;
int ClearStack(SqStack *S) ;
int StackEmpty(const SqStack *S) ;
int GetTop(SqStack *S, int *e){
   *e = S->top;
   return 1 ; 
} 
int Push(SqStack *S, int *e){
   if(S->top == MAXSIZE-1)
       return 0 ; 
   S->data[++S->top] = *e ;
   return 1 ;
} 
int Pop(SqStack *S,int *e){
   if(S->top == MAXSIZE-1)
       return 0 ; 
   *e = S->data[S->top--] ;
   return 1 ;
} 
int StackLength(const SqStack *S){
    return S->top ;

} 
int main(){
    SqStack a ; 
    InitStack(&a);
    printf("%d",StackLength(&a));
    for(int i=0;i<10;i++){
        Push(&a,&i) ; 
    }
    int e =0;
    int pope =0 ;
    GetTop(&a,&e);

    while(e >= 0 ){
        Pop(&a,&pope);
        printf("%d,%d\t",e,pope); 
        GetTop(&a,&e);
    }
    printf("\n");

    return 0 ;
}


