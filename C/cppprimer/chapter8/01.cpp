#include<iostream>
#include<string>
using namespace std ; 
istream& func(istream& s ){
    string buffer ; 
    while(s >> buffer)
        cout<<buffer << endl ; 
    s.clear() ; 
    return s ; 
    
}
int main(){
    istream &is =func(cin)  ;
    cout<< is.rdstate() <<endl ; 
}
