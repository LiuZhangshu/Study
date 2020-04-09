#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;
using std::end ; 
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0} ;
    for(int *i=a;i!=end(a) ;i++){
        *i=0 ;
        cout<<*i<<endl;
    }
    return 0 ; 
}
