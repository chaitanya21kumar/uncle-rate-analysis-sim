import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('results/uncle_data.csv')

plt.plot(data['shareId'], data['isMainChain'])
plt.xlabel('Share ID')
plt.ylabel('Main Chain Status (1=main, 0=uncle)')
plt.title('Uncle Rate Analysis')
plt.grid(True)
plt.show()
