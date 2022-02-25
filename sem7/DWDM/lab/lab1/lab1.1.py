# 1.1 Implementation of Standard  scaler

import numpy as np
import pandas as pd

class StandardNorm:
    def scale(self,d):
        for i in d.columns:
            mean = d[i].mean()
            sd = d[i].std()
            d[i] = (d[i]-mean)/sd
        return d

data = pd.DataFrame([[45000,42],[32000,26],[58000,48],[37000,32]],columns = ['Salary','Age'])
print("Original Data")
print(data)
s=StandardNorm()
df=s.scale(data)
print("\nScaled Data")
print(df)
