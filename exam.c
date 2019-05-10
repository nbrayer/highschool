/* Written By: Noah Brayer 1/14/2014
	Program option 1	*/
#include <stdio.h>	// for "printf" and "scanf"
#define SIZE 10		// defines size of arrays
void fillArraysXY(int[],int[]);
void computeArraySum(int[],int[],int[]);	// computes sum of arrays x and y
void computeArrayZ(int[],int[]);	// computes square of array sum
void printArray(int[]);
short main(void)
{	int x[SIZE],y[SIZE],sum[SIZE],z[SIZE];	// declares arrays
	short i;	// looping variable
	for(i=0;i<SIZE;i++)	// for loop to initialize arrays
	{	x[i]=0;
		y[i]=0;
		sum[i]=0;
		z[i]=0;
	}	// end initializing for loop
	fillArraysXY(x,y);	// call to function fillArraysXY
	computeArraySum(x,y,sum);	// call to function to compute sum of arrays x and y
	computeArrayZ(sum,z);		// call to function to compute square of array sum
	printf("\nx:");		// prints new line and name of array being printed "x"
	printArray(x);		// call to function to print array "x"
	printf("\ny:");		// prints new line and name of array being printed "y"
	printArray(y);		// call to function to print array "y"
	printf("\nsum:");		// prints new line and name of array being printed "sum"
	printArray(sum);		// call to function to print array "sum"
	printf("\nz:");		// prints new line and name of array being printed "z"
	printArray(z);		// call to function to print array "z"
	return(0);	// return for function: "main"
}	// ends function: "main"
void fillArraysXY(int x[], int y[])
{	int entry;	// variable for user entry
	short i,j;	// looping variables
	for(i=0;i<SIZE;i++)	// loop to fill array "x"
	{	printf("Enter x[%d]:",i);	// prompts user for array value
		scanf("%d",&entry);	// user entry
		x[i]=entry;	// stores entry into array "x"
	}	// end for loop to fill array "x"
	for(j=0;j<SIZE;j++)	// loop to fill array "y"
	{	printf("Enter y[%d]:",j);	// prompts user for array value
		scanf("%d",&entry);	// user entry
		y[j]=entry;	// stores entry into array "y"
	}	// end for loop to fill array "y"
}	// ends function: "fillArraysXY"
void computeArraySum(int x[],int y[],int sum[])
{	short i;	// looping variable
	for(i=0;i<SIZE;i++)	// for loop to fill array "sum"
		sum[i]=x[i]+y[i];	// adds arrays "x" and "y" and stores into array "sum"
}	// ends function: "computeArraySum"
void computeArrayZ(int sum[],int z[])
{	short i;	// looping variable
	for(i=0;i<SIZE;i++)	// for loop to fill array "z"
		z[i]=sum[i]*sum[i];	// squares array "sum" and stores into array "z"
}	// ends function: "computeArrayZ"
void printArray(int k[])
{	short i;	// looping variable
	for(i=0;i<SIZE;i++)	// for loop to print array values
	{	printf("%d",k[i]);	// prints array value
		printf("\t");		// aligns each value into a table
	}	// ends for loop to print array
}	// ends function: "printArray"