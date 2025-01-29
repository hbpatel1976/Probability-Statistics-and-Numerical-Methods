#include <stdio.h>
#include <math.h>
/* Weedle’s Rule */
void main()
{
int a=0, b=6, n=6, counter; 
float h, i;
float x1, x2, x3, x4, x5, x6, x7;
float area, f(float);
h = (b - a)/(1.0*n);
x1=a;
x2=a+h;
x3=a+2*h;
x4=a+3*h;
x5=a+4*h;
x6=a+5*h;
x7=a+6*h;

area = (3.0*h/10.0)*(f(x1)+5*f(x2)+f(x3)+6*f(x4)+f(x5)+5*f(x6)+f(x7));
printf("Area = %f",area);

}
float f(float x)
{
	return 1.0/(1+x*x);
}
