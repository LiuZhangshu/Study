#include<string>
#include<iostream>
#include<cctype>
using std::cin ;
using std::cout;
using std::endl ;
using std::string ;
int main(){
    string s ; 
    getline(cin,s) ; 
    for(auto a:s )
        if(!ispunct(a))
            cout<< a ;
        else
            cout<<" ";
    cout<<endl ; 
    return 0 ; 
}
