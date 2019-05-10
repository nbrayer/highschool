/* Written by: Noah Brayer 10/24/2013 */
#include <stdio.h>							// For "printf" and "scanf" functions
#include <ctype.h>							// For "toupper" function
double getPrice(void);							// Prototype for function "getPrice"
void main(void)								// Begins function: "main"
{	printf("Price=%.2f\a",getPrice());
}									// Ends function: "main"
double getPrice()							// Begins function: "getPrice"
{	double price;							// Declares variable for price
	char ret;
	char rental='a',rating='a';					// Declares variables for movie/game and rating of g/p/r
	int a=1,b=1;							// Declares variables for "while" statements
	while(a)							// Begins "while" loop to get rental type
	{	printf("Enter type of rental (Movie/Game):\a");		// Prompt user
		scanf("%c%c\n\a",&rental,&ret);				// User input
		rental=toupper(rental);					// Changes letter to uppercase to simplify "if" statements
		if((rental=='M')||(rental=='G'))			// Tests whether input is what is asked for: movie/game (Because users are idiots!)
			a=0;						// Makes a=0 to end "while" loop
		else
			a=1;
	}								
	while(b)							// Begins "while" loop to get rating
	{	printf("\nEnter the rating of the rental (G/P/R):\a");	// Prompt user
		scanf("%c%c\n\a",&rating,&ret);				// User input
		rating=toupper(rating);					// Changes letter to uppercase to simplify "if" statements
		if((rating=='G')||(rating=='P')||(rating=='R'))		// Tests whether input is what is asked for: g/p/r (Because users are idiots!)
			b=0;						// Sets b=0 to end "while" loop
		else
			b=1;
	}								// Ends "while" loop
	price=9.00*(rental=='G')+7.50*(rental=='M')-2.00*(rating=='G')-(rating=='P')+.5*((rating=='P')&&(rental=='G'))+1.5*((rating=='R')&&(rental=='M'));
	return(price);							// Returns 'price' to function main
}									// Ends function: "getPrice"

/*	Pre: none
*	Post: returns variable "price"
*	Return: "price" */