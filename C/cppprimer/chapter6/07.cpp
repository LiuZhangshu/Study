#include<iostream>
using namespace std ; 
int func_cnt(){
    static int counts = 0 ; 
    counts++ ; 
    return counts ; 
}
int main(){
    int num,result ; 
    cin>> num ; 

    for(int i=0 ;i<num ;i++)
       result=func_cnt() ; 
    cout<< result <<endl ; 
   return 0 ;
} 
