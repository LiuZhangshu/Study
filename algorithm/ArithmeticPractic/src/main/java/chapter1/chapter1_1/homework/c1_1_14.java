package chapter1.chapter1_1.homework;

import algs4.StdOut;

public class c1_1_14 {
    static int n =2 ;
    public static void main(String[] args){
        StdOut.println(log(100));
    }
    public static int log(int N){
        int a = 0;
        int m = 2 ;
        while(N > m){
            N = N/m;
            a ++ ;
        }
        return a;
    }
}
