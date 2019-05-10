#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{	char memory[1],ret;
	int lim,i;
	FILE *mem;
	strcpy(memory,"1");
	mem=fopen("Memory.txt","w");
	if(mem==NULL)
	{	printf("File cannot be opened");
		exit(0);
	}
	
	printf("Enter limit:");
	scanf("%d%c",&lim,&ret);
	for(i=0;i<lim;i++)
	{	if(memory[i]!=0)
		{	fprintf(mem,"\n%d:",&memory[i]);
			fprintf(mem,"%5c",' ');
			fprintf(mem,"%c",memory[i]);
			fprintf(mem,"%5c",' ');
			fprintf(mem,"%d",memory[i]);
			fprintf(mem,"%5c",' ');
			fprintf(mem,"%f",memory[i]);
		}
	}
	fclose(mem);
	return(0);
}