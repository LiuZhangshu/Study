#include<fstream>
#include<iostream> 
#include<string>
#include<vector>
using namespace std ; 
int main(int argc, char **argv){
    cout<< argv[1] << endl ; 
    ifstream input(argv[1]) ; 
    ofstream output ; 
    vector<string> str ; 
    if(input){
        string buffer ; 
        while(input>>buffer){
            str.push_back(buffer);
        }
    }else{
        cerr<< "file open failed" << endl ;
    }
    input.close() ;
    output.open(argv[2],ofstream::app) ; 
    if(output){
        for(string show: str){
            output<<show<<endl ;
        }
    }
    return 0 ; 

}
