#include<iostream>
int main()
{
    int min_num=0 ; 
    int max_num=0 ; 
    std::cout<<"input miner num "<< std::endl ; 
    std::cin>>min_num ; 
    
    std::cout<<"input biger num "<< std::endl ; 
    std::cin>>max_num ; 
    while(min_num<= max_num){
        std::cout<<min_num<<std::endl ; 
        ++min_num ; 
    }
    return 0 ; 
}
