import random

dies = [1,2,3,4,5,6]
# n = int(input("Enetr no.of times to rool dies:"))
n = 1000
teven,todd = 0,0
tno1,tno2,tno3,tno4,tno5,tno6 = 0,0,0,0,0,0

# By n pepople
for j in range(n):
    # Tossing n Dies
    even,odd = 0,0
    no1,no2,no3,no4,no5,no6 = 0,0,0,0,0,0
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
    teven += even/n
    todd += odd/n
    tno1 += no1/n
    tno2 += no2/n
    tno3 += no3/n
    tno4 += no4/n
    tno5 += no5/n
    tno6 += no6/n
    
print(f"=== propability of {n} people ===")
print(f"propability of even number is {teven/n}")
print(f"propability of odd number is {todd/n}")
print(f"Propability of prime number is {(tno2/n)+(tno3/n)+(tno5/n)}")
print(f"propability of number 1 is {tno1/n}")
print(f"propability of number 2 is {tno2/n}")
print(f"propability of number 3 is {tno3/n}")
print(f"propability of number 4 is {tno4/n}")
print(f"propability of number 5 is {tno5/n}")
print(f"propability of number 6 is {tno6/n}")