#include<iostream>
#include<string>
using namespace std ; 
int main(int argc , char *argv[]){
    cout <<argc << endl ; 
    string all ;
    for(int i =1 ;i!=argc;i++){
        cout<<argv[i] <<endl ; 
        all+= string(argv[i]) ;
    }
    cout<<all << endl ; 
}
