#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;
int main(){
    vector<int> num = {1,2,3,4,5,6,7,8,9,10} ;
    for(auto it=num.begin() ;it !=num.end() ; it++){
        cout<<"-----------\n"<< *it <<endl ;
        *it = (*it)*2 ; 
        cout<<*it <<endl ; 
    }
    return 0 ; 
}
