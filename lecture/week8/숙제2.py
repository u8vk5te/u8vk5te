import random


def getRandomString(leng):
   c=chr(96+random.randint(1,26))
   for wfh in range(leng-1):
      b=chr(96+random.randint(1,26))
      c=c+b      
   return c

a=int(input())
print(getRandomString(a))
   
   
