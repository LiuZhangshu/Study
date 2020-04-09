#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;

void print_vec(vector<auto> a){
    cout<<"--------------------"<< endl ; 
    cout<<"size is : " << a.size() << endl ; 
    for(auto tmp: a )
        cout<< tmp << endl ; 
}


int main(){
   vector<int> v1 ; 
   vector<int> v2(10) ; 
   vector<int> v3(10,42);

   vector<int> v4{10};
   vector<int> v5{10,42};
   vector<string> v6{10};
   vector<string> v7{10,"hi"};
   
   print_vec(v1) ;
   print_vec(v2) ;
   print_vec(v3) ;
   print_vec(v4) ;
   print_vec(v5) ;
   print_vec(v6) ;
   print_vec(v7) ;

   return 0 ;
}

