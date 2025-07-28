# heads or tails
import random

choice = int(input("enter head(1) or tail(0) :"))
win = random.randint(0,1)
if choice == win :
    print("you won")
else:
    print("you lost")