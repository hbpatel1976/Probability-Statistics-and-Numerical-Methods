#include<stdio.h>

float function(float x)
	{return 1/(1+x*x);}

float trapezoidal(float a, float b, float n)
{
	int i;
    float h = (b-a)/n;  /* Grid spacing */

    float s = function(a)+function(b);

    /* Adding middle strips */
    for (i = 1; i < n; i++) s += 2*function(a+i*h);

    return (h/2)*s;
}

int main()
{
    float a = 0; /* Initial Value */
    float b = 1; /* Final Value */
	int n = 6;  /* Number of grid */ 

    printf("Value of integral is %f\n", trapezoidal(a, b, n));
    return 0;
}
