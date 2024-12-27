#include <stdio.h>
/* Trapezoidal Rule/Method */
void main()
{
int start=0, end=20, interval=20, deltax, i;
float area=0, f(float);
deltax = (start + end)/interval;
for(i=start; i<=end; i=i+deltax)
{
	area=area+f(i);
}
area=area*deltax/2.0;
printf("Answer = %f",area);
}
float f(float x)
{
	return x*x*x - 3*x*x + 2*x - 1;
}

