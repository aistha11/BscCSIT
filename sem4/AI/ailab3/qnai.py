# Write a python program to implement simple question answering system that can answer following questions
print("Simple Question Answer System")
print("************************")
print("You May Ask About")
print("AI.")
print("Rational Agent")
print("Properties of rational agent.")
print("Laws of Thoughts.")
print("Turing Test")
while True:
  q=input("Enter a Question: ")
  v=q.find("AI")
  if v>=0:
    print("AI is the science and engineering of designing computer programs that can perform similar to human mind")
  s=q.find("rational agent")
  if "rational agent" in q:
    print("A rational agent can be anything that makes decisions, typically a person, firm, machine, or software. Rational agents are also studied in the fields of cognitive science, ethics, and philosophy, including the philosophy of practical reason.")
  r=q.find("laws of thoughts")
  if "laws of thoughts" in q:
    print(" the law of contradiction, (2) the law of excluded middle (or third), and (3) the principle of identity. ")
  t=q.find("properties of rational agent")
  if "properties of rational agent" in q:
    print("co operative autonomy reactive")
  s=q.find("turing test")
  if "turing test" in q:
    print("The Turing test, developed by Alan Turing in 1950, is a test of a machine's ability to exhibit intelligent behaviour")

