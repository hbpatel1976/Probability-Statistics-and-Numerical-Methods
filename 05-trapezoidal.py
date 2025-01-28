# Trapezoidal Rule/Method 
def f(x):
  return x*x*x - 3*x*x + 2*x - 1

start=0
end=20
interval=20
area=0
deltax = (start + end)/interval
for i in range(start, end+1):
  area=area+f(i)
  i=i+deltax
area=area*deltax/2.0
print("Answer = ",area)