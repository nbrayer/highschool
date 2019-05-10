/* Written by: Noah Brayer 12/19/2013 */
#include <stdio.h>
short main(void)
{	char ret;
	char barcode[12];
	short upc[12];
	short j,i;
	int sum=0;
	short check;
	printf("Please enter UPC code:");
	scanf("%s",barcode);
	for(j=0;j<12;j++)
		upc[j]=(short) barcode[j]-48;	
	for(i=0;i<11;i++)
	{	if(i%2==1)
			sum+=upc[i];
		else
			sum+=(3*upc[i]);
	}
	if(sum%10==0)
		check=0;
	else
		check=10-sum%10;
	if(check==upc[11])
		printf("\nValidated");
	else
		printf("\nError in Barcode");
	return(0);
}