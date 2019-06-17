print("Simple Chatbot System")
print("************************")
print("You May Ask One Of These Question")
print("Hi")
print("How are You?")
print("Are you working?")
print("What is Your Name?")
print("What did you do yesterday?")
print("Bye")
while True:
  question=input("Enter Question: ")
  question=question.lower()
  if question in ['hi']:
    print("Hello")
  elif question in ['how are you?','how do you do?']:
    print("I am fine.")
  elif question in ['are you working?','where do you work']:
    print("Yes, I work as a CEO of Google.")
  elif question in ['what did you do yesterday?']:
    print("I played football in futsal")
  elif question in ['what is your name?','who are you?']:
      print("My name is AI.")
  elif question in ['bye']:
    print("Bye Bye.. Have a good day")
  else:
    print("Sorry! I don't get it.")
  
