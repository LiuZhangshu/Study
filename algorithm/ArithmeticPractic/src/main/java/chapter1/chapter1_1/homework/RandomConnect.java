package chapter1.chapter1_1.homework;

import algs4.StdDraw;
import algs4.StdRandom;

public class RandomConnect {
    public static void main(String[] args){
        int N =10 ;
        double[][] a =new double[N][2];
        drawcricle(50,50,20,10,a);
        //StdOut.println(a[0][0]);
        Randomline(50,50,a,0.7);
    }
    public static void drawcricle(double x ,double y ,double r ,int N ,double[][] a){
        StdDraw.setXscale(0,x*2);
        StdDraw.setYscale(0,y*2);
        StdDraw.setPenRadius(0.005);
        StdDraw.setPenColor(StdDraw.RED);
        for(int i=0;i<N;i++){
            StdDraw.setPenRadius(0.005);
            StdDraw.setPenColor(StdDraw.BLACK);
            double m = x - r * Math.cos(2*Math.PI*i/N) ;
            double n = y + r * Math.sin(2*Math.PI*i/N);
            a[i][0] = m ;
            a[i][1] = n ;
            StdDraw.point(m,n);
        }

    }
    public static void Randomline(double x,double y,double[][] a,double p){
        StdDraw.setXscale(0,x*2);
        StdDraw.setYscale(0,y*2);
        StdDraw.setPenRadius(0.001);
        StdDraw.setPenColor(StdDraw.LIGHT_GRAY);
        int N = a.length ;
        for(int i = 0 ;i<N;i++){
            for(int j =0 ;j<N;j++){
                if(StdRandom.bernoulli(p)){
                    StdDraw.line(a[i][0],a[i][1],a[j][0],a[j][1]);
                }
            }
        }

    }

}
