//Array FindingAValueInAnArray 100pts Nico Liao
import java.util.*;
public class FindingAValueInAnArray {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
		Random r = new Random();
		int arr[] = new int[10];
        int enter;
        System.out.print("Array: ");
		for (int i=0; i<arr.length; i++) {
			arr[i] = 1 + r.nextInt(99);
			System.out.print(arr[i] + " ");
		}
        System.out.print("Value to find: ");
        enter = keyboard.nextInt();
        for (int i=0; i<arr.length; i++) {
			if (enter == arr[i]) {
                System.out.println(enter + " is in the Array");
            }
		}
    }
}
