#include<iostream> 
using namespace std ; 
void swap(int * &p,int * &q){
    int *tmp ; 
    tmp = p ; 
    p = q ;
    q = tmp ; 
}
int main(){
    int a=1 ,b=2 ; 
    auto ap= &a ; 
    auto bp= &b ; 
    swap(ap,bp) ; 
    cout<< *ap<< " " << *bp <<endl ; 
    return 0 ;
}
