#include<iostream>

#include<stdexcept>
using namespace std ; 
int main(){
    int a,b ; 
    cout<< "input a b :"<<endl ; 
    cin>> a >> b ;
    cout<<a<<"\t"<<b <<endl ; 
    if(b==0)
        throw runtime_error("b is 0 ");
    else
        cout<<a/b<<endl ; 
    return 0 ; 
}
