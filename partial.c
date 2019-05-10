/* Written by: Noah Brayer 12/5/2013 */
#include <stdio.h>
#define SIZE 100
short fillArray(int[],short,short);
short printArray(int[],short,short);
short main(void)
{	char ret;
	int squareArray[SIZE];
	short begin,end;
	short i;
	short success;
	printf("Enter the beginning of the array (max. value 99):");
	scanf("%hd%c",&begin,&ret);
	printf("Enter the end of the array (max. value 99):");
	scanf("%hd%c",&end,&ret);
	end+=1;
	success=fillArray(squareArray,begin,end);
	if(success==1)
		success=printArray(squareArray,begin,end);
	else
		printf("Error. Array did not fill.");
	return(success);
}
short fillArray(int squareArray[],short begin,short end)
{	short success=0;
	short j;
	for(j=begin;j<end;j++)
	{	squareArray[j]=j*j;
		success=1;
	}
	return(success);
}
short printArray(int squareArray[],short begin,short end)
{	short success=0;
	short j;
	for(j=begin;j<end;j++)
	{	printf("Array %hd:%d\n",j,squareArray[j]);
		success=1;
	}
	return(success);
}