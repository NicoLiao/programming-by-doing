//ArrayList SortingAnArraylist 120pts Nico Liao
import java.util.*;
import java.util.Random;
import java.util.Collections;
public class SortingAnArraylist {
    public static void main( String[] args ) {
        Random r = new Random();
        ArrayList<Integer> arl = new ArrayList<Integer>();
        for ( int i=0; i<20; i++ ) {
			arl.add(1 + r.nextInt(100));
        }
        System.out.print("Before: ");
        System.out.println(arl);
        
        Collections.sort(arl);
        Collections.reverse(arl);
        System.out.print("After: ");
        System.out.println(arl);

    }
    
}
