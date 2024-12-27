#include<stdio.h>
#define EPSILON_ACCURACY 0.01

double function(double x)
{
	return x*x*x - x*x + 2;
}

void bisection(double a, double b)
{
	/* Are the initial assumptions correct? */
	if (function(a) * function(b) >= 0)
	{
		printf("Your initial assumptions are not correct. Please make another assumptions.\n");
		return;
	}

	double c = a;
	while ((b-a) >= EPSILON_ACCURACY)
	{
		/*Compute the middle point*/
		c = (a+b)/2;

		/*Have we found the root?*/
		if (function(c) == 0.0)break;

		/* if not found the root, continue the process*/
		else if (function(c)*function(a) < 0)
			b = c;
		else
			a = c;
	}
	printf("The value of root is : %f",c);
}

int main()
{
	double a =-200, b = 300;
	bisection(a, b);
	return 0;
}
