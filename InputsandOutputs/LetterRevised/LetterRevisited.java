//InputsandOutputs LetterRevisited 40pts Nico Liao
import java.io.*;
public class LetterRevisited{
	public static void main(String args[]) throws IOException{
	File letter = new File("letter.txt");
	FileWriter fw =new FileWriter(letter);
	PrintWriter pw = new PrintWriter(fw);
        pw.println("+------------------------------+");
        pw.println("|                          ####|");
        pw.println("|                          ####|");
        pw.println("|                          ####|");
        pw.println("|                              |");
        pw.println("|                              |");
        pw.println("|                     Nico Liao|");
        pw.println("|               1 Microsoft Way|");
        pw.println("|                       Hsinchu|");
        pw.println("|------------------------------|");
		pw.close();
	}
}