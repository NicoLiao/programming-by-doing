//Array WhereIsIt 90pts Nico Liao
import java.util.*;
public class WhereIsIt {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
		Random r = new Random();
		int arr[] = new int[10];
        int enter;
        int slot = 0;
        boolean found = false;
        System.out.print("Array: ");
		for (int i=0; i<arr.length; i++) {
			arr[i] = 1 + r.nextInt(99);
			System.out.print(arr[i] + " ");
		}
        System.out.print("Value to find: ");
        enter = keyboard.nextInt();
        for (int i=0; i<arr.length; i++) {
			if (arr[i] == enter) {
                slot = i;
                found = true;
            }
		}
        if (found) {
            System.out.println(enter + " is in slot " + slot + ".");

        }else {
            System.out.println(enter + " is not in the array.");

        }
    }
}
