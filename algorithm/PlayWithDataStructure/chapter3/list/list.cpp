#include<iostream> 
#include<vector>
#include "List.h"

using namespace std ; 

bool ListEmpty(const List &l){
    if(l.length==0)
        return true ; 
    else
        return false ; 
} 
void ClearList(const List &L){

}
int GetElem(const List &L,int i,int &e){
    if(L.length==0|| i>L.length || i<0 )
        return 0 ;
    else{
        e = L.data[i] ; 
        return 1 ; 
    }
}
int LocateElem(const List &L,const int &e){
    int current =0 ; 
    int  loc ; 
    for(int i=0;i<L.length;i++){
        GetElem(L,i,current) ; 
        if(e==current){
            loc=i ; 
            break ; 
        }
    }
    return loc ; 

}
int ListInster(List &L,const int  &i,const int  &e ){
    if(i<0 || i>L.length )
        return false ; 
    else
    { 
        for(int j=L.length ; j>=i;j--)
        {
            L.data[j+1] = L.data[j] ; 
        }
        L.data[i] = e ; 
        L.length++ ; 
        return true ; 
    }
}

int ListDelete(List &L,const int &i ,const int &e ){ 
    if(i<0 || i>L.length)
        return false ; 
    else{
        int delete_elem = L.data[i] ;
        for(int j=i ; j<L.length-1 ; j++){
            L.data[j]=L.data[j+1] ; 
        }
        L.length-- ; 
        return delete_elem ; 
    }

}
int ListLength(const List &L){
    return L.length ; 
}
void unionL (List &la,const List &lb){
    int len_la = ListLength(la) ; 
    int len_lb = ListLength(lb) ; 
    int e ; 
    for(int i=0 ; i< len_lb; i++ )
    {
        
        GetElem(lb,i,e) ;
        if(!LocateElem(la,e))
            ListInster(la,len_la++,e) ; 
    } 
}
void print(const List &L) {
    int e = 0 ; 
    for(int i=0 ; i< L.length ;i++){
        GetElem(L,i,e) ; 
        cout << e << " " ;
    }
    cout << endl ; 

}
int main(){
    List l ;
    for(int i =0;i<10 ;i++ )
        ListInster(l,i,i) ; 
    print(l) ; 
    cout<< "lenth is " <<ListLength(l) <<endl ;
    cout<< "list is empty ? "<< ListEmpty(l) << endl ; 
    int loc = 0 ; 
    cout << "index is " ;
    cin>> loc ; 
    int element = 0 ; 
    GetElem(l,loc,element) ;
    cout<<"value is "<<  element << endl  ; 
     
    cout << LocateElem(l,7) <<endl ;
    ListDelete(l,5,element) ;
    cout<< "deleted elem is " << element ; 
    cout<<endl ; 
    
    cout<< "lenth is " <<ListLength(l) <<endl ;
    print(l) ;
}


