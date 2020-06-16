#include<fstream>
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std ; 
int main(int argc,char **argv)
{
    cout<< argv[1] << endl ; 
    ifstream infile(argv[1]) ; 
    vector<string> str ; 
    istringstream istr ; 

    if(infile){
        string str_tmp ; 
        while(getline(infile,str_tmp)){
                cout<< str_tmp <<endl ;
                str.push_back(str_tmp) ; 
        }
    }
    for(string tmp_str :str){
        istr.clear() ; 
        istr.str(tmp_str);
        string tmp ; 
        while(istr >> tmp)
            cout<<tmp<<endl ;
    }


    return 0 ;
    
}

