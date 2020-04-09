package chapter1.chapter1_1.homework;

import algs4.StdOut;

public class c1_1_13 {
    public static void main(String[] args){
        int[][] a = {{1,2,3},{4,5,6}};

        for(int i = 0; i<a.length;i++){
            for(int j = 0 ;j<a[i].length;j++){
                StdOut.print(a[i][j]);
                StdOut.print(" ");
            }
            StdOut.println("\n");
        }
        for(int i = 0; i<a[0].length;i++){
            for(int j = 0 ;j<a.length;j++){
                StdOut.print(a[j][i]);
                StdOut.print(" ");
            }
            StdOut.println("\n");
        }

    }
}
