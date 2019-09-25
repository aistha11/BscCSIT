#Lab 9.2 Train OR Gate Using Perceptron Learning Algorithm
import numpy as np
b=0
alpha=1

def perceptron_train(x,t,w):
  for i in range(0,len(x)):
    global b
    yin=sum(x[i]*w)+b
    y=f(yin)
    dw=alpha*(t[i]-y)*x[i]
    w=np.add(w,dw)
    db=alpha*(t[i]-y)
    b=b+db
    print("After Interation ",i+1," :Weights")
    print(w)
    print("Bias:",b)    
  return w
  
def perceptron_predict(x,w):  
  z=x*w
  tx=sum(z)+b
  y=f(tx)
  return y
  
def f(x):
  if(x>=0):
    return 1
  else:
    return 0
  
trainx=np.array([[0,0],[0,1],[1,0],[1,1]])
trainy=np.array([0,1,1,1])
testx=np.array([0,1])
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
  print("Epoch#",i)
  wt=perceptron_train(trainx,trainy,wt)

print("Final Weights:")
print(wt)
print("Test Data:")
print(testx)
out=perceptron_predict(testx,wt)
print("Output=",out)
