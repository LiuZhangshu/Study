#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;
using std::end ;
using std::begin ;
int main(){
    int a[4]={1,2,3,4} ; 
    for(auto elem : a)
        cout<< elem << endl ; 
    for(int i = 0 ; i<3;i++)
        cout<<a[i]<<endl ; 
    for(int *beg=begin(a);beg!=end(a);beg++)
        cout<<*beg<<endl ; 
    return 0 ;
}
