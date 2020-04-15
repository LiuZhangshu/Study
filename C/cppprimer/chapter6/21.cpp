#include<iostream>
using namespace std ; 
int compares( const int &i , const int *p) {
    int result ; 
    if( i > *p )
        result=i ;
    else
        result= *p ; 
    return result ;
}
int main(){
    int a,b ; 
    cin >> a >> b ; 
    cout << compares(a,&b) << endl ;
    return 0  ; 
}
