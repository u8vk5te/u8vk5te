
count = 0
while (count < 5):
        button = input()
        if (button == "A"):
            print ("Attack")
        elif (button == "B"):
            print ("Depence")
        elif(button=="Q"):
            exit()
        else:
            print ("out of order!!")
        count = count + 1
