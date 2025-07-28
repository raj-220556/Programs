# pizza order pogram
print("enter respective number for order:\n")
print("1.small pizza = 100/-\n2.medium pizza = 200/-\n3.large pizza = 300/-")
order = int(input("order : "))
bill = 0
if(order == 1):
    bill += 100
    print("pepperoni for small pizza = 30/-")
    pepper = int(input("do you want pepperoni 'yes(1)' or 'no(0)':"))
    if(pepper):
        bill += 30
    print("extra chesse = 20/-")
    chesse = int(input("do you want extra chesse 'yes(1)' or 'no(0)' :"))
    if(chesse):
        bill += 20
   
    
elif(order == 2):
    bill += 200
    print("pepperoni for medium pizza = 50/-")
    pepper = int(input("do you want pepperoni 'yes(1)' or 'no(0)':"))
    if(pepper):
        bill += 50
    print("extra chesse = 20/-")
    chesse = int(input("do you want extra chesse 'yes(1)' or 'no(0)' :"))
    if(chesse):
        bill += 20
elif(order == 3):
    bill += 300
    print("pepperoni for large pizza = 50")
    pepper = int(input("do you want pepperoni 'yes(1)' or 'no(0)':"))
    if(pepper):
        bill += 50
    print("extra chesse = 20/-")
    chesse = int(input("do you want extra chesse 'yes(1)' or 'no(0)' :"))
    if(chesse):
        bill += 20
else:
    print("thank u for coming vist us agian")

print(f"your bill is {bill}/-\n'thank u for visting'")