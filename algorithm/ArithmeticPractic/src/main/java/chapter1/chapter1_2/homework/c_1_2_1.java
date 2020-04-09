package chapter1.chapter1_2.homework;

import algs4.StdDraw;
import algs4.StdOut;
import algs4.StdRandom;
public class c_1_2_1 {

    public static double Point2D(int N){
        double[][] a = new double[N][2] ;
        StdDraw.setXscale(0,1);
        StdDraw.setYscale(0,1);
        StdDraw.setPenRadius(0.01);
        for(int i = 0 ;i<N;i++){
            a[i][0] = StdRandom.random();

            a[i][1] = StdRandom.random();
            StdDraw.point(a[i][0],a[i][1]);
        }
        double dis =Double.POSITIVE_INFINITY ;
        double tmp_dis =0 ;
        for(int j=0;j<N;j++){
            for(int i=j+1;i<N;i++){
                tmp_dis = Math.pow((a[j][0]-a[i][0]),2)+Math.pow((a[j][1]-a[j][1]),2) ;
                StdOut.println("dis "+dis);
                if(tmp_dis<dis){
                    dis = tmp_dis ;
                }
            }
        }
        //return Math.sqrt(tmp_dis) ;
        return dis ;
    }

    public static void main(String[] args){
        double result =Point2D(10);
        StdOut.println(result);
    }
}
