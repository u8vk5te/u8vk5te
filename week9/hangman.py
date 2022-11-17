import random

HANGMAN_PICS = ['''
 +---+
     |
     |
     |
    ===
''','''
 +---+
 o   |
     |
     |
    ===
''','''
 +---+
 o   |
 |   |
     |
    ===
''','''
 +---+
 o   |
/|   |
     |
    ===
''','''
 +---+
 o   |
/|\ |
     |
    ===
''','''
 +---+
 o   |
/|\ |
/    |
    ===
''','''
 +---+
 o   |
/|\ |
/ \ |
    ===
''']


bb=0
Letters=[]
   

words = 'ant fox bear beaver'.split()

def getRandomWord(word_list):
   word=word_list[random.randint(0,len(word_list)-1)]
   return word


secret_word = getRandomWord(words)
h="_"*len(secret_word)

def uii(n,g):
   wec=len(n)
   for izmb in wec:
      if(n[izmb-1]==g):
         h=h[0,izmb-1]+g+h[izmb+1,wec]
   return h
# loop
if(bb!=7):   
   HANGMAN_PICS[bb]
   print("Missed Letters:")
   print(h)
   print ("Guess a letter.")
   guess = input()
   if(guess in Letters):
      print("you have already guessed that letter. Choose again")
      print("Guess a letter.")
      guess=input()
      if (guess in secret_word):
         uii(secret_word,guess)
         Letters.append(guess)
   else:
      Letters.append(guess)
      bb=bb+1
   if(str(h)==str(secret_word)):
      print("Yes! The secret word is '"+serect_word+"'! You have won!")
      exit
else:
   print("lose"+secret_word+"letter")
   exit
      
      
      

            
