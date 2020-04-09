#include<iostream>
int main() {
    int *p = nullptr ; 
    if(p==0){
        std::cout<< "null pointer";}

    std::cout<< p << std::endl ; 
    return 0 ; 
}
