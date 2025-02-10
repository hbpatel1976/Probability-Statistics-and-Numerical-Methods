import math
size=10
xsum=0
xtemp=0
xysum=0
ysum=0
ytemp=0
x=[20, 23, 8, 29, 14, 12, 11, 20, 17, 18]
y=[20, 25, 11, 24, 23, 16, 12, 21, 22, 26]

for i in range (0, size):
  xsum=xsum+x[i];
  ysum=ysum+y[i];

xmean=xsum/size;
ymean=ysum/size;

for i in range (0, size):
  xtemp+= (x[i]-xmean)*(x[i]-xmean);
  ytemp+= (y[i]-ymean)*(y[i]-ymean);
  xysum+=(x[i]-xmean)*(y[i]-ymean);

correlation = 	xysum / (math.sqrt(xtemp) * math.sqrt(ytemp));
print("Correlation = ",correlation);