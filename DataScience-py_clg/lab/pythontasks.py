# 1. Write a Python program to display the current date and time
import datetime
print("current date : ", datetime.date.today())  # datetime.datetime.now().date()
print("current time : ", datetime.datetime.now().time())

# 2. Write a Python program that accepts the user's first and last name and prints them in reverse
# order with a space between them.

# name = input("Enter your first and last name: ")
# names = name.split(" ")
# print(names[1]+ " " + names[0])

# 3. Write a Python program that accepts an integer (n) and computes the value of n+nn+nnn.
# Sample value of n is 5
# Expected Result : 155

# n1 = input("Enter value of n: ")
# n1 = int(n1)
# print("n+nn+nnn = ",n1 + n1**2 + n1**3)

# 4. Write a Python program to calculate the sum of three given numbers. If the values are equal,
# return three times their sum.

# num4 = input("Enter three number with spaces: ")
# nums4 = num4.split(" ")

# if nums4[0] == nums4[1] and nums4[1] == nums4[2]:
#     print("sum : ",int(nums4[0])*3*3)
# else:
#     l4 = []
#     l4 = l4 + [int(i) for i in nums4]
#     print("sum : ",sum(l4))

# 5. Write a Python program to solve (x + y) * (x + y).
# Test Data : x = 4, y = 3
# Expected Output : (4 + 3) ^ 2) = 49

# x5 = int(input("Enter 'x' value: "))
# y5 = int(input("Enter 'y' value: "))
# print("(x + y) * (x + y) = ",(x5 + y5)**2)


# 6. Write a Python program to compute the future value of a specified principal amount, rate of
# interest, and number of years.
# Test Data : amt = 10000, int = 3.5, years = 7
# Expected Output : 12722.79

# amt = int(input("Enter amount: "))
# inte = int(input("Enter rate of interest (in %): "))
# t = int(input("Enter no.of years: "))

# print("Total amount: ", (amt*inte*t)/100)


# 7. Write a Python program to parse a string to float or integer.
# n7 = "7"
# print(n7,type(n7))
# in7 = int(n7)
# print(in7,type(in7))
# fn7 = float(n7)
# print(fn7,type(fn7))

# 8. Write a Python program to sum the first n positive integers

# import random
# n8 = 10
# sum8 = 0
# for i in range(10):
#    l8 = random.randrange(-10,100)
#    if l8 < 0:
#     break
#    sum8 = sum8 + l8
# print("sum : ",sum8)

n = 10
total_sum = n * (n + 1) // 2
print(f"The sum of the first {n} integers is: {total_sum}")


# 9. Write a Python program to calculate sum of digits of a number

# num9 = int(input("Enter a number: "))
# sum9 = 0
# t9 = num9
# while(t9 > 0):
#     sum9 = sum9 + t9%10
#     t9 = t9//10
# print("sum of digit: ",sum9)


# 10. Write a Python program to get the ASCII value of a character.
# chr = input("Enter a character: ")
# print(f"ASCII value of a {chr} is {ord(chr)}")

# 11. Write a Python program to check whether a string is numeric.

# str11 = input("Enter a string Or number: ")
# if str11.isnumeric():
#     print(f"{str11} is numeric")
# else:
#     print(f"{str11} is a String")

# 12. Print a rectangle Pattern with 5 rows and 3 columns of stars.

# for i in range(5):
#     for j in range(3):
#         print("*",end=" ")
#     print()


# 13. Write a program which will find all such numbers which are divisible by 7 but are not a multiple
# of 5, between 2000 and 3200 (both included).

# for i in range(2000,3201):
#     if i%7 == 0 and not i%5==0:
#         print(i, end=" ")


# 14. Write a program that calculates and prints the value according to the given formula:
# Q = Square root of [(2 * C * D)/H]
# Following are the fixed values of C and H:
# C is 50. H is 30. D is the variable whose values should be input to your program in a comma-
# separated sequence.
# Example
# Let us assume the following comma separated input sequence is given to the program:
# 100,150,180
# The output of the program should be: 18,22,24
# Hints:
# If the output received is in decimal form, it should be rounded off to its nearest value (for
# example, if the output received is 26.0, it should be printed as 26)
# In case of input data being supplied to the question, it should be assumed to be a console input.


# C , H = 50,30

# input = input("Enter numbers separated by , : ")

# nums = input.split(",")

# output = ""
# for num in nums:
#     d = int(num)
#     output = output + str((2*C*d)//H) + "," 
# print(output)


# 15. Write a program to print a right angle triangle with alphabets.(instead of ‘*’, Alphabet).

# asciichar = 65

# for i in range(5,0,-1):
#     for j in range(i):
#         print(chr(asciichar),end = " ")
#         asciichar += 1
#     print()