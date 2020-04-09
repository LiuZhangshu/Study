#include<iostream>
std::string global_str ; 
int global_int ; 
int main(){
    int local_int ; 
    std::string local_str ; 
    std::cout << "global_str\t" << global_str << std::endl ; 
    std::cout << "global_int\t" << global_int << std::endl ; 
    std::cout << "global_str\t" << local_str << std::endl ; 
    std::cout << "global_int\t" << local_int << std::endl ; 
    return 0 ; 
}
