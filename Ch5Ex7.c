/* Written by: Noah Brayer 11/5/2013 */
#include <stdio.h>		// Includes header file: "stdio"
int main(void)		// Begins function: "main"
{	char ret;	// For return character
	int temp=0;	// Input by user
	int hot=0,nice=0,cold=0;	// Count for number of days that were hot, nice, and cold
	int total=0;		// Total temperature of the days for average
	int average;		// Average temperature
	while(temp!=-50)	// while loop, exit condition temp=-50
	{	printf("\nEnter temperature or -50 to end:");		// Prompts user for temperature or exit clause
		scanf("%d%c",&temp,&ret);		// Input from user
		if(temp!=-50)		// Does not add exit condition to total, as it is not a temperature
			total+=temp;		// Sum of temperatures for average
		if(temp>84)		// Conditional statement for hot day
		{	printf("Hot Day!");	// Tells user that it was a hot day
			hot++;		// Number of hot days
		}
		else
		if((temp<85)&&(temp>59))	// Conditional statement for nice day
		{	printf("Nice Day!");	// Tells user that it was a nice day
			nice++;		// Number of nice days
		}
		else
		if((temp<60)&&(temp>-50))	// Conditional statement for cold day
		{	printf("Cold Day!");	// Tells user that it was a cold day
			cold++;		// Number of cold days
		}
		else
		{	printf("Not a real temperature");	// Tells user that their input is invalid
			total+=-temp;			// Corrects the average from an incorrect entry
		}
	}	// Ends while statement
	printf("There were %d hot days\n",hot);		// Tells user how many hot days there were
	printf("There were %d nice days\n",nice);	// Tells user how many nice days there were
	printf("There were %d cold days\n",cold);	// Tells user how many cold days there were
	average=(total)/(hot+nice+cold);		// Calculates average temperature
	printf("The average temperature was %d",average);	// Tells user the average temperature
	return(0);		// Return for function: "main"
} // Ends function: "main"