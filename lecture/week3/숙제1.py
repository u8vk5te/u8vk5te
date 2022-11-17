print("숫자를 입력하세요")
line=int(input())+1
count=1
a=0
b=0
while(count<int(line)):
        a=0
        while(a<int(line)-count):
                print(end=' ')
                a=a+1
        b=0
        while(b<count):
                print("*",end='')
                b=b+1
        print(end="\n")
        count=count+1

