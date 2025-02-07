/* Newton's Forward Interpolation Formula */
#include <stdio.h>
#define size 4
void main()
{
	float x[size]={3,5,7,9}, findx=4;
	float y[size]={180,150,120,90}, findy, deltay[size][size];
	float h, u;
	
	int i, j;
	float tempu, fact;
	
	h=x[1]-x[0];
	
	/* Equal Distance Between x values */
	for(i=2; i<size; ++i)
	{if((int)(x[i]-x[i-1]) != (int)(h))
		{
			printf("The values of x are not at equal distnace and hence, Newton Forward Interpolation is not possible");
			return;
		}
	}
	
	u = (findx - x[0])/h;
	printf("h = %5.2f, u=%5.2f\n",h,u);
	
	/* Find the value of Delta Y*/
	for(i=0; i<size; ++i)deltay[i][0]=y[i];
	
	for(j=1; j<size; ++j)
	{
		for(i=0; i<size-j; ++i)
		{
			deltay[i][j] = deltay[i+1][j-1] - deltay[i][j-1];
		}
	}
	for(i=0; i<size; ++i)
	{
		for(j=0; j<size-i; ++j)
		{
			printf("%5.2f\t",deltay[i][j]);
		}
		printf("\n");
	}
	findy = y[0];
	tempu = 1;
	fact = 1;
	for(i=0; i<size-1; ++i)
	{
		tempu = tempu * (u-i);	
		fact = fact * (i+1);
		findy = findy + (tempu/fact)*deltay[0][i+1];
	}
	printf("Answer  = %5.2f",findy);
}
