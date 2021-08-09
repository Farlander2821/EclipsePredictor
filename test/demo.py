import matplotlib.pyplot as plt
import numpy as np

#Earth
x1 = np.arange(-4, 4, 0.00001)
y1 = np.sqrt(16 - x1**2)
y2 = -1*np.sqrt(16-x1**2)

plt.plot(x1,y1, color='green')
plt.plot(x1,y2, color='green')

#Moon
x2 = np.arange(8,12,0.00001)
y3 = np.sqrt(4 - (x2-10)**2)
y4 = -1*np.sqrt(4 - (x2-10)**2)

plt.plot(x2,y3, color='gray')
plt.plot(x2,y4, color='gray')

#Sun
x3 = np.arange(20,36,0.00001)
y5 = np.sqrt(64-(x3-28)**2)
y6 = -1*np.sqrt(64-(x3-28)**2)

plt.plot(x3,y5, color='yellow')
plt.plot(x3,y6, color='yellow')

#Shadow lines
x4 = np.arange(3.98,24.5,0.1)
y7 = (1.04/3.0) * x4 - (4.0/3.0)
y8 = (-1.04/3.0) * x4 + (4.0/3.0)

plt.plot(x4,y7, color='red')
plt.plot(x4,y8, color='red')

plt.show()
