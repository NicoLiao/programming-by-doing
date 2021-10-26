import java.util.*;
public class PTCalculator {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        double a, b, c;
        String ans, another;
        do {
            System.out.println("Solve for Hypotenuse or Leg? (H/L)");
            ans = keyboard.next();
            if (ans.equalsIgnoreCase("H")) {
                System.out.println("Enter Side A");
                a = keyboard.nextDouble();
                System.out.println("Enter Side B");
                b = keyboard.nextDouble();
                c = Math.pow((Math.pow(a, 2) + Math.pow(b, 2)), 0.5);
                System.out.println("Side C is " + c);
            }else if (ans.equalsIgnoreCase("L")) {
                System.out.println("Enter Side A");
                a = keyboard.nextDouble();
                System.out.println("Enter Side C");
                c = keyboard.nextDouble();
                b = Math.pow((Math.pow(c, 2) - Math.pow(a, 2)), 0.5);
                System.out.println("Side B is " + b);
            }
            System.out.println("Solve another triangle? (y/n)");
            another = keyboard.next();
        }while(another.equalsIgnoreCase("y"));
        System.out.println("Ok THanks for using");
    }  
}
