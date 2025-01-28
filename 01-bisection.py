def function(x):
  return x*x*x - x*x + 2

def bisection(a, b):
  Accuracy=0.01
  # Are the initial assumptions correct?
  if function(a) * function(b) >= 0:
    print('Your initial assumptions are not correct. Please make another assumptions')
    return
  c = a;
  while (b-a) >= Accuracy:
    # Compute the middle point
    c = (a+b)/2;
    # Have we found the root?
    if function(c) == 0.0: 
      break
    # if not found the root, continue the process
    elif (function(c)*function(a) < 0): 
      b = c
    else: 
      a = c
  print("The value of root is : ",c);

a =-200
b = 300
bisection(a, b)