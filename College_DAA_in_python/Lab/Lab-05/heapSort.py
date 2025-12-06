import time
def heapify(a, i,n):
    
    l = 2*i +1
    r = 2*i +2
    large = i
    if l < n and a[l] > a[large]:
        large = l
    if r < n and a[r] > a[large]:
        large = r
    if large != i :
        a[large],a[i] = a[i], a[large]
        heapify(a, large,n)

def Buildheap(a):
    n = len(a)
    for i in range(n//2-1,-1, -1):
        heapify(a,i,n)

def heapsort(a):
    Buildheap(a)
    n = len(a)
    for i in range(n-1, 0, -1):
        a[0], a[i] = a[i], a[0]
        heapify(a, 0, i)

a = [5,4,3,2,1]
print("Original array:", a)
# Buildheap(a)
# print("Heapified array:", a)
start_time = time.time()
heapsort(a)
print("Time taken:", time.time() - start_time)
print("Sorted array:", a)
