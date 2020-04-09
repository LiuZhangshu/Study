#include<iostream>
int main(){
    const int i=-1, &r=0 ; 
    std::cout<<i<<" " << r << std::endl ; 
    int i2 = 0 ;
    int const *p2 = &i2 ; 
    
    const int *const p3 = &i2 ; 
    int const &r2=10 ; 

    std::cout<<i<<" " << r2 << std::endl ; 



    return 0 ; 
}
