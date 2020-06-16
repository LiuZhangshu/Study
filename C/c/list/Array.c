#include<stdio.h>
#include<stdlib.h>
#include"Array.h"

/**
 * typedef struct {
 *   int size ;
 *   int *array;
 *   } Array ;
**/


Array array_create(int init_size){
    Array a ;
    a.size = init_size ; 
    a.array = (int*)malloc(a.size*sizeof(int));
    return a ; 
}
void array_free(Array *a){
    free(a->array) ; 
    a->size = 0 ;
    a->array = NULL ; 
}
int array_size(const Array *a){
    return a->size ; 

} ; 
int* array_at(Array *a,int index){
    return &(a->array[index]) ; 
};
void array_inflate(Array *a,int more_size) ;
int main(){
    Array a = array_create(100);
    *array_at(&a,0) = 10 ;
    printf("%d\n",array_size(&a));
    array_free(&a) ; 
    return 0 ;
}

