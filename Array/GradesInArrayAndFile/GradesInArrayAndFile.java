//Array GradesInArrayAndFile 90pts Nico Liao
import java.util.*;
import java.io.*;
public class GradesInArrayAndFile{
	public static void main(String[] args) throws IOException{
	Scanner keyboard = new Scanner(System.in);
    int[] arrI = new int[5]; 
    int x;
    Random r = new Random();
	System.out.print("Name (First Last): ");
	String fname = keyboard.next();
	String lname = keyboard.next();
	System.out.print("Filename: ");
	String text = keyboard.next();
	FileWriter fw = new FileWriter(text);
	PrintWriter pw = new PrintWriter(fw);

	System.out.println("Data stored into score.txt.");
	pw.println(fname + " " + lname);
	for(int i=0; i<5; i++) {
        x = 1 + r.nextInt(99);
        arrI[i] = x;
        pw.print(arrI[i] + " ");
    }
	pw.close();
}
}