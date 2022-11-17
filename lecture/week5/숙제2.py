import sys


def sum (a, b):
    return (a+b)

def sub (a, b):
    return a-b

def mul (a, b):
    return a*b

def div (a, b):
    if(b==0):
        print ("Zero Division")
        return sys.maxsize
    return a/b
        
def mod (a, b):
    if(b==0):
        print ("Zero Division")
        return sys.maxsize
    return a%b
def printMsg ():
    print("completed,꺼억")

a=int(input())
b=int(input())

print("sum:",sum(a,b))
print("difference:",sub(a,b))
print("product:"+str(mul(a,b)))
print("division:"+ str(div(a,b)))
print("remainder:", mod(a,b))
printMsg()
