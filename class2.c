#include <stdio.h>
short isDivisibleByNine(int);
int main(void)
{	char n;
	int total=0;
	while(n!='0')
	{	//while(n!=10)
		printf("Enter a number:");
		scanf("%c",&n);
		total=total+(int)'n'-(int)'0';
	}
	printf("Total=%d\n",total);
	if(isDivisibleByNine(total))
	printf("%d is divisible by nine.",n);
	else
	printf("%d is not divisible by nine.",n);
	return(0);
}
short isDivisibleByNine(int total)
{	short nine;
	if(total%9==0)
	nine=1;
	else
	nine=0;
	return(nine);
}