#include <stdio.h>
#include <string.h>
short main(void)
{	char ret;
	int p=0,c=0,b=0,i=0;
	char trans[6];
	while(1)
	{	short id=0;
		int cases=0;
		while((id<1)||(id>4))
		{	printf("\nEnter ID number or 42 to exit:");
			scanf("%d%c",&id,&ret);
			if(id==42)
				break;
		}
		if(id==1)
			printf("\nPiels");
		if(id==2)
			printf("\nCoors");
		if(id==3)	
			printf("\nBud");
		if(id==4)
			printf("\nIron City");
		printf("\nEnter transaction type (bought/sold):");
		scanf("%s%c",trans,&ret);
		while(cases==0)
		{	printf("\nEnter number of cases");	
			scanf("%d%c",&cases,&ret);
		}
		if(strcmp(trans,"sold")==0)
			cases=0-cases;
		if(id==1)
		{	p+=cases;
			printf("\nRemaining cases:%d",p);
		}	
		if(id==2)
		{	c+=cases;
			printf("\nRemaining cases:%d",c);
		}
		if(id==3)
		{	b+=cases;
			printf("\nRemaining cases:%d",b);
		}
		if(id==4)
		{	i+=cases;
			printf("\nRemaining cases:%d",i);
		}
	}
	return(0);
}