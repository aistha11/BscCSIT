#All greedy leaders are autocrats.
#All autocrafts are evil.
#Ram is honest leader.
#Hari is greedy leader.
#Prove that Hari is evil.
from pyDatalog import pyDatalog
pyDatalog.create_terms('auto,leader,greedy,honest,evil,X,Y,Z')
+honest('Ram')
+leader('Ram')
+greedy('Hari')
+leader('Hari')
auto(X) <= greedy(X) & leader(X)
evil(X) <= auto(X)
evil(X)
if(X.data[0]=='Hari'):
    print("Arguement is valid")
    #print("i.e Hari is evil")
else:
    print("Arguement is Invalid")
