/* Written by Noah Brayer 9/14/2013 */
#include <stdio.h>					// Includes Header File: "stdio"
double getSide(void);					// Prototype Function: Input
double calculateArea(double,double);			// Prototype Function: Calculation
double calculatePerimeter(double,double);		// Prototype Function: Calculation
void printArea(double);					// Prototype Function: Output
void printPerimeter(double);				// Prototype Function: Output
void main(void)						// Defines: Function: "main"
{	double side,side1,side2;			// Declares Variable: Input, Input, Input
	side=getSide();					// Invokes Function: "getSide"
	side1=side;					// Copies value: "side" to value: "side1"
	side=getSide();					// Invokes Function: "getSide"
	side2=side;					// Copies value: "side" to value: "side2"
	printArea(calculateArea(side1,side2));		// Invokes Function: "printArea", "calculateArea"
	printPerimeter(calculatePerimeter(side1,side2));// Invokes Function: "printPerimeter", "calculatePerimeter"
} 							// Ends: Function: "main"
double getSide(void)					// Defines: Function: "getSide"
{	double side;					// Declares Variable: Input
	printf("Input side length:>"); 			// Prompts Variable: "side"
	scanf("%lf",&side);				// Inputs Variable: "side"
	return(side);					// Return for function: "getSide"
}							// Ends: Function: "getSide"
double calculateArea(double side1,double side2)		// Defines: Function: "calculateArea"
{	return(side1*side2);				// Calculation and return for function: "calculateArea"
}							// Ends: Function: "calculateArea"
double calculatePerimeter(double side1,double side2)	// Defines: Function: "calculatePerimeter"
{	return(2*side1+2*side2);			// Calculation and return for function: "calculatePerimeter"
}							// Ends: Function: "calculatePerimeter"
void printArea(double area)				// Defines: Function: "printArea"
{	printf("Your area is %.3lf, \n",area);		// Outputs value: "area"
}							// Ends: Function: "printArea"
void printPerimeter(double perimeter)			// Defines: Function: "printPerimeter"
{printf("and your perimeter is %.3lf.",perimeter);	// Outputs value: "perimeter"
}							// Ends: Function: "printPerimeter" 