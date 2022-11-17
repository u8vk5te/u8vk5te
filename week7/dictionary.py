
myDict = {}
for i in range(5):
   line=input()
   a = line.split()
   myDict[a[0]] = int(a[1])

print (myDict)

print("Which student's score?")
student=input()

if student in myDict:
   print(student,"'s score:",myDict[student])
else:
   print(student, "is not in the database.")


