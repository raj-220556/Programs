import random

dies = [1,2,3,4,5,6]
n = int(input("Enetr no.of times to roll dies:"))
even = 0
odd = 0
no1,no2,no3,no4,no5,no6 = 0,0,0,0,0,0

# Tossing n Coins
for i in range(n):
    choice = random.choice(dies)
    if choice%2 == 0:
        even += 1
        if choice == 2:
            no2 += 1
        if choice == 4:
            no4 += 1
        if choice == 6:
            no6 += 1
    else:
        odd += 1
        if choice == 1:
            no1 += 1
        if choice == 3:
            no3 += 1
        if choice == 5:
            no5 += 1

print(f"propability of even number is {even/n}")
print(f"propability of odd number is {odd/n}")
print(f"Propability of prime number is {(no2/n)+(no3/n)+(no5/n)}")
print(f"propability of number 1 is {no1/n}")
print(f"propability of number 2 is {no2/n}")
print(f"propability of number 3 is {no3/n}")
print(f"propability of number 4 is {no4/n}")
print(f"propability of number 5 is {no5/n}")
print(f"propability of number 6 is {no6/n}")
