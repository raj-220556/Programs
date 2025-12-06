import numpy as np
def Insertionsort(a):
    count = 0
    n = len(a)
    for i in range(1,n):
        temp = a[i]
        j = 0
        for j in range(i-1, -2, -1):
            if a[j] > temp :
                a[j+1] = a[j]
                count += 1
            else:               
                break
        # else: # use when it is -1
        #     j -=1
        a[j+1] = temp
    return count
    
arr = [20, 15 , 10, 5 ,2]

# arr = np.array(a)
print("Inner Loop count :",Insertionsort(arr))
print(arr)