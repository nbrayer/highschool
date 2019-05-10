#include <stdio.h>
#include <stdlib.h>
short main(void)
{	int *pointer;
	int i;
	printf("%d",i);
	while(1)
	{	i+=1;
		pointer=i;
		*pointer=0;
		printf("\npointer:%d5%c%d",pointer,' ',*pointer);
	}
	return(0);
}