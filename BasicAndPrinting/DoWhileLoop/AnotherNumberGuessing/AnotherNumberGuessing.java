//DoWhileLoop AnotherNumberGuessing 35pts Nico Liao
import java.util.*;
public class AnotherNumberGuessing {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        Random r = new Random();
        int x = 1 + r.nextInt(10);
        int ans;
        System.out.println("I'm Thinking a number between 1-10, try to guess");
        ans = keyboard.nextInt();
        int i = 1;
        do {
            if (ans < x) {
                System.out.println("Wrong, Too Low");
                ans = keyboard.nextInt();
            }else if (ans > x) {
                System.out.println("Wrong, Too High");
                ans = keyboard.nextInt();
            }
            
            i++;
        } while (ans != x) ;
        System.out.println("Correct, it took you " + i + " try/tries");






    }
}
