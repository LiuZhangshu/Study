#include<stdio.h>
#include"SqList.h"
#define OK 1 
#define ERROR 0 
#define TRUE 1 
#define FALSE 0 

typedef int Status ; 
void InitSqList(SqList *L) {
    L->length = 0 ; 
//    L->data ={} ;
}
    

Status ListEmpty(const SqList *L ){
    Status ret=TRUE; 
    if(L->length> 0 )
        ret=FALSE;
    return ret ; 
}
//void ClearSqList(SqList *L);
Status GetElem(SqList L,int i,int *e){
    int ret = OK ; 
    if(L.length==0||i>L.length||i<1)
        ret = ERROR ;
    *e = L.data[i-1];
    return ret ;

} 
//int LocateElem(SqList L,int e) ; 
void ListInster(SqList *L,int i,int e){
    int k ;
    if(L->length==MAXSIZE) 
        return ERROR ; 
    if(i<1||i>L->length+1)
        return ERROR;
    if(i<=L->length){
        for(k = L->length-1 ;k>=i-1;k--)
           L->data[k+1] = L->data[k] ; 
    }
    L->length++ ; 
    L->data[i-1]=e ; 
    return OK ; 
} 
Status ListDelete(SqList *L,int i,int *e){
    if(i>L->length||i<1||L->length==0)
       return ERROR ; 
    *e = L->data[i-1] ; 
    int k  ;
    for(k =i-1 ; k<L->length ; k++)
      L->data[k]=L->data[k+1];
    L->length-- ;
    return OK ;

} 
int ListLength(const SqList *L ) {
    return L->length ; 
}

int main(){
    // init 
    SqList a ;
    InitSqList(&a) ; 
    printf("size is %lu \n",sizeof(a.data));
    printf("%lu\n",sizeof(a.data)/sizeof(int));
    // empty
    printf("is empty: %d\n",ListEmpty(&a));
    printf("inster begin\n");
    //insertElem
    for(int i =1;i<10 ;i++){
        printf("%d\t",i);
        ListInster(&a ,i,i);
    }
    printf("\ninster complate\n");
    //get 
    int out = 0 ;
    for(int i =1;i<10 ;i++){
        GetElem(a,i,&out);
        printf("%d\t",out);
    }
    printf("\ncurrent length : %d\n",ListLength(&a));
    printf("delete elem \n") ;
    ListDelete(&a,5,&out) ; 
    printf("%d is deleted\n",out);
    for(int i =1;i<ListLength(&a) ;i++){
        GetElem(a,i,&out);
        printf("%d\t",out);
    } 
    printf("\ncurrent length : %d\n",ListLength(&a));

    return 0 ;
}

