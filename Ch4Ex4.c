/* Written by: Noah Brayer 10/22/2013 */
#include <stdio.h>		// For "printf", "scanf"
#include <ctype.h>		// For "toupper()"
short main(void)			// Begins function: "main"
{	char color,ret;		// Variable for user input and return key
	printf("Enter color of band:");		// Prompts user for color of the band
	scanf("%c%c",&color,&ret);	// Input from user
	color=toupper(color);		// Changes input to an uppercase letter, if it is not already
	switch(color)		// Begins 'switch' statement for user input 'color'
	{	case 'O':	// Executes next line if 'color'=='O'
			printf("\nCylinder contains ammonia");		// Tells user that the cylinder contains ammonia
			break;		// Stops execution of further lines of code
		case 'B':	// Executes next line if 'color'=='B'
			printf("\nCylinder contains carbon monoxide");	// Tells user that the cylinder contains carbon monoxide
			break;		// Stops execution of further lines of code
		case 'Y':	// Executes next line if 'color'=='Y'
			printf("\nCYlinder contains hydrogen");		// Tells user that the cylinder contains hydrogen
			break;		// Stops execution of further lines of code
		case 'G':	// Executes next line if 'color'=='G'
			printf("\nCylinder contains oxygen");		// Tells user that the cylinder contains oxygen
			break;		// Stops execution of further lines of code
		default:	// Executes next line if 'color' is none of the letters above
			printf("\nCylinder contains an unknown substance");	// Tells user that the cylinder contains an unknown substance
	}
	return(0);	// Return for function: "main"
}	// Ends function: "main"