package chapter1.chapter1_3.simples;

import java.util.Iterator;

public class Bag<Iterm> implements Iterable{
    Iterm[] bag ;
    int N ;
    public Bag(){
        N =0 ;
        bag = (Iterm[]) new Object[1];
    }
    public void add (Iterm iterm){
        if(N==bag.length) resize(2*bag.length);
        bag[N++] = iterm ;
    }
    public boolean isEmpty(){
        return N==0 ;
    }
    public int size(){
        return N ;
    }

    private void resize(int max){
        Iterm[] temp = (Iterm[]) new Object[max];
        for (int i=0 ;i<N;i++){
            temp[i] = bag[i] ;
        }
        bag = temp ;
    }
    @Override
    public Iterator iterator() {
        return null;
    }


}
