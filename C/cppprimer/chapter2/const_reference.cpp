#include<iostream>
int main(){
    int i=42 ; 
    int &r1 = i ;
    const int &r2 = i ;
    std::cout<< "r1:" << r1 << "\nr2:" << r2 << std::endl; 
    i = 40 ;
    std::cout<< "r1:" << r1 << "\nr2:" << r2 << std::endl; 
    r1 =30 ;
    std::cout<< "r1:" << r1 << "\nr2:" << r2 << std::endl; 
}



