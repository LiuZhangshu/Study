package chapter1.chapter1_4.homework;

import algs4.StdOut;

import java.util.Arrays;

public class NearPara {
    public static void near(double[] a){
       // Arrays.sort(a);
        int N =a.length;
        double min =Double.POSITIVE_INFINITY;
        double min_a =Double.NaN;
        double min_b = Double.NaN;
        double tmp = 0 ;
        for(int i=0;i<N-1;i++){
            tmp = a[i+1] - a[i] ;
            if(min>tmp){
                min = tmp;
                min_a = a[i];
                min_b = a[i+1];
            }
        }
        StdOut.println(min);
        StdOut.println(min_a + ","+min_b);

    }
    public static void main(String[] args){
        double[] a = {1.213,22.32,123.21,133.3232};
        near(a);
    }

}
