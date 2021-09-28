//BasicAndPrinting TheWorstNumberGame 15pts Nico Liao
import java.util.Scanner;
public class TheWorstNumberGame {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int ans;
        System.out.println("TEH WORST NUBMER GESSING GAME EVAR!!!!!!!1!");
        System.out.println("I'M THKING OF A NBR FROM 1-10.  TRY 2 GESS!");
        ans = keyboard.nextInt();
        if (ans == 4) {
            System.out.println("LOL!!! U GOT IT!  I CANT BELEIVE U GESSED IT WAS 4!");
        }else {
            System.out.println("W00T!  U SUX0R!!!  I PWN J00!!!  IT WAS 4!");
        }
    }
}
