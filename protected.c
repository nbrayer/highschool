#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{	char memory[1],ret;
	int lim,i,j;
	FILE *mem;
	strcpy(memory," ");

	for(j=0;j<1;j++)
		memory[j]=' ';

	mem=fopen("protected.txt","w");
	if(mem==NULL)
	{	printf("File cannot be opened");
		exit(0);
	}
	
	for(i=0;i<16000;i++)
	{	if(memory[i]!=0)
			fprintf(mem,"%c",memory[i]);
		if(i%150==0)
			fprintf(mem,"\n");
	}
	fclose(mem);
	return(0);
}