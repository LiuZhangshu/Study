#include<stdio.h>
#include "tool.h"
int main(){
    int arr[5]={1,2,3,4,5};
    int m = find_max(arr,5) ; 

    printf("%d\n",m);

    return 0 ; 
}
