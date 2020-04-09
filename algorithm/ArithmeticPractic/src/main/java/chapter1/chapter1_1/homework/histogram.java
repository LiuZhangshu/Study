package chapter1.chapter1_1.homework;

import algs4.StdDraw;
import algs4.StdOut;
import algs4.StdRandom;

public class histogram {
    public static double[] segmentation(int N,double l ,double r ,double[] a ){
        if(N==0)
            return a ;
        double s = (r-l)/N ;
        a[0]=l;
        for(int i=1;i<a.length;i++){
            a[i] = a[i-1]+ s ;
        }
        return a ;
    }
    public static void makeHistogram(double[] a,double[] b,double l,double r){
        int[] c = new int[a.length -1];
        for(int i=0;i<b.length;i++){
            for(int j=0;j<a.length-1;j++){
                if(b[i]<a[j+1] && b[i]>a[j]){
                    c[j]++;
                    break;
                }
            }
        }
        int N = c.length ;
        StdDraw.setXscale(0,(r-1)*1.2);
        StdDraw.setYscale(0,b.length/N*1.2);
        for(int i=0;i<N;i++){
            double x = l+(r-1)/N*i;
            double y = c[i] ;
            double rw = (r-1)/(2*N);
            double rh = c[i]/2.0 ;
            StdDraw.filledRectangle(x,y,rw,rh);
            StdOut.print(c[i]+" ");
        }
    }
    public static void main(String[] args){
        int N=10 ;
        double l = 2;
        double r =20 ;
        double[] a = new double[N+1];
        double[] b = new double[N*N*N];
        for(int i =0;i<b.length;i++){
            b[i] = StdRandom.uniform(l,r);
        }

        a = segmentation(N,l,r,a);
        makeHistogram(a,b,l,r);
    }

}
