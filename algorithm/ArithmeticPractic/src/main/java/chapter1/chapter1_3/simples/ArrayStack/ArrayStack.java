package chapter1.chapter1_3.simples.ArrayStack;

import algs4.StdIn;
import algs4.StdOut;

import java.util.Iterator;

public class ArrayStack<Iterm> implements Iterable<Iterm>{
    private Iterm[] a ;
    private int N ;
    ArrayStack(int cap){
        a =(Iterm[]) new Object[1];
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
    @Override
    public Iterator<Iterm> iterator() {
        return new ReverseArrayIterator();
    }
    private class ReverseArrayIterator implements Iterator<Iterm>{
        private int  i = N;
        @Override
        public boolean hasNext() {
            return i>0;
        }
        @Override
        public Iterm next() {
            return a[--i];
        }
        @Override
        public void remove() {
        }
    }

    public static void main(String[] args){
        ArrayStack s = new ArrayStack(100);
        while(!StdIn.isEmpty()){
            String iterm = StdIn.readString();
            if(!iterm.equals("-"))
                s.push(iterm);
            else if(!s.isEmpty())
                StdOut.print(s.pop()+" ") ;
        }
        StdOut.println("("+s.size()+" left on stack)");
        Iterator<String> i = s.iterator();
        while(i.hasNext()){
            StdOut.println(i.next());
        }
    }

}
