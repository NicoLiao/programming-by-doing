//ForLoop AddingValues 30pts Nico Liao
import java.util.*;
public class AddingValues {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n, j = 0;
        System.out.print("Number: ");
        n = keyboard.nextInt();
        for(int i = 1; i <= n; i++) {
            System.out.print(i + " ");
            j = j + i;
        }
        System.out.println();
        System.out.println("The total is " + j);
    }
}
