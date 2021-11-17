//Array ParallelArrays 100pts Nico Liao
import java.util.*;
public class ParallelArrays {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String[] arr1 = {"Joe", "Martha", "Justin", "Julian", "Allen"};
        double[] arr2 = {99.5, 78.5, 82.5, 92.8, 88.2};
        int[] arr3 = {123456, 429149, 851728, 824712, 612732};
        int enter;
        System.out.println("Values: ");
        for(int i=0; i<arr3.length; i++){
			System.out.println(arr1[i]+" "+arr2[i]+" "+arr3[i]);
		}
        System.out.print("ID number to find: ");
        enter = keyboard.nextInt();
        for(int i=0; i<arr3.length; i++){
            if (arr3[i] == enter) {
                System.out.println("Name: " + arr1[i]);
                System.out.println("Average: " + arr2[i]);
                System.out.println("ID: " + arr3[i]);

            }
		}
    }

}