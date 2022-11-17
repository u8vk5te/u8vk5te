print("숫자")
line = input()
cnt = 0
while (cnt<5):
    if (cnt < 5 - line):
        print (" ", end = "")
    else:
        print ("*", end = "")
    cnt = cnt + 1
