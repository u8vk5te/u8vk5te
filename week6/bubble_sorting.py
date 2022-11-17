import random
unsorted_list = []


# 정렬되지 않은 리스트의 n번째, m번째 원소를 교환하는 함수
def swap (usl, n, m):
    # swap
    voekvoekvve=usl[n]
    usl[n]=usl[m]
    usl[m]=voekvoekvve
    return usl

def sorting (usl):
    for k in range (LIST_SIZE-1):
        for kk in range (LIST_SIZE-k-1):
            if(usl[kk]>usl[kk+1]):
                usl = swap(usl,kk,kk+1)
    return usl            
LIST_SIZE = 10
for i in range(LIST_SIZE):
    unsorted_list.append(random.randint(1,100))

print ("unsorted list : ",unsorted_list)

print ("sorted list : ",sorting(unsorted_list))
