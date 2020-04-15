#include<iostream>
#include "chapter6.h"
using namespace std ;
int fact(int num){
    int ret=1 ;
    if(num>0){
        while(num !=0){
            ret*=num-- ;
            cout<< num << endl ;
        }

    }
    return ret ;
}

