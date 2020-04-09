package chapter1.chapter1_1.simple;

import algs4.In;
import algs4.StdIn;

import java.util.Arrays ;
public class BinarySearch{
    public static int rank (int key , int[] a){
        int lo = 0 ;
        int hi = a.length -1 ;
        while (lo <= hi){
            int mid = lo+ (hi- lo)/2 ;
            if(a[mid] >key )
                hi = mid -1 ;
            else if (a[mid]<key)
               lo = mid +1;
            else
                return mid ;
        }
        return -1 ;
    }
    public static void main(String[] args)
    {

        //int[] whitelist =  {1,2,24,234,242,2,3,4,5};
        int[] whitelist = In.readInts(args[0]);
        System.out.println(whitelist);
        Arrays.sort(whitelist);

        for(int j =0;j<whitelist.length;j++){
            //System.out.println(j);
            System.out.println(whitelist[j]);
           // inputlist.append(whitelist[j]).append(',');

        }
        //System.out.println(inputlist);


        while (! StdIn.isEmpty()) {
            int key = StdIn.readInt();
            int result = rank(key, whitelist);
            System.out.println(result);
        }
    }
}
