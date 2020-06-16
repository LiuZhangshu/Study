#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;
bool findnum(const vector<int> &v,const int i ){
//    sort(v.begin(),v.end()) ; 
//    for(auto &elem:v)
//        cout<< elem << " " ;
    auto begin = v.begin() ;
    auto end = v.end() ; 
    auto mid = begin +  (end-begin)/2 ;    
    auto raw_begin = begin ; 
    while(begin != end){
        mid =  begin +  (end-begin)/2 ;    
        if(*mid==i){
            cout<< mid-raw_begin << " " << *mid << endl ; 
            return true ; 
        }else if(*mid > i){
            
            end = mid  ;
        }else {
            begin = mid +1 ; 
        }
    }
    return false ; 
}
int main(){
    vector<int> a = {2,3,4,5,6,7,8,9};
    int target ;
    bool result ; 
    cin >> target ; 
    result = findnum(a,target) ; 
    cout << result <<endl ; 
    return 0 ;
}

