print("숫자를 입력하세요")
line=int(input())
p=1
a=0
w=line-1 # white space의 개수를 나타내는 변수
while(a<int(line)):
        b = 0
        while(b<int(w)):
                print(" ",end='')
                b=b+1
        b = 0
        while(b<p):
                print("*",end='')
                b=b+1
        print()
        p=p+2
        a=a+1
        w=w-1
                
                        
