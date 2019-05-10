#include <stdio.h>
#include <ctype.h>
#include <string.h>
char driveLetter(void);
short main(void)
{	char ret;
	char drive;
	char folder[12];
	char bcc[5];
	drive=tolower(driveLetter());
	strcpy(bcc,"bcc ");
	strcat(bcc,&drive);
	printf("%s",bcc);
	return(0);
}
char driveLetter(void)
{	char drive[2];
	char d;
	printf("\nC:\\Users\\noahbrayer>");
	scanf("%s",drive);
	d=toupper(drive[0]);
	printf("\n%c:\\\n",d);
	return(d);
}