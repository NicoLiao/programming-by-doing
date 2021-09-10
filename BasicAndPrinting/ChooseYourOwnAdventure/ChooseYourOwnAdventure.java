//BasicAndPrinting ChooseYourOwnAdventure 60pts Nico Liao
import java.util.Scanner;
public class ChooseYourOwnAdventure {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String place, place2, yesno;
        System.out.println("You are in a creepy house!  Would you like to go \"upstairs\" or into the\"kitchen\"?");
        place = keyboard.next();
        if (place.equalsIgnoreCase("upstairs")) {
            System.out.println("Upstairs you see a hallway.  At the end of the hallway is the master \"bedroom\".  There is also a \"bathroom\" off the hallway.  Where would you like to go?");
            place2 = keyboard.next();
            if (place2.equalsIgnoreCase("bedroom")) {
                System.out.println("You are in a plush bedroom, with expensive-looking hardwood furniture.  The bed is unmade.  In the back of the room, the closet door is ajar.  Would you like to open the door? (\"yes\" or \"no\")");
                yesno = keyboard.next();
                if (yesno.equalsIgnoreCase("yes")) {
                    System.out.println("A ghost jump out and you get scared and die.");
                }else if (yesno.equalsIgnoreCase("no")) {
                    System.out.println("I guess you'll never know what's in there.");
                }
            }else if (place2.equalsIgnoreCase("bathroom")) {
                System.out.println("You walk into a bathroom, it stinks a lot and you can't hold to stay in the bathroom for a second. However, you sense that there are some valuable treasures in the bathroom. Do you want to stay? (\"yes\" or \"no\")");
                yesno = keyboard.next();
                if (yesno.equalsIgnoreCase("yes")) {
                    System.out.println("You eventually die to the smell in the bathroom.");
                }else if (yesno.equalsIgnoreCase("no")) {
                    System.out.println("You leave the bathroom and find a diamond ring on the groud!");
                }
            }
        }else if (place.equalsIgnoreCase("kitchen")) {
            System.out.println("There is a long countertop with dirty dishes everywhere.  Off to one side there is, as you'd expect, a refrigerator. You may open the \"refrigerator\" or look in a \"cabinet\".");
            place2 = keyboard.next();
            if (place2.equalsIgnoreCase("refrigerator")) {
                System.out.println("Inside the refrigerator you see food and stuff.  It looks pretty nasty. Would you like to eat some of the food? (\"yes\" or \"no\")");
                yesno = keyboard.next();
                if (yesno.equalsIgnoreCase("no")) {
                    System.out.println("You die of starvation eventually.");
                }else if (yesno.equalsIgnoreCase("yes")) {
                    System.out.println("You die of food poisoning.");
                }
            }else if (place2.equalsIgnoreCase("cabinet")) {
                System.out.println("You see some plates, glass bottles, and some utensil. Do you want to grap some utensil? (\"yes\" or \"no\")");
                yesno = keyboard.next();
                if (yesno.equalsIgnoreCase("no")) {
                    System.out.println("You get killed by the house owner.");
                }else if (yesno.equalsIgnoreCase("yes")) {
                    System.out.println("You grap some knifes, then you fall down and the knife stucks into your heart");
                }
            }
        }
    }
}
