package chapter1.chapter1_1.homework;

import algs4.StdOut;
import algs4.StdRandom;

public class c1_1_15 {
    public static void main(String[] args){
        int[] a = RandomListInit(10);
        int[] b = histogram(a,10);
        for(int i=0;i<a.length;i++){
            StdOut.print(a[i]);
            StdOut.print(" ");
        }
        StdOut.println();
        for(int i=0;i<b.length;i++){
            StdOut.print(b[i]);
            StdOut.print(" ");
        }
    }
    public static int[] histogram(int[] a,int M){
        int[] b =new int[M] ;
        for(int i = 0 ;i<M;i++){
            b[i] = GetFreq(a,i);
        }
        return b;


    }
    public static int GetFreq(int[] list,int num){
        int counts = 0;
        for(int i = 0 ;i<list.length;i++){
            if(list[i]==num){
                counts++;
            }
        }
        return counts;
    }
    public static int[] RandomListInit(int leng){
        int[] rand_list = new int[leng];
        for(int i =0;i<leng;i++){
            rand_list[i] = StdRandom.uniform(10);
        }
        return rand_list;
    }
}
