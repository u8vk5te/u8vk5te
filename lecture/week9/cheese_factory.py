import random


def getRandomString(leng):
   c=chr(96+random.randint(1,26))
   for wfh in range(leng-1):
      b=chr(96+random.randint(1,26))
      c=c+b      
   return c

def eatingCheese(cheese, eaten_alphabets):
   ret = ""
   for idx in range(len(cheese)):
      if cheese[idx] in eaten_alphabets:
         ret = ret + "_"
      else:
         ret = ret + cheese[idx]

   return ret


cheese_size=int(input("Input the length of the string : "))
cheese = getRandomString(cheese_size)
print("Generated Cheese is '"+cheese+"'")
print("Mouse Starts eating!!")

p=[]

for idx in range(100):
   d=getRandomString(1)
   if(d not in p):
      p.append(d)
      
   print()
   print("start eating '"+d+"'")
   print("Eaten alphabet of cheese:"+str(p)+"'")
   print("Original cheese:"+cheese)
   eaten_cheese = eatingCheese(cheese, p)
   print("Current cheese status:"+ eaten_cheese)
   if("_"*cheese_size==eaten_cheese):
      print("Out of cheese")
      break
   
