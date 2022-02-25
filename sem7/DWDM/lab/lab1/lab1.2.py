# 1.1 Implementation of min-max  scaler

import pandas as pd

class MinMaxNorm:
    def scale(self,d):
        for c in d.columns:
            min = d[c].min()
            max = d[c].max()
            d[c] = (d[c]-min)/(max-min)
        return d

data = pd.DataFrame([[45000,42],[32000,26],[58000,48],[37000,32]],columns = ['Salary','Age'])
print("Original Data")
print(data)
s=MinMaxNorm()
df=s.scale(data)
print("\nScaled Data")
print(df)
