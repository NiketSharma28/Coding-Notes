package NIKET;
class TestDemo {
    static int add (int a,int b){
        return a+b;
    }
    static double add(double a,double b){
        return a+b;
    }
}
public class FuctionOverloading{
    public static void main(String[]args)
    {
        System.out.println(TestDemo.add(11,11));
        System.err.println(TestDemo.add(12.3,12.6));
    }
}

