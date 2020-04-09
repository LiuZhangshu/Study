#include<string>
#include<iostream>
#include<cctype>
using std::cin ;
using std::cout;
using std::endl ;
using std::string ;
int main(){
    string input_str ; 
    cin>>input_str ; 
    cout<<"input string is : " << input_str << endl ;   
    for(char &c :input_str) 
        c='X' ; 
    cout<<"output string is : " << input_str << endl ;
    return 0; 
}
