//DoWhileLoop FlipAgain 20pts Nico Liao
//Yes it will still work if we just do step 2 because do-while loop runs the program once first, therefore you don't have to initialize something
//That is already initialized in the loop. The only reason we need to set a value first is because while loop detects conditions first, which 
//means if the condition has no value first, it will not run
import java.util.*;
public class FlipAgain
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		Random rng = new Random();
		String again = "y";
		do {
			int flip = rng.nextInt(2);
			String coin;

			if ( flip == 1 )
				coin = "HEADS";
			else
				coin = "TAILS";

			System.out.println( "You flip a coin and it is... " + coin );

			System.out.print( "Would you like to flip again (y/n)? " );
            again = keyboard.next();
		}while (again.equals("y"));
	}
}