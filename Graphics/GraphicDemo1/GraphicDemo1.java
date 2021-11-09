//Graphics GraphicDemo1 20pts Nico Liao
//1. the window is 800x600px, 800px tall 600px wide
//2. first num means x-position, second means y-position, third means its width, fourth means its height
//3. first num means x-position, second means y-position, third means its horizontal diameter, fourth means its verticle diameter
//4. x-position and y-position
//5. the ones that is coded after will be on top
import java.awt.*;
import javax.swing.JFrame;

public class GraphicDemo1 extends Canvas
{
    public void paint( Graphics g )
    {
        g.setColor(Color.green);
        g.drawRect(50,20,100,200);  // draw a rectangle
        g.fillOval(50,20,100,200); // draw a filled-in oval
        g.setColor(Color.blue);
        g.fillRect(200,400,200,20); // a filled-in rectangle
        g.drawOval(200,430,200,100);
        g.setColor(Color.red);
        g.fillRect(50,430,100,100);
        
        g.setColor(Color.black);
        g.drawString("Graphics are pretty neat.", 500, 100);
        int x = getWidth() / 2;
        int y = getHeight() / 2;
        g.drawString("The first letter of this string is at (" + x + "," + y + ")", x, y);
    }

    public static void main( String[] args )
    {
        // You can change the title or size here if you want.
        JFrame win = new JFrame("GraphicDemo1");
        win.setSize(800,600);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        GraphicDemo1 canvas = new GraphicDemo1();
        win.add( canvas );
        win.setVisible(true);
    }
}