#include<stdio.h>
int search(int key, int a[], int length );
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,11,13,23,14,32} ; 
    {
        int i ; 
        for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
            printf("%d\t",a[i]);
        printf("\n");
    }
    int x ;
    int loc ; 
    printf("input a number: " ) ;
    scanf("%d",&x) ; 
    loc = search(x,a,sizeof(a)/sizeof(a[0])) ; 
    if(loc !=-1)
        printf("%d is on no.%d \n",x,loc) ; 
    else 
        printf("%d is not exist\n",x);
    return 0 ; 
}

int search(int key, int a[], int length ){
    int ret = -1 ;
    for(int i = 0 ;i<length;i++){
        if(a[i]==key){
            ret = i ;
            break ; 
        }
    }
    return ret ;
}
