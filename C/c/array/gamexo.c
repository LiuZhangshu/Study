#include<stdio.h>
int main(){
    const int size = 3 ; 
    int board[size][size]  ; 
    int i,j ; 
    int num0fX ; 
    int num0f0 ; 
    int result = -1 ;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",board[i][j]);
        }
    }
    for(i = 0 ;i<size;i++){
        num0fX = 0 ;
        num0f0 = 0 ;
        for(j=0;j<size;j++){
            if(a[i][j]==1 ) 
                    num0fX++ ;
            else
                num0f0++ ; 
        }

        if(num0f0 ==size)
            result = 0;
        else if (num0fX =size)
            result =1 ; 
    }

    if(result = -1 ){
        for(j = 0 ;j<size;j++){
            num0fX = 0 ;
            num0f0 = 0 ;
            for(i=0;i<size;i++){
                if(a[i][j]==1 ) 
                        num0fX++ ;
                else
                    num0f0++ ; 
            }
    
            if(num0f0 ==size)
                result = 0;
            else if (num0fX =size)
                result =1 ; 
        }
    }
    return 0;
}

