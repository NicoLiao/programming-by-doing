//BasicAndPrinting TheForgetfulMachine 15pts Nico Liao
import java.util.Scanner;
public class NameAgeAndSalary {
    public static void main(String[] args) {
        String name;
        int age;
        double salary;
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Hi whats your name?");
        name = keyboard.next();
        System.out.println("Hi " + name + " ,And How old are you?");
        age = keyboard.nextInt();
        System.out.println("So you're " + age + " huh? thats not old at all! How much do you make then?");
        salary = keyboard.nextDouble();
        System.out.println(salary + "! I hope that's per hour and not per year! LOL!");
    }
    
}
