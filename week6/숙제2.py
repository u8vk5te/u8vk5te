import random

def max_in_list(usl):
    # finding max value in the usl , which is list
    max_value = 0
    for e in usl:
        if(e > max_value):
            max_value = e
    return max_value

ii=[]
for i in range(100):
    a=random.randint(1,1000)
    ii.append(a)

for x in ii:
    print(x, end = ' ')


print()    
print ("max value :",max_in_list(ii))
