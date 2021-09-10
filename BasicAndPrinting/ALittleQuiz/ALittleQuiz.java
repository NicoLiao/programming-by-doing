//BasicAndPrinting ALittleQuiz 40pts Nico Liao
import java.util.Scanner;
public class ALittleQuiz {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
		int ans;
        int correct = 0;
		System.out.println("Q1) What is the capital of Alaska?");
		System.out.println("	1) Melbourne");
		System.out.println("	2) Anchorage");
		System.out.println("	3) Juneau");
		ans = keyboard.nextInt();
        if (ans == 3) {
            System.out.println("Correct, next");
            correct++;
        }else {
            System.out.println("Incorrect, it was 3");
        }
        System.out.println("Q2) Can you store the value \"cat\" in a variable of type int?");
        System.out.println("	1) yes");
        System.out.println("	2) no");
        ans = keyboard.nextInt();
        if (ans == 2) {
            System.out.println("Correct, next");
            correct++;
        }else {
            System.out.println("Incorrect, it was 1");
        }
        System.out.println("Q3) What is the result of 9+6/3?");
        System.out.println("	1) 5");
        System.out.println("	2) 11");
        System.out.println("	3) 15/3");
        ans = keyboard.nextInt();
        if (ans == 2) {
            System.out.println("Correct, next");
            correct++;
        }else {
            System.out.println("Incorrect, it was 2");
        }
        System.out.println("You got " + correct + " out of 3 correct");
    }
}
