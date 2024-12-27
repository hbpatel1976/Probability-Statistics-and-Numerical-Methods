#include<stdio.h>
#define ITERATION 1000

double function(double x)
{
	return x*x*x - x*x + 2;
}

void falsePosition(double a, double b)
{
	int i;
	/* Are the initial assumptions correct? */
	if (function(a) * function(b) >= 0)
	{
		printf("Your initial assumptions are not correct\n");
		return;
	}

	double c;
	for(i=1; i<=ITERATION; ++i)
	{
		/*Compute the middle point*/
		c = a - ((b-a) / (function(b)-function(a)))* function(a);
		
		if (function(c) == 0.0)break; /*Have we found the root?*/

		/* if not found the root, continue the process*/
		else if (function(c)*function(a) < 0)b = c;
		else a = c;
	}
	printf("The value of root is : %f",c);
}

int main()
{
	double a =-20, b = 30;
	falsePosition(a, b);
	return 0;
}
