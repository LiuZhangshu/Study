package chapter1.chapter1_1.homework;

import algs4.StdIn;
import algs4.StdOut;

public class c1_1_21 {
    public static void main(String[] args){
        String result = "" ;
        while (true){
            String tmp = StdIn.readString();
            if (!tmp.equals("q")) {
                String[] tmp_list=tmp.split(",");
                double tmp_score = Double.parseDouble(tmp_list[1])/Double.parseDouble(tmp_list[2]);
                result = result + tmp_list[0]+"\t"+tmp_list[1]+"\t"+tmp_list[2]+"\t"+tmp_score +"\n";
            } else {
                StdOut.println("shutdown");
                break;
            }
        }
        StdOut.println(result);
    }
}
