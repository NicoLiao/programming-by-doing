//BasicAndPrinting LimitedHiLo 55pts Nico Liao
import java.util.*;
public class LimitedHiLo {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        Random r = new Random();
        int x = 1 + r.nextInt(100);
        int ans;
        System.out.println("I'm Thinking a number between 1-100, try to guess");
        ans = keyboard.nextInt();
        int i = 1;
        while (ans != x && i < 5) {
            if (ans < x) {
                System.out.println("Wrong, Too Low");
                ans = keyboard.nextInt();
            }else if (ans > x) {
                System.out.println("Wrong, Too High");
                ans = keyboard.nextInt();
            }
            
            i++;
        }
        if (ans == x) {
            System.out.println("Correct");
        }else {
            System.out.println("You Suck, you didn't get it in 5 tries it was " + x);
        }





    }
}
