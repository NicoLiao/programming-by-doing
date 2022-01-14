import java.util.*;
public class PTCalculator {
    public static void main(String[] args) {
        int Count;
        for(Count=1; Count <= 10; Count++) ;
        {
            System.out.println("Count is " + Count);
        }


    }  
    public static void mystery(int x) {
        System.out.print(x%10);
        if((x/10) != 0) {
            mystery(x/10);
        }
        System.out.print(x%10);
    }
}
