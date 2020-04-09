#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;

int main(){
    vector<int> a  ; 
    int b ;
    while(cin>>b)
        a.push_back(b) ; 
    for(decltype(a.size()) i=0 ; i< a.size()/2 ; i++ )
        cout<<a[i] + a[a.size()-1-i] <<endl ;
    return 0 ; 
}
