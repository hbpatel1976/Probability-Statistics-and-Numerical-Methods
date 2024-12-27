#include<stdio.h>
#define ACCURACY 0.001

double function(double x)
{
	return x*x*x - x*x + 2;
}

void secant(double a, double b)
{
	double c1, c2, isRoot;
	/* Are the initial assumptions correct? */
	if (function(a) * function(b) >= 0)
	{
		printf("Your initial assumptions are not correct\n");
		return;
	}
	else
	{
		do
		{
			c1 = (a * function(b) - b * function(a)) / (function(b) - function(a));
			isRoot = function(a) * function(c1);
			a = b;
			b = c1;
			if(isRoot==0.00)break;
			c2 = (a * function(b) - b * function(a)) / (function(b) - function(a));
		}
		while(abs(c2-c1)>=ACCURACY);
	}
	printf("The value of root is : %f",c1);
}

int main()
{
	double a =-200, b = 300;
	secant(a, b);
	return 0;
}
