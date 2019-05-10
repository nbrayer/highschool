#include <stdio.h>
int main (void)
{	int left[1];
	int i = 1,count = 0;
	while (count <= 16557)
	{	left[count] = i+i;
		printf("memory value = %d\n", &left[count]);
		count++;
	}
	return(0);
}
