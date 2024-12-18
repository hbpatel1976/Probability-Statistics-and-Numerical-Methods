#include<stdio.h>
#define ACCURACY 0.001

double function(double x)
{
	return x*x*x - x*x + 2;
}
double derivativeFunction(double x)
{
	return 3*x*x - 2*x;
}

void NewtonRaphson(double a)
{
	double b;
	/* Are the initial assumptions correct? */
	b = function(a) / derivativeFunction(a);
	while(fabs(b)>=ACCURACY)
	{
		b = function(a) / derivativeFunction(a);
		a = a - b;
		printf("a = %f b = %f\n",a,b);
	}
	printf("The value of root is : %f",a);
}

int main()
{
	double a =-20;
	NewtonRaphson(a);
	return 0;
}
