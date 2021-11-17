//Array LocatingTheLargestValue 110pts Nico Liao
import java.util.*;
public class LocatingTheLargestValue {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
		Random r = new Random();
		int arr[] = new int[10];
        int largestV = 0;
        int slot = 0;
        System.out.print("Array: ");
		for (int i=0; i<arr.length; i++) {
			arr[i] = 1 + r.nextInt(99);
			System.out.print(arr[i] + " ");
		}
        for (int i=0; i<arr.length; i++) {
			if (largestV < arr[i]) {
                largestV = arr[i];
                slot = i;
            }
		}
        System.out.println("The Largest Value is: " + largestV);
        System.out.println("It is in slot: " + slot);

    }
}
