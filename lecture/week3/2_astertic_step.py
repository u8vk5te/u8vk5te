
print("숫자를 입력하세요")
a=input()
b=0
c=0
while(b<int(a)):
    c=0
    while(c<(b+1)):
        print("*", end='')
        c=c+1
    print('\n', end='')
    b=b+1
