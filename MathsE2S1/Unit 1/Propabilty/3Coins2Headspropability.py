# 100 times tossing by 100 people how much propability of finding 2 heads in 3 coins tossing
import random

n = 100
coin = ["T", "H"]
totalpropability = 0

for i in range(n):
    propability = 0
    for j in range(n):
        event = []
        for k in range(3):
            choice = random.choice(coin)
            event.append(choice)
        if event.count("H") == 2:
            propability += 1
    totalpropability += propability/n
    

print(f"Propability of {n} people tossind 3 coins {n} time to get 2 heads is {totalpropability/n}")
print(3/8)