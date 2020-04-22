#include<iostream>
#include<string>
#include<sstream>
using namespace std ; 
istream& func(istream& s ){
    string buffer ; 
    while(s >> buffer)
        cout<<buffer << endl ; 
    s.clear() ; 
    return s ; 
    
}
int main(){
    istringstream is ("hello") ; 
    func(is)  ;
}
