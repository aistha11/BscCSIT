# K-Means Clustering

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

data = 100*np.random.rand(1000,2)
print(*data)
print(data.shape)
km=KMeans(n_clusters=3,init='random')
km.fit(data)
cents = km.cluster_centers_
labels = km.labels_
print('Cluster Centers:',cents)
print('Cluster Labels:',labels)

colors = ["g","r","b"]
markers = ["+","x","*"]
for i in range(len(data)):
    plt.plot(data[i][0],data[i][1],color=colors[labels[i]],marker=markers[labels[i]])

plt.scatter(cents[:,0],cents[:,1],marker = "o",s=50,linewidths = 5)
plt.show()