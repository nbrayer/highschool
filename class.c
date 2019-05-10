#include <stdio.h>
short isDivisibleByNine(int);
int main(void)
{	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(isDivisibleByNine(n))
	printf("%d is divisible by nine.",n);
	else
	printf("%d is not divisible by nine.",n);
	return(0);
}
short isDivisibleByNine(int n)
{	short nine;
	short remainder=0;
	int total=0;
	while(n!=0)
	{	remainder=n%10;
		total=total+remainder;
		n=n/10;
		printf("Digit:%d\n",remainder);
	}
	printf("Total=%d\n",total);
	if(total%9==0)
	nine=1;
	else
	nine=0;
	return(nine);
}