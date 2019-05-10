/* Written by: Noah Brayer 9/24/13 */
#include <stdio.h>					//Includes Header File: "stdio"
void drawHead(void);					//Prototype Function: "drawHead"
void drawBody(void);					//Prototype Function: "drawBody"
void drawLegs(void);					//Prototype Function: "drawLegs"
void main(void)						//Invokes Function: "main"
{	double row=0,x;					//Declares Variable: Input, Loop
	printf("Enter number of rows:>");		//Prompts Variable: "row"
	scanf("%lf\n",&row);				//Input Variable: "row"
	for(x=0;x<row;x++)				//Loop: "for"
	{	drawHead();				//Invokes Function: "drawHead"
		drawBody();				//Invokes Function: "drawBody"
		drawLegs();				//Invokes Function: "drawLegs"
	}						//Ends: Loop: "for"
}							//Ends: Function: "main"
void drawHead(void)					//Defines: Function: "drawHead"
{	int h;						//Declares Variable: Loop
	for(h=0;h<4;h++)				//Loop: "for"
	{	if ((h==0) || (h==3))			//Logic: "if"
			printf("   ***   \n");		//Output: 'Head'
		else					//Logic: "else"
			printf("  *   *  \n");		//Output: 'Head'
	}						//Ends: Loop: "for"
}							//Ends: Function: "drawHead"
void drawBody(void)					//Defines: Function: "drawBody"
{	int b;						//Declares Variable: Loop
	for(b=0;b<5;b++)				//Loop: "for"
	{	if (b<2)				//Logic: "if"
		{	if (b==0)			//Logic: "if"
				printf("  \\ I ");	//Output: 'Left Arm'
 			else				//Logic: "else"
				printf("   \\I");	//Output: 'Left Arm'
			printf("/\n");			//Output: 'Right Arm'
		}					//Ends: Logic: "if"
		else					//Logic: "else"
			printf("    I    \n");		//Output: 'Body'
	}						//Ends: Loop: "for"
}							//Ends: Function: "drawBody"
void drawLegs(void)					//Defines: Function: "drawLegs"
{	int l,m,n;					//Declares Variable: Loop, Loop, Loop
	for(l=0;l<3;l++)				//Loop: "for"
	{	for(m=0;m<(3-l);m++)			//Loop: "for"
			printf(" ");			//Output: Space
		printf("/");				//Output: 'Left Leg'
		for(n=0;n<(2*l+1);n++)			//Loop: "for"
			printf(" ");			//Output: Space
		printf("\\\n");				//Output: 'Right Leg'
	}						//Ends: Loop: "for"
}							//Ends: Function: "drawLegs"