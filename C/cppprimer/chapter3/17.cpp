#include<string>
#include<vector>
#include<iostream>
#include<cctype>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;

int main(){
    string input_str ;
    vector<string> svec ; 
    while(cin>>input_str)
        svec.push_back(input_str) ; 
    for(string &a : svec ) 
        for(char &b : a )
            b = toupper(b)  ;
    for(string a : svec )
        cout<< a <<endl ; 
    return 0 ; 
}
