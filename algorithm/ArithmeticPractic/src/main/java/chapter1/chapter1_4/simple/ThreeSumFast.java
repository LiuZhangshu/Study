package chapter1.chapter1_4.simple;

import chapter1.chapter1_1.simple.BinarySearch;

public class ThreeSumFast {
    public int count(int[] a){
        int N =a.length ;
        int cnt = 0 ;
        for(int i =0;i<N;i++){
            for(int j = i+1;j<N;j++){
                if(BinarySearch.rank(-a[i]-a[j],a)>j)
                    cnt++ ;
            }
        }
        return cnt ;
    }
}
