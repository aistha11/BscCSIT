#lab 6 python program io implement water jug problem
import random
x=0
y=0
state=[x,y]
vstate=[[0,0]]
print("Initial State is ",state)
while True:
    conf_set=[]
    if(state[0]==2 or state[1]==2):
        print("!!!!Hurray!!! Goal Achieved.\n")
        print("Final State: (",state[0],",",state[1],")")
        break
    if(x<4):
        conf_set.append(1)
    if(y<3):
        conf_set.append(2)
    if(x>0):
        conf_set.append(3)
    if(y>0):
        conf_set.append(4)
    if((x+y)>=4 and x<4 and y>0):
        conf_set.append(5)
    if((x+y)>=3 and y<3 and x>0):
        conf_set.append(6)
    if((x+y)<=4 and y>0):
        conf_set.append(7)
    if((x+y)<=3 and x>0):
        conf_set.append(8)
    print("\nConflict set = ",conf_set)
    while True:
        r=random.choice(conf_set)
        print("Rule Fired: ",r)
        if(r==1):
            print("Fill 4-gallon Jug from pump")
            state=[4,y]
            if(state in vstate):
                print("Already Visited State")
            else:
                x=4
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==2):
            print("Fill 3-gallon Jug from pump")
            state=[x,3]
            if(state in vstate):
                print("Already Visited State")
            else:
                y=3
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==3):
            print("Empty 4-gallon Jug into ground")
            state=[0,y]
            if(state in vstate):
                print("Already Visited State")
            else:
                x=0
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==4):
            print("Empty 3-gallon Jug into ground")
            state=[x,0]
            if(state in vstate):
                print("Already Visited State")
            else:
                y=0
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==5):
            print("Fill 4-gallon completely from 3-gallon Jug")
            state=[4,y-(4-x)]
            if(state in vstate):
                print("Already Visited State")
            else:
                y=(y-(4-x))
                x=4
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==6):
            print("Fill 3-gallon completely from 4-gallon Jug")
            state=[x-(3-y),3]
            if(state in vstate):
                print("Already Visited State")
            else:
                x=x-(3-y)
                y=3
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==7):
            print("Empty 3-gallon completely into 4-gallon Jug")
            state=[x+y,0]
            if(state in vstate):
                print("Already Visited State")
            else:
                x=x+y
                y=0
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        elif(r==8):
            print("Empty 4-gallon completely into 3-gallon Jug")
            state=[0,x+y]
            if(state in vstate):
                print("Already Visited State")
            else:
                x=0
                y=x+y
                print("New State: (",x,",",y,")")
                vstate.append(state)
                break
        else:
            print("Error")
            
            
            
            
        
    
