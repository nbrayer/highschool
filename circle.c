/* Written by Noah Brayer 9/14/2013 */
#include <stdio.h>						// Includes Header File: "stdio"
#define PI 3.14159265358979323846264338327950			// Defines: Value: "PI"
double getRadius(void);						// Prototype Function: "getRadius"
double calculateArea(double);					// Prototype Function: "calculateArea"
double calculateCircumference(double);				// Prototype Function: "calculateCircumference"
void printArea(double);						// Prototype Function: "printArea"
void printCircumference(double);				// Prototype Function: "printCircumference"
void main(void)							// Invokes function: "main"
{	double radius;						// Declares Variable: Input
	radius=getRadius();					// Invokes Function: "getRadius"
	printArea(calculateArea(radius));			// Invokes Function: "printArea", "calculateArea"
	printCircumference(calculateCircumference(radius));	// Invokes Function: "printCircumference", "calculateCircumference"
} 								// Ends: Function: "main"
double getRadius(void)						// Defines: Function: "getRadius"
{	double radius;						// Declares Variable: Input
	printf("Input radius length:>"); 			// Prompts Variable: "radius"
	scanf("%lf", &radius);					// Inputs Variable: "radius"
	return(radius);						// Return for function: "getRadius"
}								// Ends: Function: "getRadius"
double calculateArea(double radius)				// Defines: Function: "calculateArea"
{	return(PI*radius*radius);				// Calculation AND Return for function: "calculateArea"
}								// Ends: Function: "calculateArea"
double calculateCircumference(double radius)			// Defines: Function: "calculateCircumference"
{	return(2*radius*PI);					// Calculation AND Return for function: "calculateCircumference"
}								// Ends: Function: "calculateCircumference"
void printArea(double area)					// Defines: Function: "printArea"
{	printf("Your area is %.3lf, \n",area);			// Output: "area"
}								// Ends: Function: "printArea"
void printCircumference(double circumference)			// Defines: Function: "printCircumference"
{printf("and your circumference is %.3lf.",circumference);	// Output: "perimeter"
}								// Ends: Function: "printCircumference"