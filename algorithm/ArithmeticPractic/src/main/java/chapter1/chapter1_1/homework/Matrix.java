package chapter1.chapter1_1.homework;

public class Matrix {
    public static void main(String[] args){

    }
    static double dot(double[] x,double[] y){
        if(x.length==2 && y.length==2 ){
            return x[0]*y[1] + x[1]*y[0];
        }else{
            return -1 ;
        }
    }
}
