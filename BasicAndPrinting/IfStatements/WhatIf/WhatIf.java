//IfStatements WhatIf 15pts Nico Liao
//If it satisfies the condition in the bracket, it will execute the code under it
//The purpose of the braces is a condition, it has to satisfy it in order to execute the code
public class WhatIf
{
	public static void main( String[] args )
	{
		int people = 20;
		int elephants = 30;
		int dogs = 15;

		if ( people < elephants )
		{
			System.out.println( "Too many elephants!  The world is doomed!" );
		}

		if ( people > elephants )
		{
			System.out.println( "Not many elephants!  The world is saved!" );
		}

		if ( people < dogs )
		{
			System.out.println( "The world is drooled on!" );
		}

		if ( people > dogs )
		{
			System.out.println( "The world is dry!" );
		}

		dogs += 5;

		if ( people >= dogs )
		{
			System.out.println( "People are greater than or equal to dogs." );
		}

		if ( people <= dogs )
		{
			System.out.println( "People are less than or equal to dogs." );
		}

		if ( people == dogs )
		{
			System.out.println( "People are dogs." );
		}
	}
}