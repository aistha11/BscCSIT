bought=['False','True','False','False','False','True','True','False','False','True','True','False','True','True','True','False']
edu=['True','False','False','False','False','False','False','True','True','True','True','False','True','True','False','True']
first=['False','True','True','True','False','False','False','True','True','True','False','False','True','False','True','True']
visited=['False','False','True','False','True','True','False','True','False','False','True','False','True','False','True','True']
more=['True','False','True','False','False','True','True','False','False','True','True','True','True','True','True','True']

from sklearn import preprocessing
le = preprocessing.LabelEncoder()
b=le.fit_transform(bought)
e=le.fit_transform(edu)
f=le.fit_transform(first)
v=le.fit_transform(visited)
m=le.fit_transform(more)

inp=zip(b,e,f,v)
inp=list(inp)

split=int(len(inp)*0.75)
trainx=[]
trainy=[]
for i in range(split):
  trainx.append(inp[i])
  trainy.append(m[i])
print("Training Data (X):")
print(trainx)
print("Training Data (Y):")
print(trainy)

testx=[]
testy=[]
for i in range(split,len(inp)):
  testx.append(inp[i])
  testy.append(m[i])

print("Test Data (X):")
print(testx)
print("Test Data (Y):")
print(testy)

from sklearn.naive_bayes import GaussianNB
model = GaussianNB()
model.fit(trainx,trainy)

predicted= model.predict(testx) 
print("Actual Value:", testy)
print("Predicted Value:", predicted)
