#Jane is mother of Paul.
#Jane is mother of Mary.
#All persons having same mother are siblings.
#prove that Mary is sibling of Paul.
from pyDatalog import pyDatalog
pyDatalog.create_terms('mother,siblings,X,Y,Z')
+mother('Jane','Paul')
+mother('Jane','Marry')
siblings(X,Y) <= mother(Z,X) & mother(Z,Y)
siblings(X,'Paul')
if(X.data[0]=='Marry'):
    print("Arguement is Valid")
    print("i.e Mary is sibling of Paul")
else:
    print("Arguement is Invalid")
