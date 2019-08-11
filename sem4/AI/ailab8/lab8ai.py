#WAP in python yo implement Naive Bay's algorithm for following training data.
#Predict class for x=(Overcast,Cool,High,Srong)
weather=['Sunny','Sunny','Overcast','Rainy','Rainy','Rainy','Rainy','Overcast','Sunny','Sunny','Rainy','Sunny','Overcast','Rainy']
temp=['Hot','Hot','Hot','Mild','Cool','Cool','Cool','Mild','Cool','Mild','Mild','Mild','Hot','Mild']
humidity=['High','High','High','High','Normal','Normal','Normal','High','Normal','Normal','Normal','High','Normal','High']
wind=['Weak','','Weak','Weak','Weak','Strong','Strong','Weak','Weak','Weak','Strong','Strong','Weak','']
play=['No','No','Yes','Yes','Yes','No','Yes','No','Yes','Yes','Yes','Yes','Yes','No']

from sklearn import preprocessing
le=preprocessing.LabelEncoder()
we=le.fit_transform(weather)
t=le.fit_transform(temp)
h=le.fit_transform(humidity)
wn=le.fit_transform(wind)
p=le.fit_transform(play)

features=zip(we,t,h,wn)
inp=list(features)
print("Input Data:")
print(inp)
print("Actual Output:")
print(p)

from sklearn.naive_bayes import GaussianNB
model=GaussianNB()
model.fit(inp,p)
predicted=model.predict([[2,0,0,0]])
#2:Overcast 0:Cool 0:High 0:Strong
print("Predicted value is: ",predicted)
if(predicted==1):
    print("Play Tennis: Yes")
else:
    print("Play Tennis: No")
