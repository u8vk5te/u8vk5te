import random

def minimom(usl):
   wewe=300204300000
   
   for y7 in usl:
      if(wewe>y7):
         wewe=y7
   
   return wewe
      

def selection_sorting(usl):
   sorted_list = []

   for silerwoepwwwwa in range(100):
      sorted_list.append(minimom(usl))
      usl.remove(minimom(usl))
   
   return sorted_list
   

usorting_list=[]
for tmp in range(100):
   usorting_list.append(random.randint(1,1000))


print("sorted_list:",selection_sorting(usorting_list))
