#include<stdio.h>
int Fbi(int n ){
    if(n==0)
        return 0 ;
    else if (n==1 )
        return 1 ;
    else 
        return Fbi(n-1)+Fbi(n-2) ; 
}
int main(){
    int n ;
    printf("input fibonacci num :\n"); 
    scanf("%d",&n) ; 
    int result ; 
    result = Fbi(n);
    printf("result is :%d\n",result);
    return 0 ;
}
