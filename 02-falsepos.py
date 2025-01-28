def function(x):
  return x*x*x - x*x + 2

def falsePosition(a, b):
  ITERATION = 1000
  # Are the initial assumptions correct?
  if function(a) * function(b) >= 0:
    print("Your initial assumptions are not correct")

  for i in range (1, ITERATION):
    #Compute the middle point
    c = a - ((b-a) / (function(b)-function(a)))* function(a);
    #Have we found the root?
    if (function(c) == 0.0): 
      break
		# if not found the root, continue the process
    elif function(c)*function(a) < 0:
      b = c
    else:
      a = c
  print("The value of root is : ",c);

a =-20
b = 30
falsePosition(a, b)