//NestedLoop GettingIndividualDigits 80pts Nico Liao
public class GettingIndividualDigits {
    public static void main(String[] args) {
        for(int i=1; i<10; i++) {
            for(int j=0; j<10; j++) {
                System.out.print(i*10+j + ", ");
                System.out.println(i + "+" + j + "=" + (i+j));
            }
        }
    }
}
