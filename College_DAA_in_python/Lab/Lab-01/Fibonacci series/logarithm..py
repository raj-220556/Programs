import time
import numpy as np
def mult(A, B):
    m = A.shape[0]
    c = np.zeros((m,m))
    for i in range(m):
        for j in range(m):
            for k in range(m):
                c[i,j] += A[i,k] * B[k,j]
    return c

def power(A, n):
    if n == 1:
        return A
    p = power(A, n//2)
    pow = mult(p,p)
    if n%2 == 1:
        pow = mult(pow,A)
    return pow

def fib3(n):
    A = np.array([[1,1],[1,0]])
    f = np.array([[1],[0]])
    c = power(A,n-1)
    return np.sum(c[0:]*f)


n = int(input("Enter n value :"))
start_time = time.time()
print("recursive c : ",fib3(n))
print("Recursive Execution time : ",time.time()-start_time)