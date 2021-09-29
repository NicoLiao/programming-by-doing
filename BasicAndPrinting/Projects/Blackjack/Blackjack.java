//Project Blackjack 200pts Nico Liao
import java.util.*;
public class Blackjack {
    static Random r = new Random();

    //Starting player cards + total
    static int player_card1 = 2 + r.nextInt(10);
    static int player_card2 = 2 + r.nextInt(10);
    static int player_total;

    //Starting dealer cards + total
    static int dealer_card1 = 2 + r.nextInt(10);
    static int dealer_card2 = 2 + r.nextInt(10);
    static int dealer_total = dealer_card1 + dealer_card2;

    //other values
    static String hit_or_stay;
    static int drawn_card;

    //Print out graphic cards of the player
    static void PlayerCards() {
        if ((player_card1 != 10) && (player_card1 != 11)) {
            System.out.println("|||||");
            System.out.println("||" + player_card1 + "||");
            System.out.println("|||||");
        }else if (player_card1 == 10) {
            System.out.println("|||||");
            System.out.println("|10||");
            System.out.println("|||||");
        }else if (player_card1 == 11) {
            System.out.println("|||||");
            System.out.println("||A||");
            System.out.println("|||||");
        }
        System.out.println();
        if ((player_card2 != 10) && (player_card2 != 11)) {
            System.out.println("|||||");
            System.out.println("||" + player_card2 + "||");
            System.out.println("|||||");
        }else if (player_card2 == 10) {
            System.out.println("|||||");
            System.out.println("|10||");
            System.out.println("|||||");
        }else if (player_card2 == 11) {
            System.out.println("|||||");
            System.out.println("||A||");
            System.out.println("|||||");
        }
    }

    //Print out drawn graphic cards
    static void Drawcard() {
        if ((drawn_card != 10) && (drawn_card != 11)) {
            System.out.println("|||||");
            System.out.println("||" + drawn_card + "||");
            System.out.println("|||||");
        }else if (drawn_card == 10) {
            System.out.println("|||||");
            System.out.println("|10||");
            System.out.println("|||||");
        }else if (drawn_card == 11) {
            System.out.println("|||||");
            System.out.println("||A||");
            System.out.println("|||||");
        }
    }

    //Dealer graphic cards with the unrevealed one
    static void DealerCards() {
        if ((dealer_card1 != 10) && (dealer_card1 != 11)) {
            System.out.println("|||||");
            System.out.println("||" + dealer_card1 + "||");
            System.out.println("|||||");
        }else if (dealer_card1 == 10) {
            System.out.println("|||||");
            System.out.println("|10||");
            System.out.println("|||||");
        }else if (dealer_card1 == 11) {
            System.out.println("|||||");
            System.out.println("||A||");
            System.out.println("|||||");
        }
        System.out.println();
        System.out.println("|||||");
        System.out.println("|||||");
        System.out.println("|||||");
    }

    //Dealer graphic cards
    static void DealerCards2() {
        if ((dealer_card1 != 10) && (dealer_card1 != 11)) {
            System.out.println("|||||");
            System.out.println("||" + dealer_card1 + "||");
            System.out.println("|||||");
        }else if (dealer_card1 == 10) {
            System.out.println("|||||");
            System.out.println("|10||");
            System.out.println("|||||");
        }else if (dealer_card1 == 11) {
            System.out.println("|||||");
            System.out.println("||A||");
            System.out.println("|||||");
        }
        
        System.out.println();
        if ((dealer_card2 != 10) && (dealer_card2 != 11)) {
            System.out.println("|||||");
            System.out.println("||" + dealer_card2 + "||");
            System.out.println("|||||");
        }else if (dealer_card2 == 10) {
            System.out.println("|||||");
            System.out.println("|10||");
            System.out.println("|||||");
        }else if (dealer_card2 == 11) {
            System.out.println("|||||");
            System.out.println("||A||");
            System.out.println("|||||");
        }
    }
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);


        //Welcome
        System.out.println("Welcome to Blackjack!");

        //Player gets the cards and total
        System.out.println("You got a " + player_card1 + " and " + player_card2);
        System.out.println("Your total is " + (player_total = player_card1 + player_card2));

        //Make sure no double A
        if (player_total > 21) {
            System.out.println("Your total number is over 21, you lost...unlucky");
            System.exit(0);
        }
        System.out.println();
        PlayerCards();

        //Dealer gets the cards
        System.out.println("The dealer gets a " + dealer_card1 + " and a hidden card");
        System.out.println("His total is hidden too");
        DealerCards();
        System.out.println();

        //Player's turn
        System.out.print("Would you like to \"hit\" or \"stay\"? ");
        hit_or_stay = keyboard.next();
        while (hit_or_stay.equalsIgnoreCase("hit")) {
            drawn_card = 2 + r.nextInt(10);
            System.out.println("You drew a " + drawn_card);
            Drawcard();
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

        //Dealer's turn
        System.out.println();
        System.out.println("Ok, dealer's turn now");
        System.out.println("His hidden card was " + dealer_card2);
        System.out.println("His total was " + dealer_total);
        DealerCards2();
        System.out.println();
        while (dealer_total <= 16) {
            drawn_card = 2 + r.nextInt(10);
            System.out.println("The dealer drew a " + drawn_card);
            Drawcard();
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