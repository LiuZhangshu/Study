#include<iostream>
using namespace std ; 
void swap(int *p1,int *p2){
    int tmp = *p1 ; 
    *p1 = *p2 ;
    *p2 = tmp ; 
}
int main(){
    int a,b ; 
    cin >> a >> b ; 
    swap(&a,&b) ; 
    cout<< "a is " << a <<endl ;
    cout<< "b is " << b << endl ;
    return 0 ; 
}
