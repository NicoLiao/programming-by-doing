//RandomNumbers Dice 25pts Nico Liao
import java.util.Random;
public class Dice {
    public static void main(String[] args) {
        Random r = new Random();
        int x = 1 + r.nextInt(6);
        int y = 1 + r.nextInt(6);
        int z = x + y;
        System.out.println("First roll " + x);
        System.out.println("Second roll " + y);
        System.out.println("Total " + z);


    }
}
