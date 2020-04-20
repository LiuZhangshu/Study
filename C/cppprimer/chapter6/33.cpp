#include<iostream>
#include<vector>
using namespace std ;
void print(std::vector<int>::iterator beg,std::vector<int>::iterator end){

    if(beg !=end ){
        cout<< *beg++ << " "  ; 
        print(beg,end) ;
    }else
        cout<<endl ; 
}
int main(){
    vector<int> i ={1,2,3,4,5,6} ; 
    print(i.begin(),i.end()) ; 
}
