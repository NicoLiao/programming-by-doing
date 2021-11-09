//Graphics Boxy3 60pts Nico Liao
import java.awt.*;
import javax.swing.JFrame;

/************************************************************************************
 **          B O X Y  3 - write and use function - boxes different sizes           **
 ***********************************************************************************/

class Boxy3 extends Canvas
{
	public void paint( Graphics window )
	{
		//                  color       x    y   w   h
		drawBox( window, Color.YELLOW, 200, 300, 50, 30 );
		drawBox( window, Color.GREEN,  400, 220, 30, 150 );
		drawBox( window, Color.RED, 300, 300, 60, 130 );
		drawBox( window, Color.PINK,  500, 220, 40, 50 );
        drawBox( window, Color.BLACK, 600, 300, 120, 100 );
		drawBox( window, Color.BLUE,  100, 220, 70, 80 );
        drawBox( window, Color.MAGENTA, 180, 340, 100, 45 );
		drawBox( window, Color.LIGHT_GRAY, 340, 420, 110, 40 );
		// draw six more boxes -- different colors, different places, different sizes
	}
	
	public void drawBox( Graphics window, Color c, int x, int y, int w, int h )
	{
        window.setColor(c);
        window.fillRect(x,y,w,h);
        window.setColor(Color.WHITE);
        window.fillRect(x+10,y+10,w-20,h-20);
	}


	public static void main( String[] args )
	{
		Canvas canvas = new Boxy3();
		JFrame win = new JFrame("Boxy3 - write and use function - boxes different sizes");
		win.setSize(800,600);
		win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		canvas.setBackground(Color.WHITE);
		win.add( canvas );
		win.setVisible(true);
	}
}