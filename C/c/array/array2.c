#include<stdio.h>
int main(){
    int a[10] ={} ; 
    int x ;
    scanf("%d",&x) ; 
    while(x !=-1&& x<10 ){
        a[x] +=1 ; 
        scanf("%d",&x);
    }
    for(int i =0 ;i<10;i++)
        printf("%d : %d \n",i,a[i]);
    return 0 ; 

}
        
