/* Made by Noah Brayer 9/11/13 */
#include <stdio.h>					// Includes Header File: "stdio"
void main(void)						// Defines: Function: "main"
{	double n=0, total=0, average, value;		// Declares Variable: "n", "total", "average", "value"
	int c;						// Declares Variable: Loop
	while(n<=0) 					// Loop: "while" *Runs until user inputs positive number of terms*
	{	printf("Enter numbers of terms:>");	// Prompts Variable: "n"
		scanf("%lf",&n);			// Inputs Variable: "n"
	}						// Ends: Loop: "while"
	for(c=1;c<=n;c++)				// Loop: "for"
	{	printf("Term %d:>",c);			// Prompts Variable: "value"
		scanf("%lf",&value);			// Inputs Variable: "value"
		total=total+value;			// Calculates: "total"
	}						// Ends: Loop: "for"
	average=total/n;				// Calculates: "average"
	printf("The average is %.3lf",average );	// Outputs: "average"
}							// Ends: Function: "main"