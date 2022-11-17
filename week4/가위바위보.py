import random
print("안녕하세요, 가위바위보를 합시다.")
trial = 5
print("가위,바위,보 중에 하나를 내면 됩니다.",trial,"번 가위바위보를 할 겁니다")


for index in range(trial):
        a=input()
        b=random.randint(1,3)

        c = 0
        if(a=="가위"):
                c = 1
        elif(a=="바위"):
                c = 2
        elif(a=="보"):
                c = 3

        if (b==1):
                print("가위")
        elif (b==2):
                print("바위")
        elif (b==3):
                print("보")


        if (c == b):
                print("비겼어요")
        elif ((c-b) % 3 == 1):
                print("제가 졌어요")
        elif ((c-b) % 3 == 2):
                print("제가 이겼어요")
