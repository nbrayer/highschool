/* Written by: Noah Brayer 12/13/2013 */
#include <stdio.h>
#define SIZE 100
short fillArray(int[]);
double averageArray(int[]);
short main(void)
{	char ret;
	int squareArray[SIZE];
	short success;
	success=fillArray(squareArray);
	if(success==1)
		printf("Average of the array=%f",averageArray(squareArray));
	else
		printf("Error. Array did not fill.");
	return(success);
}
short fillArray(int squareArray[])
{	short success=0;
	short j;
	for(j=0;j<SIZE;j++)
	{	squareArray[j]=j*j;
		success=1;
	}
	return(success);
}
double averageArray(int squareArray[])
{	int total=0;
	double average;
	short i;
	for(i=0;i<SIZE;i++)
		total+=squareArray[i];
	average=(double)total/(double)SIZE;
	return(average);
}