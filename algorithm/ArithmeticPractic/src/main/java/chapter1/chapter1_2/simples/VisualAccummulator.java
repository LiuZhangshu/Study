package chapter1.chapter1_2.simples;

import algs4.StdDraw;
import algs4.StdOut;
import algs4.StdRandom;

public class VisualAccummulator {
    private double total ;
    private int N ;
    public VisualAccummulator(int trial,double max){
        StdDraw.setXscale(0,trial);
        StdDraw.setYscale(0,max);
        StdDraw.setPenRadius(.005);
    }
    public void addDataValue(double val){
        N++ ;
        total += val ;
        StdDraw.setPenColor(StdDraw.DARK_GRAY);
        StdDraw.point(N,val);
        StdDraw.setPenColor(StdDraw.RED);
        StdDraw.point(N,total/N);

    }
    public double mean(){
        return total/N ;
    }
    public String toString(){
        return "Mean (" + N + " values): " + String.format("%7.5f",mean()) ;
    }
    public static void main(String[] args){
        int T = 100 ;
        VisualAccummulator a = new VisualAccummulator(100,1.0);
        for(int i =0 ;i<T;i++){
            a.addDataValue(StdRandom.random());
        }
        StdOut.println(a);
    }
}
