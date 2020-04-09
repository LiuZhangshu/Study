#include<string>
#include<iostream>
#include<cctype>
using std::cin ;
using std::cout;
using std::endl ;
using std::string ;
int main(){
    string input_str="hello world" ; 
    for(decltype(input_str.size()) index=0;index<input_str.size();index++)
        input_str[index]='X' ; 
    cout << input_str << endl ; 

    decltype(input_str.size()) index = 0 ;
    while(index<input_str.size()){
        input_str[index]='X' ;
        index++ ; 
    }
        
    cout << input_str << endl ;
    return 0 ; 
}
