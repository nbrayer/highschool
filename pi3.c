/* Written by: Noah Brayer 11/18/2013 */
#include <stdio.h>
int main(void)
{	char ret;
	double pi=0.0,frac=0.0,sum=0.0;
	int n,i;
	printf("Enter a limit for n:");
	scanf("%d%c",&i,&ret);
	for(n=0;n<i;n++)
	{	frac=1/(2*((double)n)+1);
		if((n%2)==1)
		frac=-frac;
		sum=sum+frac;
	}
	pi=4*sum;
	printf("Pi=%f",pi);
	return(0);
}