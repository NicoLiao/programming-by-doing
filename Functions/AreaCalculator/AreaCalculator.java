//Function AreaCalculator 110pts Nico Liao
import java.util.*;
public class AreaCalculator {
    public static void main(String[] args) {
        int choice;
        while(true) {
            System.out.println("---------------");
            System.out.println("1) Triangle");
            System.out.println("2) Rectangle");
            System.out.println("3) Square");
            System.out.println("4) Circle");
            System.out.println("5) Quit");
            System.out.print("Which Shape do you want to calculate: ");
            Scanner keyboard = new Scanner(System.in);
            choice = keyboard.nextInt();
            if (choice == 1) {
                int base, height;
                System.out.print("Base: ");
                base = keyboard.nextInt();
                System.out.print("Height: ");
                height = keyboard.nextInt();
                System.out.println("The area is " + area_triangle(base, height));
                area_triangle(base, height);
            }else if (choice == 2) {
                int length, width;
                System.out.print("Length: ");
                length = keyboard.nextInt();
                System.out.print("Width: ");
                width = keyboard.nextInt();
                System.out.println("The area is " + area_rectangle(length, width));
            }else if (choice == 3) {
                int side;
                System.out.print("Side: ");
                side = keyboard.nextInt();
                System.out.println("The area is " + area_square(side));
            }else if (choice == 4) {
                double radius;
                System.out.print("Radius: ");
                radius = keyboard.nextDouble();
                System.out.println("The area is " + area_circle(radius));
            }else if (choice == 5) {
                break;
            }
        } 
        System.out.println("Bye");
    }
    public static double area_circle( double radius ) {
        double area;
        area = Math.PI*radius*radius;
        return area;
    }
    public static int area_rectangle( int length, int width ) {
        int area;
        area = length*width;
        return area;
    }
    public static int area_square( int side ) {
        int area;
        area = side*side;
        return area;
    }
    public static double area_triangle( int base, int height ) {
        int area;
        area = base*height/2;
        return area;
    }
}
