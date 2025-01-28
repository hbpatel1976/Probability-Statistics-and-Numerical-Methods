import math
def function(x):
  return x*x*x - x*x + 2

def derivativeFunction(x):
  return 3*x*x - 2*x

def NewtonRaphson(a):
  ACCURACY=0.001
  #Are the initial assumptions correct?
  b = function(a) / derivativeFunction(a)
  while math.fabs(b)>=ACCURACY:
    b = function(a) / derivativeFunction(a)
    a = a - b
    print("a = ", a, " b = ",b)
  print("The value of root is : ",a)

a =-20
NewtonRaphson(a)