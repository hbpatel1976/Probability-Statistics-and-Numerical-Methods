#Gauss Jacobi / Jacobian Method

def f1(x,y,z):
  return (17-y+2*z)/20
def f2(x,y,z):
  return (-18-3*x+z)/20
def f3(x,y,z):
  return (25-2*x+3*y)/20

x0=0
y0=0
z0=0
for iteration in range (1, 6):
  x1 = f1(x0,y0,z0)
  y1 = f2(x0,y0,z0)
  z1 = f3(x0,y0,z0)
  print("Iteration=",iteration," x = ",x1," y = ",y1," z = ", z1)
  x0 = x1
  y0 = y1
  z0 = z1