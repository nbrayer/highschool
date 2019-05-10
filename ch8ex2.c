/* Written by: Noah Brayer 1/6/2014 */
#include <stdio.h>
#include <string.h>
#include <math.h>
short main(void)
{	char ret;
	char COLOR_CODES[10][7]={"black","brown","red","orange","yellow","green","blue","violet","gray","white"};
	char color1[7];
	char color2[7];
	char color3[7];
	short digit1,digit2,mult;
	long multiply=1,resist;
	short i,j,k;
	printf("Enter color of 1st band:");
	scanf("%s%c",color1,&ret);
	printf("Enter color of 2nd band:");
	scanf("%s%c",color2,&ret);
	printf("Enter color of 3rd band:");
	scanf("%s%c",color3,&ret);
	for(i=0;i<10;i++)
	{	if(strcmp(color1,COLOR_CODES[i])==0)
			digit1=i;
	}
	for(j=0;j<10;j++)
	{	if(strcmp(color2,COLOR_CODES[j])==0)
			digit2=j;
	}
	for(k=0;k<10;k++)
	{	if(strcmp(color3,COLOR_CODES[k])==0)
			mult=k;
	}
	printf("\n%d\n%d\n%d",digit1,digit2,mult);
	multiply=pow(10,mult);
	resist=(digit1*10+digit2)*multiply;
	printf("\nResistance is %d",resist);
	return(0);
}