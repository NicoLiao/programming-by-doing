//RandomNumbers OneShotHiLo 35pts Nico Liao
import java.util.*;
public class OneShotHiLo {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        Random r = new Random();
        int x = 1 + r.nextInt(100);
        int ans;
        System.out.println("I'm Thinking a number between 1-100, try to guess");
        ans = keyboard.nextInt();
        if (x == ans) {
            System.out.println("You Got It!!!");
        }else if (x < ans) {
            System.out.println("It was too high, I was thinking of " + x);
        }else if (x > ans) {
            System.out.println("It was too low, I was thinking of " + x);
        }

    }
}
