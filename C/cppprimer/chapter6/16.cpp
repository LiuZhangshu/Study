#include<iostream>
#include<string>
using std::cin ; 
using std::cout ; 
using std::string ; 
using std::endl ; 
bool is_empty(const string &s) {
    return s.empty();
}
int main(){
    string s ; 
    cin >> s ;
    cout << s << " " << is_empty(s) << endl ; 
    return 0  ; 
}
