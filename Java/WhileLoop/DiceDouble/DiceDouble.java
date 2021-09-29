//WhileLoop DiceDouble 40pts Nico Liao
import java.util.Random;
public class DiceDouble {
    public static void main(String[] args) {
        Random r = new Random();
        int x = 1 + r.nextInt(6);
        int y = 1 + r.nextInt(6);
        while (y != x) {
            System.out.println("First roll: " + x);
            System.out.println("Second roll: " + y);
            int z = x + y;
            System.out.println("Total: " + z);
            int a = 1 + r.nextInt(6);
            int b = 1 + r.nextInt(6);
            x = a;
            y = b;
        }
        System.out.println("First roll: " + x);
        System.out.println("Second roll: " + y);
        System.out.println("Total: " + (x+y));

    }
}
