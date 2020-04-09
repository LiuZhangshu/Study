package algs4;

public class practic {
    public  static void main(String[] args){
        StdOut.println((0+15)/2);
        StdOut.println(2.0e-6*100000000.1);
        StdOut.println(true && false || true && false);
        //StdOut.println(c1_1_3());
        StdOut.println(c1_1_5(0.000001,2));
    }
    public static String c1_1_3 (){
        int a = StdIn.readInt();
        int b = StdIn.readInt();
        int c = StdIn.readInt();

        if(a==b && b==c){
            return "equal";
        }else{
        return "not equl";}
    }
    public static boolean c1_1_5(double x,double y){
        if(x>0 && x<1 && y>0 && y<1){
            return true ;
        }else{
            return false ;
        }
    }

}
