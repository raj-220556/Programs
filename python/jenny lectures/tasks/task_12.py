# who pays the bill(whithout using choice function)
import random

names = input("enter the names separate by comma :")
names_list = names.split(",")
print(names_list)
unlucky = random.choice(names_list)
index = random.randrange(0,len(names_list))
print(f"{unlucky} and {names_list[index]} pays the bill")