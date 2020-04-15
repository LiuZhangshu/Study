#include<iostream>
#include"chapter6.h"
using namespace std ; 

int main(){
    int result ;
    int num ;
    cin>>num ;
    result = fact (num) ;
    cout<<num<<"! is " << result <<endl;
    return 0 ;
}

