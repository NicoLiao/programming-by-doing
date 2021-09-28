//IfStatements2 GenderGame 50pts Nico Liao
import java.util.Scanner;
public class GenderGame {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String fname, lname, gender, married;
        int age;
        System.out.println("What's your first name");
        fname = keyboard.next();
        System.out.println("What's your last name");
        lname = keyboard.next();
        System.out.println("What's your gender (F or M)");
        gender = keyboard.next();
        if (gender.equalsIgnoreCase("M")) {
            System.out.println("What's your age");
            age = keyboard.nextInt();
            if (age < 20) {
                System.out.println("Then I shall call you " + fname + " " + lname);
            }else if (age >= 20) {
                System.out.println("Then I shall call you Mr." + lname);
            }
        }else if (gender.equalsIgnoreCase("F")) {
            System.out.println("What's your age");
            age = keyboard.nextInt();
            if (age < 20) {
                System.out.println("Then I shall call you " + fname + " " + lname);
            }else if (age >= 20) {
                System.out.println("Are you married (y or n)");
                married = keyboard.next();
                if (married.equalsIgnoreCase("y")) {
                    System.out.println("Then I shall call you Mrs." + lname);
                }else if (married.equalsIgnoreCase("n")) {
                    System.out.println("Then I shall call you Ms." + lname);
                }
            }
        }
    }
}