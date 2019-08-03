#Dasharath is father if Ram.
#Dasharath is father of Laxman
#Ram is father of Luv and Kush
#Who is grand father of Luv?
#Who is brother of Luv?
#Wo is uncle of Luv?
from pyDatalog import pyDatalog
pyDatalog.create_terms('father,brother,grandfather,uncle,X,Y,Z')
+father('Dashrath','Ram')
+father('Dashrath','Laxman')
+father('Ram','Luv')
+father('Ram','Kush')
grandfather(X,Y) <= father(X,Z) & father(Z,Y)
brother(X,Y) <= father(Z,X) & father(Z,Y)
uncle(X,Y) <= father(Z,Y) & brother(X,Z)
grandfather(X,'Luv')
print("Grandfather of Luv is:",X.data[0])
brother(X,'Luv')
print("Brother of Luv is:",X.data[0])
uncle(X,'Luv')
print("Uncle of Luv is:",X.data[0])
