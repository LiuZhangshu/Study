#include<iostream>
#include<initializer_list>
using namespace std ; 
int sum(initializer_list<int> &input){
    int sum_list = 0 ; 
    for(auto beg=input.begin();beg!=input.end() ; beg++)
        sum_list+=*beg ; 
    return sum_list ; 
}
int main(){
    auto a = {1,2,3,4,5,6,7,8,9,10} ; 
    cout<< sum(a) <<endl ; 
    return 0 ; 
}
