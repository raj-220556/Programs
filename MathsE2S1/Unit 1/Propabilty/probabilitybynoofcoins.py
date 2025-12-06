import random

coin = ['T', 'H']
n = int(input("Enter no.of Tosses :"))
countHead, countTail = 0,0
event = []
sampleSpace = []

output = input("Enter (n Head) to propability :")
o = output.split(' ')
k = int(o[0])
choice = o[1]
print(k, choice)

count =0

print(2**n)
for j in range(2**n):
    event = []
    for i in range(n):
        toss = random.choice(coin)
        event.append(toss)
    if event in sampleSpace:
        continue
    else:
        sampleSpace.append(event)
print("=== Sample Space ===")
for e in sampleSpace:
    if n <= 5:
        print(e, end = " ")
    else: 
        print("Sample Space is very Large")
    if e.count(choice) == k:
        count += 1

print(f"Propabity of {k} {choice} is : {(count/(2**n)) * 100}%")

