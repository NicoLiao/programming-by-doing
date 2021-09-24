//BasicAndPrinting Nim 70pts + Bonus 30pts Nico Liao
import java.util.*;
public class Nim {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int A = 4;
        int B = 5;
        int C = 7;
        int turn = 1;
        int n;
        String name1, name2, pile;
        System.out.println("Player 1, enter your name");
        name1 = keyboard.next();
        System.out.println("Player 2, enter your name");
        name2 = keyboard.next();
        System.out.println("A: " + A + "  " + "B: " + B + "   " + "C: " + C);
        while((A + B + C) != 0) {
            if(turn == 1) {
                System.out.println(name1 + ", select a pile(A, B, or C)");
                turn++;
            }else if(turn == 2) {
                System.out.println(name2 + ", select a pile(A, B, or C)");
                turn--;
            }
            pile = keyboard.next();
            if(pile.equalsIgnoreCase("A")) {
                if(A == 0) {
                    while(pile.equalsIgnoreCase("A")) {
                        System.out.println("Nice try, this pile is empty, Choose again");
                        pile = keyboard.next();
                    }
                }
            }else if(pile.equalsIgnoreCase("B")) {
                if(B == 0) {
                    while(pile.equalsIgnoreCase("B")) {
                        System.out.println("Nice try, this pile is empty, Choose again");
                        pile = keyboard.next();
                    }
                }
            }else if(pile.equalsIgnoreCase("C")) {
                if(C == 0) {
                    while(pile.equalsIgnoreCase("C")) {
                        System.out.println("Nice try, this pile is empty, Choose again");
                        pile = keyboard.next();
                    }
                }
            }
            
            System.out.println("how many to remove from the pile");
            n = keyboard.nextInt();
            if(pile.equalsIgnoreCase("A")) {
                while(A < n) {
                    System.out.println("pile A doesn't have that many. Try again");
                    n = keyboard.nextInt();
                }
                while(n <= 0) {
                    System.out.println("You must choose at least 1");
                    n = keyboard.nextInt();
                }
                if(n > 0) {
                    A = A - n;
                }
            }
            if(pile.equalsIgnoreCase("B")) {
                while(B < n) {
                    System.out.println("pile B doesn't have that many. Try again");
                    n = keyboard.nextInt();
                }
                while(n <= 0) {
                    System.out.println("You must choose at least 1");
                    n = keyboard.nextInt();
                }
                if(n > 0) {
                    B = B - n;
                }
            }
            if(pile.equalsIgnoreCase("C")) {
                while(C < n) {
                    System.out.println("pile C doesn't have that many. Try again");
                    n = keyboard.nextInt();
                }
                while(n <= 0) {
                    System.out.println("You must choose at least 1");
                    n = keyboard.nextInt();
                }
                if(n > 0) {
                    C = C - n;
                }
            }
            System.out.println("A: " + A + "    " + "B: " + B + "   " + "C: " + C);
        }
        if(turn == 1) {
            System.out.println(name1 + " you won");
        }else if(turn == 2) {
            System.out.println(name2 + " you won");

        }
    }
}

                