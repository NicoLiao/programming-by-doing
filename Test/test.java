import java.util.*;
public class test {

    public static void main(String[] args) {
        int x = 1;
        int exc;
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Welcome to the Factorial Calculator");
        while(true) {
            System.out.println("Enter your number below or type 0 to exit the program");
            String num = keyboard.next();
            while (true) {
                try {
                    exc = Integer.parseInt(num);
                    break;
                }catch (NumberFormatException e) {
                    // do nothing.
                }
                System.out.println("Invalid Input");
                System.out.println("Enter your number below or type 0 to exit the program");
                num = keyboard.next();
            }
            if(exc == 0) {
                System.out.println("Goodbye");
                System.exit(0);
            }
            System.out.println(factorial(exc, x));
        }
        
    }  
    public static int factorial(int n, int x) {
        int answer = x;
        answer *= n;
        if(n != 1) {
            n--;
            return factorial(n, answer);
        }else {
            return answer;
        }
    }

}
