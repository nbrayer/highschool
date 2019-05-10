/* Made by Noah Brayer 10/17/2013 */
#include <stdio.h>
#include <ctype.h>
void check_vowel(char);
void check_switch(char);

void main(void)
{	char letter;
	printf("Enter a Letter:");
	scanf("%c",&letter);
	check_vowel(letter);
	check_switch(letter);
}
void check_vowel(char letter)
{	char new;
	new=toupper(letter);
	if((new=='A')||(new=='E'))
		printf("Either an A or an E was entered\n");
	else
		if((new=='I')||(new=='O')||(new=='U'))
			printf("These values are either I O U (ha ha )\n");
		else
			if((new=='Y'))
				printf("You entered %c, is a vowel\n",letter);
			else
				printf("%c is not a vowel\n",letter);
}
void check_switch(char letter)
{	char new;
	new=toupper(letter);
	switch(new)
	{	case 'A':
		case 'E':
			printf("Either an A or an E was entered\n");
			break;		
		case 'I':
		case 'O':
		case 'U':
			printf("These values are either I O U (ha ha )\n");
			break;
		case 'Y':
			printf("You entered %c, is a vowel\n",letter);
			break;
		default:
			printf("%c is not a vowel\n",letter);
	}
}