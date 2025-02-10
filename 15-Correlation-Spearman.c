#include <stdio.h>
#include <math.h>
#define size 10
void main()
{
	float x[size]={20, 23, 8, 29, 14, 12, 11, 20, 17, 18},xmean,xsum=0,xtemp=0,xysum=0;
	float y[size]={20, 25, 11, 24, 23, 16, 12, 21, 22, 26},ymean,ysum=0,ytemp=0,correlation;
	int i;
	for (i=0; i<size; ++i)
	{
		xsum+=x[i];
		ysum+=y[i];
	}
	xmean=xsum/size;
	ymean=ysum/size;
	for (i=0; i<size; ++i)
	{
		xtemp+= (x[i]-xmean)*(x[i]-xmean);
		ytemp+= (y[i]-ymean)*(y[i]-ymean);
		xysum+=(x[i]-xmean)*(y[i]-ymean);
	}
	correlation = 	(xysum/(size-1)) / (sqrt((xtemp)/(size)) * sqrt((ytemp)/(size)));
	printf("Correlation = %5.2f",correlation);
}
