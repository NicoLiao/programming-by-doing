import java.util.*;
public class DateCheck {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int y, d;
        String m;
        System.out.println("Please Enter The Year");
        y = keyboard.nextInt();
        while(y > 2021 || y < 1900) {
            System.out.println("Please Enter The Year");
            y = keyboard.nextInt();
        }
        System.out.println("Please Enter The Month");
        m = keyboard.next();
        int mint;
        while (true) {
                try {
                    mint = Integer.parseInt(m);
                    break;
                }catch (NumberFormatException e) {
                    // do nothing.
                }


            System.out.println ("Please Enter The Month");
            m = keyboard.next();
        }
        System.out.println("Please Enter The Day");
        d = keyboard.nextInt();
        while(d > 30 || d < 1) {
            System.out.println("Please Enter The Day");
            d = keyboard.nextInt();
        }
        System.out.print("Your Birthday is " + y + "/" + m + "/" + d);
    }  
}
