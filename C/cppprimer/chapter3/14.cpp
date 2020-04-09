#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;
int main(){
    vector<string> num_list ; 
    string num ; 
    while(cin >> num)
      num_list.push_back(num) ;
    for(int i =0 ;i<num_list.size() ;i++)
        cout<< num_list[i] << endl ; 
    return 0 ; 
}
