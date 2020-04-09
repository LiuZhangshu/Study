#include<string>
#include<vector>
#include<iostream>
using std::cin ;
using std::cout ;
using std::string;
using std::endl ;
using std::vector ;
int main() {
    vector<unsigned> scores(11,0) ; 
    int score=0 ; 
    while(cin>>score){
        if(score<100 && score >=0){
            int n = score/10 ; 
            auto it = scores.begin() ; 
            *(it+n) = *(it+n)+1 ; 
        }
    }
    for(auto it = scores.begin();it!=scores.end();it++)
        cout<< *it << endl ; 
}

