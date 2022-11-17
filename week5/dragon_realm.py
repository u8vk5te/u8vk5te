import random
import time

def displayIntro():
    print("You are in a land full of dragons. In front of you.")
    time.sleep(2)
    print ("you see two caves. In one cave, the dragon is friendly")
    time.sleep(2)
    print("and will share his treasure with you. The other dragon")
    time.sleep(2)
    print("is greedy and hungry and will eat you on sight.")
    time.sleep(2)
    print()

def chooseCave():
    cave = ""
    while (cave != '1' and cave != '2'): 
        print ("which cave will you go into? (1 or 2)")
        cave = input()
    return cave


def checkCave(cave):
    print("you approach the cave...")
    time.sleep(3)
    print("It is dark and spooky...")
    time.sleep(2)
    print("A large dragon jumps out in front of you! He opens his jaws and ...")
    time.sleep(1)
    friendly_cave = random.randint(1,2)

    if (cave == str(friendly_cave)):
        print("Gives you his treasure.")
    else:
        print ("Gobbles you down in one bite!")
        



playAgain  = "yes"

displayIntro()
while (playAgain == "yes" or playAgain == 'y'):
    cave = chooseCave()
    checkCave(cave)
    time.sleep(2)
    print("Do you want to play again? (yes or no)")
    playAgain = input()
