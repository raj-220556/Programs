import random

coin = ['T', 'H']
n = int(input("Enter no.of Tosses :"))
countHead, countTail = 0,0
for i in range(n):
    toss = random.choice(coin)
    if toss == 'T':
        countTail += 1
    else:
        countHead += 1

propabilityofHead = countHead/n
propabilityofTail = countTail/n

print(f"propability of Head : {propabilityofHead * 100}")
print(f"propability of Tail : {propabilityofTail * 100}")