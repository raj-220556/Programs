# Implement quicksort for 10^6 randomly generated and compare the excecution time with merge sort
import time
import random as r
swap = 0
compare = 0
recursions = 0
def quicksort(arr, low, high):
    global compare, swap, recursions
    if low < high:
        recursions += 1
        pi = partition(arr, low, high)
        quicksort(arr, low, pi - 1)
        quicksort(arr, pi + 1, high)

def partition(arr, low, high):
    global compare, swap
    pivot = arr[low]
    i = low + 1
    j = high

    while i <= j:
        compare += 2
        while i <= high and arr[i] <= pivot:
            i += 1
        compare += 2
        while j > low and arr[j] > pivot:
            j -= 1

        compare += 1
        if i < j:
            swap += 1
            arr[i], arr[j] = arr[j], arr[i]
        compare += 1
    swap += 1
    arr[low], arr[j] = arr[j], arr[low]
    return j

n=10
arr = [r.randint(0,1000000)for i in range(n)]
print("Original array:", arr)
start_time = time.time()
quicksort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
print("Time taken:", time.time() - start_time)

print("Number of swaps:", swap)
print("Number of comparisons:", compare)
print("Number of recursions:", recursions)
