/* Written by Noah Brayer 10/10/2013 */
#include <stdio.h>							// Includes Header File: "stdio"
#define PI 3.1415926535897932384626433832795				// Defines Pi
double Parallelogram(double,double);					// Prototype for Function: "Parallelogram"
double Circle(double);							// Prototype for Function: "Circle"
double Triangle(void);							// Prototype for Function: "Triangle"
void main(void)								// Defines function: "main"
{	double side1=0,side2=0,radius=0;				//
	int a=0;							//
	printf("Perimeter\n");						//
	printf("1: Parallelogram\n");					//
	printf("2: Circle\n");						//
	printf("3: Triangle\n");					//
	while((a<1)||(a>3))						//
	scanf("%d",&a);							//
	if(a==1)							//
	{	while((side1<=0))					//
		{	printf("Enter side1:");				//
			scanf("%lf",&side1);				//
		}							//
		while(side2<=0)						//
		{	printf("Enter side2:");				//
			scanf("%lf",&side2);				//
		}							//
		printf("Perimeter=%.3f",Parallelogram(side1,side2));	//
	}								//
	if(a==2)							//
	{	while(radius<=0)					//
		{	printf("Enter Radius:");			//
			scanf("%lf",&radius);				//
		}							//
		printf("Perimeter=%.3f",Circle(radius));		//
	}								//
	if(a==3)							//
	printf("Perimeter=%.3f",Triangle());				//
}									//
double Parallelogram(double side1,double side2)				//
{	return((2*side1)+(2*side2));					//
}									//
double Circle(double radius)						//
{	return(2*PI*radius);						//
}									//
double Triangle()							//
{	double perimeter,side=0,side1=0,side2=0,side3=0;		//
	int a=0,b;							//
	printf("1:Equilateral\n");					//
	printf("2:Isosceles\n");					//
	printf("3:Scalene\n");						//
	while((a<1)||(a>3))						//
	scanf("%d",&a);							//
	if(a==1)							//
	{	while(side1<=0)						//
		{	printf("Enter side:");				//
			scanf("%lf",&side1);				//
		}							//
		perimeter=3*side1;					//
	}								//
	if(a==2)							//
	{	printf("Enter side length for 2 sides first\n");	//
		while(side1<=0)						//
		{	printf("Enter side1:");				//
			scanf("%lf",&side1);				//
		}							//
		while(side2<=0)						//
		{	printf("Enter side2:");				//
			scanf("%lf",&side2);				//
		}							//
		perimeter=2*side1+side2;				//
	}								// Ends logic: "if(a==2)"
	if(a==3)							// Begins logic: "if(a==3)"
	{	for(b=1;b<=3;b++)					// Begins logic: "for(b=1;b<=3;b++)"
		{	while(side<=0)					// Begins logic: "while(side<=0)"
			{	printf("Enter side%d:",b);		//
				scanf("%lf",&side);			//
			}						// Ends logic: "while(side<=0)"
			if(b==1)					//
			side1=side;					//
			if(b==2)					//
			side2=side;					//
			if(b==3)					//
			side3=side;					//
			side=0;						//
		}							// Ends logic: "for(b=1;b<=3;b++)"
		perimeter=side1+side2+side3;				// 
	}								// Ends logic: "if(a==3)"
	return(perimeter);						// Return for function: "Triangle"
}									// Ends function: "Triangle"