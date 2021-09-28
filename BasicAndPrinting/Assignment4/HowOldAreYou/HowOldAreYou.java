//BasicAndPrinting HowOldAreYou 25pts Nico Liao
import java.util.Scanner;
public class HowOldAreYou {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int age;
        String name;
        System.out.println("What's your name?");
        name = keyboard.next();
        System.out.print( "How old are you? " );
		age = keyboard.nextInt();
        if (age < 16) {
            System.out.println(name + " You can't drive");
        } 
        if (age < 18) {
            System.out.println(name + " You can't vote");
        }
        if (age < 25) {
            System.out.println(name + " You can't rent a car");
        }
        if (age >= 25) {
            System.out.println(name + " You can do anything that's legal");
        }
    }
}
