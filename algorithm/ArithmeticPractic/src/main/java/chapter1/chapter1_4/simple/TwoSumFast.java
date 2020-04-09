package chapter1.chapter1_4.simple;

import chapter1.chapter1_1.simple.BinarySearch;

import java.util.Arrays;

public class TwoSumFast {
    public int count(int[] a ){
        int cnt = 0 ;
        int N = a.length ;
        Arrays.sort(a);
        for(int i=0;i<N;i++){
            if(BinarySearch.rank(-a[i], a) > i){
                cnt++;
            }
        }

        return cnt ;
    }
}
