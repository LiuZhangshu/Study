#include<iostream>

#include<stdexcept>
using namespace std ; 
int main(){
    int a,b ; 
    while(cin >> a >>b){
       cout<<a<<"\t"<<b <<endl ;
       try {
           if(b==0)
               throw runtime_error("divisor is 0") ; 

           cout<< a/b << endl ; 
       }catch(runtime_error e ) {
           cout<<e.what()<< "\nb is 0 "<< endl ; 
           cout<< "continue y " <<endl ; 
           char flag ; 
           cin>> flag ; 
           if(flag=='y')
               continue ; 
           else
               break ; 
       }
    }


    return 0 ; 
}
