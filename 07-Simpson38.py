def f(x):
  return x*x*x - 3*x*x + 2*x - 1

start=0
end=8
interval=8
area=0
deltax = (end - start)/interval;
area = area + f(start);
for i in range (start, end):
  if(i%3==0):
    area=area+2*f(i)
  else:
    area=area+3*f(i)
  i = i + deltax
area = area + f(end)
area=area*(deltax*3.0/8.0)
print("Answer = ",area)