import matplotlib.pyplot as plt
from scipy import stats

x = [2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024]
y = [3262.33, 3377.28, 5838.96, 6602.69, 9397.93, 13786.91, 20286.99, 9647.31, 17464.81, 20509.09, 15454.92, 19426.71, 21170.68, 27499.42, 26117.54, 26626.46, 34056.83, 36068.33, 41253.74, 47751.33, 58253.82, 60840.74, 72240.26, 78139.01]

slope, intercept, r, p, std_err = stats.linregress(x, y)

def myfunc(x):
  return slope * x + intercept

mymodel = list(map(myfunc, x))

plt.scatter(x, y)
plt.plot(x, mymodel)
plt.show()