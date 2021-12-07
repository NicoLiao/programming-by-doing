//ArrayList SortingSentence 160pts Nico Liao
import java.util.*;
import java.util.Random;
import java.util.Collections;
public class SortingSentences {
    public static void main( String[] args ) {
        Scanner keyboard = new Scanner(System.in);
        Random r = new Random();
        String s;
        ArrayList<String> arl = new ArrayList<String>();
        System.out.print("Sentence: ");
        s = keyboard.nextLine();
        String[] s2 = s.split(" ");
        for(int x =0; x< s2.length;x++)
        {
            s2[x] = s2[x].toLowerCase();
            arl.add(s2[x]);
        }
        Collections.sort(arl);
        System.out.println(arl);

    }
    
}
