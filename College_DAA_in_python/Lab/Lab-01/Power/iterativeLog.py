import time

# Iterative
def power(a, n):
    pow = 1
    for i in range(n):
        pow = pow *a
    return pow

# Logarithmic time

def recpower(a, n):
    if n == 1: 
        return a
    p = recpower(a, n/2)
    pow = p*p
    if n % 2 == 1:
        pow *= a
    return pow

