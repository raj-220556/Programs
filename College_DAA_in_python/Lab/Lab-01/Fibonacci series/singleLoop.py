import time

# Iterative
def fib1(n):
    a = 0
    b = 1
    c = 0
    for i in range(2,n):
        c = a+b
        a = b
        b = c
    return c

n = int(input("Enter value n : "))
start_time = time.time()
print("c = ", fib1(n))
print("Execuation time of single loop : ",time.time()-start_time)

# Recursive
def fib(n):
    if n == 1:
        return 0
    if n == 2 or n == 3:
        return 1
    return fib(n-1)+fib(n-2)

start_time = time.time()
print("recursive c : ",fib(n))
print("Recursive Execution time : ",time.time()-start_time)