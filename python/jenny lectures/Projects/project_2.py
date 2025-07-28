# password generator

import random

alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
    'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

numbers = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']

symbols = ['!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', 
    '_', '+', '=', '[', ']', '{', '}', ';', ':', "'", '"', '<', '>', 
    '?', '/', '\\', '|', '~', '`', ',', '.']

print("Welcome to Password Generator!")
level = int(input("Do you want easy(1) or hard(0) level password :"))
no_alphabets = int(input("enter number of alphabets do you want?\n"))
no_numbers = int(input("enter number of numbers do you want?\n"))
no_symbols = int(input("enter number of symbols do you want?\n"))

password = []
for i in range(no_alphabets):
    alpha = random.choice(alphabets)
    password.append(alpha)

for i in range(no_numbers):
    num = random.choice(numbers)
    password.append(num)

for i in range(no_symbols):
    sym = random.choice(symbols)
    password.append(sym)

password_string = ""

if level:
    for word in password:
        password_string += word
else:
    random.shuffle(password)
    for word in password:
        password_string += word
 


print("Generated ppassword :",password_string)

