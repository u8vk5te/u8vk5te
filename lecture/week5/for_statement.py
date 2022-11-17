
line = int(input())
for star in range(line):
        # print space area
        for pp in range(line - star - 1):
                print (" ", end = "")

        for p in range(2*star + 1):
                print ("*",end="")
        print()
