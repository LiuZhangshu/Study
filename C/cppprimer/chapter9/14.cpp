#include<string>
#include<list>
#include<vector>
using namespace std ;
int main(){
    list<const char*>  l(5,"hello") ; 
    vector<string> vs(5,"bye") ; 
    vs.assign(l.cbegin(),l.cend()) ; 
}
