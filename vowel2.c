/* Made by Noah Brayer 10/17/2013 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
	if((new=='A')||(new=='E')||(new=='I')||(new=='O')||(new=='U'))
	printf("%c is a vowel\n",letter);
	else
	if((new=='Y'))
	printf("%c is sometimes a vowel\n",letter);
	else
	printf("%c is not a vowel\n",letter);
}
void check_switch(char letter)
{	char new;
	char condition[10]={'s','o','m','e','t','i','m','e','s','\0'};
	new=toupper(letter);
	switch(new)
	{	case 'Y':
			printf("%c is %s a vowel\n",letter,condition);
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':			
			printf("%c is a vowel\n",letter);
			break;
		default:
			printf("%c is not a vowel\n",letter);
	}
}