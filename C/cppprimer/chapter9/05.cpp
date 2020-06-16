#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;
vector<int>::const_iterator findnum(const vector<int> &v,const int i ){
//    sort(v.begin(),v.end()) ; 
//    for(vector<int>::const_iterator &elem:v)
//        cout<< elem << " " ;
    vector<int>::const_iterator begin = v.begin() ;
    vector<int>::const_iterator end = v.end() ; 
    vector<int>::const_iterator mid = begin +  (end-begin)/2 ;    
    vector<int>::const_iterator raw_begin = begin ; 
    vector<int>::const_iterator raw_end = end ; 
    while(begin != end){
        mid =  begin +  (end-begin)/2 ;    
        if(*mid==i){
            cout<< mid-raw_begin << " " << *mid << endl ; 
            return mid ; 
        }else if(*mid > i){
            
            end = mid  ;
        }else {
            begin = mid +1 ; 
        }
    }
    return raw_end ;  
}
int main(){
    vector<int> a = {2,3,4,5,6,7,8,9};
    int target ;
    vector<int>::const_iterator result ; 
    cin >> target ; 
    result = findnum(a,target) ; 
    cout << *result <<endl ; 
    return 0 ;
}

