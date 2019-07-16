def calcpathcost(path):
    pathcost=0
    for i in range (1,len(path)):
        edge=path[i-1]+path[i]
        stepcost=cost[edge]
        pathcost=pathcost+stepcost
    return pathcost
def GFS():
    expanded=[]
    pathq=[start]
    fringe=[start]
    fn=[9]
    while fringe:
        m=min(fn)
        mi=fn.index(m)
        fn.pop(mi)
        path=pathq.pop(mi)
        node=fringe.pop(mi)
        if (node==goal):
            print("Goal Found")
            print("Solution path: ",path)
            pathcost=calcpathcost(path)
            print("Path Cost",pathcost)
        else:
            neighbour=graph[node]
            for n in neighbour:
                fringe.append(n)
                npath=list(path)
                npath.append(n)
                pathq.append(npath)
                fn.append(heuristic[n])
                expanded.append(node)
graph={'a':['b','c'],'b':['c','d','e'],'c':['d','e'],'d':['g'],'e':['d','g']}
cost={'ab':5,'ac':3,'bc':6,'bd':2,'be':8,'cd':7,'ce':6,'dg':5,'ed':5,'eg':4}
heuristic={'a':9,'b':6,'c':8,'d':4,'e':4,'g':0}
start='a'
goal='g'
GFS()

                          
