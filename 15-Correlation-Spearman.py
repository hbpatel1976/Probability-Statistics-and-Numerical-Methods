import math
size, xsum, xtemp, xysum, ysum, ytemp = 10, 0, 0, 0, 0, 0
x=[20, 23, 8, 29, 14, 12, 11, 20, 17, 18]
y=[20, 25, 11, 24, 23, 16, 12, 21, 22, 26]

for i in range (0, size):
  xsum=xsum+x[i];
  ysum=ysum+y[i];

xmean=xsum/size
ymean=ysum/size

for i in range (0, size):
  xtemp+= (x[i]-xmean)*(x[i]-xmean)
  ytemp+= (y[i]-ymean)*(y[i]-ymean)
  xysum+=(x[i]-xmean)*(y[i]-ymean)

correlation = 	(xysum/(size-1)) / (math.sqrt((xtemp)/(size)) * math.sqrt((ytemp)/(size)))
print("Correlation = ",correlation)