package chapter1.chapter1_3.simples;

import java.util.Iterator;

public class Stack<Iterm> implements Iterable<Iterm> {
    private int N ;
    private Node first ;

    public void push(Iterm iterm){
        Node old_first = first ;
        first.iterm = iterm;
        first.next = old_first;
        N++;
    }
    public Iterm pop(){
        Iterm iterm = first.iterm;
        first = first.next ;
        N--;
        return iterm ;
    }
    public boolean isEmpty(){
        return false ;
    }
    public int size(){
        return N ;
    }

    @Override
    public Iterator<Iterm> iterator() {
        return new  ListIterator() ;
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
