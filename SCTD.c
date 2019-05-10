/* Written by Noah Brayer 10/3/13 */
#include <stdio.h>	// For printf() and scanf()
#define PI 3.1415926535897932384626433832795		// Defines "PI" for circle
double perimeterSquare(double);		// Prototype for square
double areaCircle(double);		// Prototype for circle
double areaTriangle(double,double);	// Prototype for triangle
double division(double,double);		// Prototype for division
short main(void)		// Begins function: "main"
{	int a=0;		// Declares variable for menu
	double side,radius,base,height,num,denom;	// Declares variables for inputs
	printf("1: Perimeter of Square\n2: Area of Circle\n3: Area of Triangle\n4: Division\n");	// Prints menu
	while ((a<1)||(a>4))		// Waits until user inputs proper value
		scanf("%d",&a);		// Input by user for choice from menu
	if (a==1)		// User selected square
	{	printf("Enter side length:>");		// Prompts user for side length
		scanf("%lf",&side);		// User input for side length
		printf("Perimeter=%.2f",perimeterSquare(side));	// Outputs return from function: "perimeterSquare"
	}	// Ends square selection
	if (a==2)		// User selected circle
	{	printf("Enter Radius:>");	// Prompts user for radius
		scanf("%lf",&radius);		// User input
		printf("Area=%.2f",areaCircle(radius));		// Outputs return from function: "areaCircle"
	}	// Ends circle selection
	if (a==3)		// User selected triangle
	{	printf("Enter Base:>");		// Prompts user for base
		scanf("%lf",&base);		// User input for base
		printf("Enter Height:>");	// Prompts user for height
		scanf("%lf",&height);		// User input for height
		printf("Area=%.2f",areaTriangle(base,height));	// Outputs return from function: "areaTriangle"
	}	// Ends Triangle Selection
	if (a==4)		// User selected division
	{	printf("Enter Numerator:>");	// Prompts user for numerator
		scanf("%lf",&num);	// User input for numerator
		do	// Do while loop so denominator is not 0
		{	printf("Enter Denominator:>");	// Prompts user for denominator
			scanf("%lf",&denom);	// User input for denominator
		}while (denom==0);	// Condition denom==0 so divide by 0 error does not occur
		printf("Result=%.2f",division(num,denom));	// Outputs return from function: "division"
	}
	return(0);	// Return for function: "main"
}	// Ends function: "main"
double perimeterSquare(double side)	// Definition of function: "perimeterSquare"
{	return(4*side);		// Return for function: "perimeterSquare"
}	// Ends function: "perimeterSquare"
double areaCircle(double radius)	// Definition of function: "areaCircle"
{	return(PI*radius*radius);	// Return for function: "areaCircle:
}	// Ends function: "areaCircle"
double areaTriangle(double base, double height)	// Definition of function: "areaTriangle"
{	return(0.5*base*height);	// Return for function: "areaTriangle"
}	// Ends function: "areaTriangle"
double division(double num, double denom)	// Definition of function: "division"
{	return(num/denom);	// Return for function: "division"
}	// Ends function: "division"