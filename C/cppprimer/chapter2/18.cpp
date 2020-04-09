#include<iostream>
int main(){
    int i=5,j=6 ; 
    int *p1=&i ; 
    int *p2=&j ; 
    std::cout<< p1<<" " << p2 <<std::endl ; 
    std::cout<<*p1<<" " << *p2<<std::endl ; 
    p1=p2 ;

    std::cout<<*p1<<" " << *p2<<std::endl ; 
    return 0 ;
}
