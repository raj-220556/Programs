import numpy as np
def Insertionsort(a):
    count = 0
    n = len(a)
    for i in range(1,n):
        temp = a[i]
        j = i-1
        while(j>=0 and a[j] > temp ):
            a[j+1] = a[j]
            j-=1
            count += 1
        a[j+1] = temp
    return count
    
arr = [6, 7, 2, 3, 5]
# arr = np.array(a)
print("Inner Loop count :",Insertionsort(arr))
print(arr)