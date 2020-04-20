#include<fstream>
#include<iostream> 
#include<string>
#include<vector>
using namespace std ; 
int main(int argc, char **argv){
    cout<< argv[1] << endl ; 
    ifstream input(argv[1]) ; 
    vector<string> str ; 
    if(input){
        string buffer ; 
        while(getline(input,buffer)){
            str.push_back(buffer);
        }
    }else{
        cerr<< "file open failed" << endl ;
    }
    input.close() ;
    for(string show: str)
        cout<<show<<endl ;
    return 0 ; 

}
