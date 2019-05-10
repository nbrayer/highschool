#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{	char memory[1],ret;
	int lim,i,j;
	FILE *mem;
	strcpy(memory,"1");
	mem=fopen("MemoryChar.txt","w");
	if(mem==NULL)
	{	printf("File cannot be opened");
		exit(0);
	}
	
	do
	{	printf("Enter limit:");
		scanf("%d%c",&lim,&ret);
	}while(lim>16558);
	for(i=0;i<lim;i++)
	{	if(memory[i]!=0)
			fprintf(mem,"%c",memory[i]);
		if(i%150==0)
			fprintf(mem,"\n");
	}
	fclose(mem);
	return(0);
}