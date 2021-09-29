//IfStatements2 TwentyQuestions 35pts Nico Liao
import java.util.Scanner;
public class TwentyQuestions {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String ans1, ans2;
        System.out.println("Question 1) Is it animal, vegetable, or mineral?");
        ans1 = keyboard.next();
        System.out.println("Question 2) Is it bigger than a breadbox?");
        ans2 = keyboard.next();
        if (ans1.equalsIgnoreCase("animal")) {
            if (ans2.equalsIgnoreCase("yes")) {
                System.out.println("moose");
            }
            if (ans2.equalsIgnoreCase("no")) {
                System.out.println("squirrel");
            }
        }else if (ans1.equalsIgnoreCase("vegetable")) {
            if (ans2.equalsIgnoreCase("yes")) {
                System.out.println("watermelon");
            }
            if (ans2.equalsIgnoreCase("no")) {
                System.out.println("carrot");
            }
        }else if (ans1.equalsIgnoreCase("mineral")) {
            if (ans2.equalsIgnoreCase("yes")) {
                System.out.println("Camaro");
            }
            if (ans2.equalsIgnoreCase("no")) {
                System.out.println("paper clip");
            }
        }

    }
}
