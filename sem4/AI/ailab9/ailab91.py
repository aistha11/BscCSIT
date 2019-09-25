#Lab 9.1 Train AND Gate using Hebbian Learning
import numpy as np
b=0
alpha=1

def hebb_train(x,y,w):
  for i in range(0,len(x)):
    global b
    dw=alpha*x[i]*y[i]
    db=alpha*y[i]
    w=np.add(w,dw)
    b=b+db
    print("After Interation ",i+1," :Weights")
    print(w)
    print("Bias:",b)
  return w
  
def hebb_predict(x,w):  
  z=x*w
  tx=sum(z)
  y=f(tx)
  return y
  
def f(x):
  if(x>b):
    return 1
  else:
    return 0


trainx=np.array([[1,1],[1,0],[0,1],[0,0]])
trainy=np.array([1,0,0,0])
testx=np.array([1,0])
wt=np.array([0,0])
print("Training Data(x):")
print(trainx)
print("Training Data(y):")
print(trainy)
print("Initial Weights:")
print(wt)
print("Training:")
print("+++++++++")
for i in range(1,5):
  print("Empoch#",1)
  wt=hebb_train(trainx,trainy,wt)
print("Final Weights:")
print(wt)
print("Test Data:")
print(testx)
out=hebb_predict(testx,wt)
print("Output=",out)
