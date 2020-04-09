package chapter1.chapter1_3.simples;

import java.util.Iterator;

public class Queue<Iterm> implements Iterable<Iterm>{
    private int  N ;
    private Node first;
    private Node last ;

    public void enqueue(Iterm iterm){
        Node old_last = last ;
        last = new Node() ;

        last.iterm = iterm ;
        last.next = null ;
        if(isEmpty())
            first = last ;
        else
            old_last.next = last ;
        N=N+1 ;
    }
    public Iterm dequeue(){
        Iterm iterm = first.iterm ;
        first = first.next ;
        if(isEmpty())
            last = null ;
        N = N-1 ;
        return iterm;
    }
    public boolean isEmpty(){
        return N==0 ;
    }
    public int size(){
        return N ;
    }

    @Override
    public Iterator<Iterm> iterator() {
        return null;
    }
    private class ListIterator implements Iterator<Iterm>{
        private Node current = first ;

        @Override
        public boolean hasNext() {
            return current != null;
        }

        @Override
        public Iterm next() {
            current = current.next ;
            Iterm iterm =current.iterm;
            return iterm;
        }

        @Override
        public void remove() {

        }
    }

    private class Node{
        Iterm iterm;
        Node next ;
    }
}
