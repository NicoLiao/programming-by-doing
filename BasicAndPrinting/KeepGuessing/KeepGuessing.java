//BasicAndPrinting KeepGuessing 50pts Nico Liao
import java.util.*;
public class KeepGuessing {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        Random r = new Random();
        int x = 1 + r.nextInt(10);
        int ans;
        System.out.println("I'm Thinking a number between 1-10, try to guess");
        ans = keyboard.nextInt();
        while (ans != x) {
            System.out.println("Wrong, Guess Again");
            ans = keyboard.nextInt();
        }
        System.out.println("Correct, it was " + x);





    }
}
