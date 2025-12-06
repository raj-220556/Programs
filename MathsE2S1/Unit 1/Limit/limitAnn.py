import random

coin = ["T", "H"]

An = 0

n = int(input("Enetr No of Trails N: "))
print("Probability of Head :")
print("="*31)
print(" N --- Outcome --- An --- An/n")
print("="*31)

for i in range(1,n+1):
    output = random.choice(coin)
    if output == "H":
        An += 1
    print(f" {i} ---    {output}    --- {An} ---  {An/i}")