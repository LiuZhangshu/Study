#include<string>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::getline ; 
int main(){
    string line ; 
    while(getline(cin,line))
        if(!line.empty())
            cout<< line <<endl ;
    return 0 ;}
