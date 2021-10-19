//WhileLoop RightTriangle 65pts Nico Liao
import java.util.*;
public class RightTriangle {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int x, y, z;
        System.out.println("Enter three integers");
        System.out.println("Side 1: ");
        x = keyboard.nextInt();
        System.out.println("Side 2: ");
        y = keyboard.nextInt();
        while (y < x) {
            System.out.println(y + " is smaller than " + x + "Please enter again with a bigger number");
            y = keyboard.nextInt();
        }
        System.out.println("Side 3: ");
        z = keyboard.nextInt();
        while (z < y) {
            System.out.println(z + " is smaller than " + y + "Please enter again with a bigger number");
            z = keyboard.nextInt();
        }
        if ((z*z) != ((x*x) + (y*y))) {
            System.out.println("No, these sides do not form a right triangle");
        }else {
            System.out.println("Yes, these sides do form a right triangle");
        }
    }
}
