/* Written by: Noah Brayer 12/13/2013 */
#include <stdio.h>
#define SIZE 100
short initialize(int[]);
short main(void)
{	char ret;
	int array[SIZE];
	short success,i;
	success=initialize(array);
	for(i=0;i<SIZE;i++)
	printf("%hd array:%d\n",i+1,array[i]);
	return(1);
}
short initialize(int array[SIZE])
{	short i,success=0;
	for(i=0;i<SIZE;i++)
	{	array[i]=0;
		success=1;
	}
	return(success);
}