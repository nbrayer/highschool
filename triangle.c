#include <stdio.h>
#include <math.h>
double calculateArea(double,double,double);
double calculatePerimeter(double,double,double);
void main(void)
{	double side=0,side1,side2,side3;
	int n;
	for(n=1;n<=3;n++)
	{	while (side<=0)
		{	printf("Enter side %d:>",n);
			scanf("%lf",&side);
		}
		if (n==1)
		{	side1=side;
			side=0;
		}
		if (n==2)
		{	side2=side;
			side=0;
		}
		if (n==3)
		side3=side;
	}
	printf("Area=%.2lf\n",calculateArea(side1,side2,side3));
	printf("Perimeter=%.2lf\n",calculatePerimeter(side1,side2,side3));
}
double calculateArea(double side1,double side2,double side3)
{	double x;
	x=(side1+side2+side3)/2;
	return(sqrt(x*(x-side1)*(x-side2)*(x-side3)));
}
double calculatePerimeter(double side1,double side2,double side3)
{	return(side1+side2+side3);
}