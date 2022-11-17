a=int(input())
c=0
b=1
def addTotal():
    return str(a*(a+1)/2)
    
def gMul():
    global c
    global b
    
    while(c<a):
        b=b*(c+1)
        c=c+1
    return b   
    
print("addTotal():"+addTotal())
print("gMul:"+str(gMul()))
