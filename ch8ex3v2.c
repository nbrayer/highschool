/* Written by: Noah Brayer 1/14/2014 */
#include <stdio.h>
short main(void)
{	char ret;
	short entry;
	short i;
	int factorial=1;
	printf("Enter 0 to 9 or -1 to exit:");
	scanf("%d%c",&entry,&ret);
	if(entry!=-1)
	{	printf("%d! =",entry);
		for(i=entry;i>0;i--)
		{	factorial=factorial*i;
			printf(" %d ",i);
			if(i>1)
				printf("*");
		}
		if(entry!=0)
			printf("=");	
		printf(" %d",factorial);
	}
	else
		printf("Program exited");
	return(0);
}