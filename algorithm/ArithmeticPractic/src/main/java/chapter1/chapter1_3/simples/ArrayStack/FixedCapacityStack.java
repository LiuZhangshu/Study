package chapter1.chapter1_3.simples.ArrayStack;

import algs4.StdIn;
import algs4.StdOut;

public class FixedCapacityStack<Iterm> {
    private Iterm[] a ;
    private int N ;
    FixedCapacityStack(int cap){
        a =(Iterm[]) new Object[cap];
    }
    private void resize(int max){
        Iterm[] temp = (Iterm[]) new Object[max];
        for (int i=0 ;i<N;i++){
            temp[i] = a[i] ;
        }
        a = temp ;
    }
    public void push(Iterm item){
        if(N==a.length) resize(2*a.length);
        a[N++] = item ;
    }

    public  Iterm pop(){
        Iterm iterm =  a[--N] ;
        a[N] = null ;
        if(N>0 && N== a.length/4) resize(a.length/2);
        return iterm ;
    }
    public int size(){
        return N ;
    }
    public boolean isEmpty(){
        return N==0 ;
    }
    public static void main(String[] args){
        FixedCapacityStack s = new FixedCapacityStack(100);
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
