print("숫자를 입력하세요")
line=input()
i=0
cnt=0
while(i<int(line)): # 몇개의 줄을 출력하는가
        cnt=0
        while(int(line)-i>cnt):   # 한줄에 별을 몇번 찍는가
                print("*",end='')
                cnt = cnt + 1
        print("\n",end='')
        i = i+1
