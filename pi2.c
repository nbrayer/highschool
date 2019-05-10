/* Written by: Noah Brayer 12/4/2013 */
#include <stdio.h>
int main(void)
{	char ret;	// To eliminate errors with scanf
	double pi=0.0;		// for result of calculation
	double frac=0.0;	// for fractions
	double sum=0.0;		// for sum of fractions
	int n;		// Input by user
	int i;		// Looping variable
	printf("Enter a limit for n:");		// Asks user for more/less accuracy for pi
	scanf("%d%c",&i,&ret);		// scans user's input and return character
	for(n=i;n>=0;n--)		// loop to find find sum of fractions for calculation of pi
	{	frac=1/(2*((double)n)+1);	// produces odd numbers for the denominator of the fraction
		if((n%2)==0)		// finds if n is even
		frac=-frac;		// if n is even, fraction becomes negative
		sum=sum+frac;		// finds sum of fractions
	}
	pi=4*sum;		// final calculation for pi
	printf("Pi=%f",pi);	// prints the calculated value of pi
	return(0);	// return for main
}	// ends main