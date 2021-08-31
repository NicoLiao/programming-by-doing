//BasicAndPrinting TheForgetfulMachine 12pts Nico Liao
import java.util.Scanner;
public class NameAgeAndSalary {
    public static void main(String[] args) {
        String name;
        int age;
        double salary;
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Hi whats your name?");
        keyboard.next();
        System.out.println("And How old are you?");
        keyboard.nextInt();
        System.out.println("How much do you make then?");
        keyboard.nextDouble();
        System.out.println("Good for you, thank you");
    }
    
}
