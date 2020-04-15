#include<iostream> 
using namespace std ; 
void reset(int &a ){
    a= 0 ;
}
void reset1(int *p){
    *p = 0 ; 
}
int main(){
    int a , b ;
    cin >> a >> b ; 
    reset(a) ; 
    cout<< a << endl ; 
    return 0 ;
}
