def function(x):
  return x*x*x - x*x + 2

def secant(a, b):
  ACCURACY=0.001
  #Are the initial assumptions correct?
  if function(a) * function(b) >= 0:
    print("Your initial assumptions are not correct")
  else:
    c1=a
    c2=b
    while(abs(c2-c1)>=ACCURACY):
      c1 = (a * function(b) - b * function(a)) / (function(b) - function(a));
      isRoot = function(a) * function(c1);
      a = b;
      b = c1;
      if isRoot==0.00: 
        break
      c2 = (a * function(b) - b * function(a)) / (function(b) - function(a));
  print("The value of root is : ",c1);

a =-200
b = 300
secant(a, b);