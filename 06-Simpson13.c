#include <stdio.h>
/* Simpson's 1/3 Rule */
void main()
{
int start=0, end=8, interval=8, deltax, i;
float area=0, f(float);
deltax = (end - start)/interval;
area = area + f(start);
for(i=start+deltax; i<end; i=i+deltax)
{
	if(i%2==0)area=area+2*f(i);
	else area=area+4*f(i);
}
area = area + f(end);
area=area*deltax/3.0;
printf("Answer = %f",area);
}
float f(float x)
{
	return x*x*x - 3*x*x + 2*x - 1;
}

