/* Written by: Noah Brayer 10/15/2013 */
#include <stdio.h>		// For "printf", "scanf"
short main(void)		// Begins function: "main"
{	char ret;		// Variable for return key
	double richter;		// Declares variable for user input
	printf("Enter Richter scale rating:");		// Prompts user for rating of earthquake
	scanf("%lf%c",&richter,&ret);		// Input from user
	if(richter<5.0)		// Tests for richter scale of less than 5
		printf("\nLittle to no damage");	// Output to user
	if((richter<5.5)&&(richter>=5.0))	// Tests for richter scale of less than 5.5 and greater than 5
		printf("\nSome damage");	// Output to user
	if((richter<6.5)&&(richter>=5.5))	// Tests for richter scale of less than 6.5 and greater than 5.5
		printf("\nSerious damage: Walls may crack or fall");	// Output to user
	if((richter<7.5)&&(richter>=6.5))	// Tests for richter scale of less than 7.5 and greater than 6.5
		printf("\nDisaster: Houses and buildings may collapse");	// Output to user
	if(richter>=7.5)	// Tests for richter scale of greater than 7.5
		printf("\nCatastrophe: Most buildings destroyed");	// Output to user
	return(0);	// Return for function: "main"
}	// Ends function: "main"