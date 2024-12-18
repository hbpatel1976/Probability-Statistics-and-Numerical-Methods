#include <stdio.h>
/* false position OR regular falsi method */
void main()
{
	int iteration = 10000, i;
	float start = 15, end = -50, mid, f(float); 
	for(i=1; i<=iteration; ++i)
	{
		mid=start-((end-start)/(f(end)-f(start)))*f(start);
		printf("INTERMEDIATE RESULT: mid=%f f(mid)=%f\n",mid, f(mid));
		if(f(mid)>0)start=mid;
		else end=mid;
	}
	printf("FINAL RESULT: mid=%f f(mid)=%f\n",mid, f(mid));
}
float f(float x)
{
	return x*x*x - 3*x*x + 2*x - 1;
}
