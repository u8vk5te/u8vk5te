import random
import time

#숫자 범위
start = 1
end = 600

# 추측 시도 횟수
trial = 12

print("이름을 알려주세요")
name = input()

loading = 3
print("음", end = "")
while (loading != 0):
    time.sleep(0.5)
    print(".", end="")
    loading = loading - 1
time.sleep(1)
print(" ", name,"님")
time.sleep(1)

print("제가 ", start,"부터 ", end,"까지 숫자중 하나를 생각할 건데 맞춰보세요" )
time.sleep(1)
print("기회는 ", trial, "번입니다")

# Hidden Number is randomly selected
number = random.randint(start,end)

# Game Start!
triall=trial
while (trial != 0):
    print()
    print("숫자를 맞춰보세요. (",trial,"번 남았네요)")

    # input()의 반환값은 항상 문자열이므로 숫자로 변환해 줘야함.
    guess = int(input())
    if(guess > number):
        print("좀 커요.")
    elif(guess<number):
        print("좀 작아요")
    elif(guess==number):
        print("아니 어떻게 알았지")
        print(triall+1-trial,"번 만에 맞췄네요,꺼억")
        break
    trial = trial - 1

if (trial == 0):
    print("어 못 맞추셨네, 숫자는",number,"이었어요")
