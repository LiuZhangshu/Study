#include<iostream>
using namespace std ; 
int fact(int num){
    int ret=1 ; 
    if(num>0){
        while(num !=0){
            ret*=num-- ;
            cout<< num << endl ; 
        } 

    }
    return ret ; 
}
int main(){
    int result ; 
    int num ;
    cin>>num ; 
    result = fact (num) ; 
    cout<<num<<"! is " << result <<endl; 
    return 0 ; 
}
