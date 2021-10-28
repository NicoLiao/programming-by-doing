//NestedLoop MoreNumberPuzzles 100pts Nico Liao
import java.util.*;
public class MoreNumberPuzzles {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int choice;
        while(true) {
            System.out.println("1) Find two digit numbers <= 56 with sums of digits > 10");
            System.out.println("2) Find two digit number minus number reversed which equals sum of digits");
            System.out.println("3) Quit");
            choice = keyboard.nextInt();
            if (choice == 1) {
                selection1();
            }else if (choice == 2) {
                selection2();
            }else if (choice == 3) {
                System.exit(0);
            }
        }
    }
    public static void selection1() {
        for(int i=1; i<10; i++) {
            for(int j=0; j<10; j++) {
                if(i*10+j < 10 || i*10+j > 56) {
                    break;
                }else {
                    System.out.print(i*10+j + ", ");
                    System.out.println(i + "+" + j + "=" + (i+j));
                }
            }
        }
    }
    public static void selection2() {
        for(int i=1; i<10; i++) {
            for(int j=0; j<10; j++) {
                if((i*10+j)-(j*10+i) == (i+j)) {
                    System.out.println((i*10+j) + "-" + (j*10+i) + "=" + (i+j));
                }
            }
        }    
    }
}