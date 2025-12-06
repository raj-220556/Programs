import random as r
import time
compare = 0
swap = 0
recursions = 0
def merege_sort(a, low, high):
    global compare, swap, recursions
    if low < high:
        recursions += 1
        mid = (low + high)//2
        merege_sort(a,low,mid)
        merege_sort(a, mid+1, high)
        merge(a, low, mid, high)

def merge(a, l, m, h):
    global compare, swap
    R, L = [], []
    n1 = m-l+1
    n2 = h-m
    for i in range(n1):
        swap += 1
        L.append(a[l+i])
    for i in range(n2):
        swap += 1
        R.append(a[m+1+i])
    
    i, j, k = 0,0,l
    while i < n1 and j < n2 :
        compare += 1
        swap += 1
        if L[i] <= R[j]:
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            k += 1
            j += 1
        compare += 1
    while i < n1:
        swap += 1
        a[k] = L[i]
        k += 1
        i += 1
        compare += 1
    while j < n2:
        swap += 1
        a[k] = R[j]
        k += 1
        j += 1
        compare += 1

n=10
arr = [r.randint(0,1000000)for i in range(n)]
print("Original array:", arr)
start_time = time.time()
merege_sort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
print("Time taken:", time.time() - start_time)

print("Number of swaps:", swap)
print("Number of comparisons:", compare)  
print("Number of recursions:", recursions)
