a=input()
words=a.split()
words_len=len(words)
k={}

for words_idx in range(words_len):
   if(words[words_idx] in k):
      k[words[words_idx]] = k[words[words_idx]]+1
   else:
      k[words[words_idx]] = 1
   

for key in k.keys():
   print(key,":",k[key])
