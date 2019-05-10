/* Written by: Noah Brayer 12/5/2013 */
#include <stdio.h>
#define SIZE 100
short fillArray(int[]);
short printArray(int[]);
short main(void)
{	char ret;
	int squareArray[SIZE];
	short success;
	success=fillArray(squareArray);
	if(success==1)
		success=printArray(squareArray);
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
short printArray(int squareArray[])
{	short success=0;
	short j;
	for(j=0;j<SIZE;j++)
	{	printf("Array %hd:%d\n",j,squareArray[j]);
		success=1;
	}
	return(success);
}