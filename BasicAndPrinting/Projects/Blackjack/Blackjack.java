//Project Blackjack 200pts Nico Liao
import java.util.*;
public class Blackjack {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        Random r = new Random();

        //Starting player cards + total
        int player_card1 = 2 + r.nextInt(10);
        int player_card2 = 2 + r.nextInt(10);
        int player_total;

        //Starting dealer cards + total
        int dealer_card1 = 2 + r.nextInt(10);
        int dealer_card2 = 2 + r.nextInt(10);
        int dealer_total = dealer_card1 + dealer_card2;

        //other values
        String hit_or_stay;
        int drawn_card;

        //Welcome
        System.out.println("Welcome to Blackjack!");

        //Player gets the cards and total
        System.out.println("You got a " + player_card1 + " and " + player_card2);
        System.out.println("Your total is " + (player_total = player_card1 + player_card2));
        System.out.println();

        //Dealer gets the cards
        System.out.println("The dealer gets a " + dealer_card1 + " and a hidden card");
        System.out.println("His total is hidden too");
        System.out.println();


        //Player's turn
        System.out.print("Would you like to \"hit\" or \"stay\"? ");
        hit_or_stay = keyboard.next();
        while (hit_or_stay.equalsIgnoreCase("hit")) {
            drawn_card = 2 + r.nextInt(10);
            System.out.println("You drew a " + drawn_card);
            player_total = player_total + drawn_card;
            System.out.println("Your total now is " + player_total);
            if (player_total > 21) {
                System.out.println("Your total number is over 21, you lost...unlucky");
                System.exit(0);
            }else if (player_total <= 21) {
                System.out.print("Would you like to \"hit\" or \"stay\"? ");
                hit_or_stay = keyboard.next();
            }
        }

        //dealer's turn
        System.out.println();
        System.out.println("Ok, dealer's turn now");
        System.out.println("His hidden card was " + dealer_card2);
        System.out.println("His total was " + dealer_total);
        System.out.println();
        while (dealer_total <= 16) {
            drawn_card = 2 + r.nextInt(10);
            System.out.println("The dealer drew a " + drawn_card);
            dealer_total = dealer_total + drawn_card;
            System.out.println("His total now is " + dealer_total);
            System.out.println();
            if (dealer_total > 21) {
                System.out.println("His total number is over 21, YOU WIN!");
                System.exit(0);
            }
        }

        //Dealer total vs Player total
        System.out.println("Dealer stays");
        System.out.println();
        System.out.println("Dealer total is " + dealer_total);
        System.out.println("Your total is " + player_total);
        if (player_total > dealer_total) {
            System.out.println("YOU WIN!");
        }else if (player_total <= dealer_total) {
            System.out.println("You Lose...");
        }
    }
}