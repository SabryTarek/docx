matplotlib
============

from matplotlib import pyplot as plt

%matplotlib inline


plt.plot
plt.scatter
plt.



x = np.linspace(0, 20, 100)  # Create a list of evenly-spaced numbers over the range
plt.plot(x, np.sin(x))       # Plot the sine of each x point
plt.show()  