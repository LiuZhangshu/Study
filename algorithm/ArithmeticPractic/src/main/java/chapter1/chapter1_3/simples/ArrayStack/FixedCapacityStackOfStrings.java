package chapter1.chapter1_3.simples.ArrayStack;

import algs4.StdIn;
import algs4.StdOut;

public class FixedCapacityStackOfStrings {
    private String[] a ;
    private int N ;
    FixedCapacityStackOfStrings(int cap){
        a = new String[cap];
    }
    public void push(String item){
        a[N++] = item ;
    }
    public  String pop(){
        return a[--N];
    }
    public int size(){
        return N ;
    }
    public boolean isEmpty(){
        return N==0 ;
    }
    public static void main(String[] args){
        FixedCapacityStackOfStrings s = new FixedCapacityStackOfStrings(100);
        while(!StdIn.isEmpty()){
            String iterm = StdIn.readString();
            if(!iterm.equals("-"))
                s.push(iterm);
            else if(!s.isEmpty())
                StdOut.print(s.pop()+" ") ;
        }
        StdOut.println("("+s.size()+" left on stack");
    }
}
