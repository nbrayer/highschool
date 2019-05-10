/* Written by: Noah Brayer 12/13/2013 */
#include <stdio.h>
#define SIZE 100
short fillArray(int[]);
short searchArray(int[],int);
short main(void)
{	char ret;
	int squareArray[SIZE];
	int search;
	short success,position;
	printf("Enter the value you seek:");
	scanf("%d%c",&search,&ret);
	success=fillArray(squareArray);
	if(success==1)
		position=searchArray(squareArray,search);
	else
		printf("Error. Array did not fill.");
	if(position!=0)
		printf("Search value %d was found in squareArray[] at position %hd",search,position);
	else
		printf("Search value %d was not found in squareArray[]",search);
	return(success);
}
short fillArray(int squareArray[])
{	short success=0;
	short i;
	for(i=0;i<SIZE;i++)
	{	squareArray[i]=i*i;
		success=1;
	}
	return(success);
}
short searchArray(int squareArray[],int search)
{	short position=0;
	short i;
	for(i=0;i<SIZE;i++)
	{	if(squareArray[i]==search)
		{	position=i;
			break;
		}
		else
			position=0;
	}
	return(position);
}
	