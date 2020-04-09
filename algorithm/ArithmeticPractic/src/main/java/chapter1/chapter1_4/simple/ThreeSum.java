package chapter1.chapter1_4.simple;

import algs4.In;
import algs4.StdOut;

public class ThreeSum {
    public static int count(int[] a){
        int cnt = 0 ;
        int N = a.length ;
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                for(int k=j;k<N;k++){
                    if(a[i]+a[j]+a[k]==0){
                        cnt++ ;
                    }
                }
            }
        }
        return cnt ;
    }
    public static void main(String[] args){
        int[] a = In.readInts(args[0]);
        StdOut.println(count(a));
    }
}
