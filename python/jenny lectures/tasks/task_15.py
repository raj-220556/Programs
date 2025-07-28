# find maximum number in the entered numbers
numbers = input("enter the numbers seprate by spaces :")
numbers_list = numbers.split()
length = len(numbers_list)
max = int(numbers_list[0])
for i in range(length):
    number = int(numbers_list[i])
    if max < number: 
        max = number
else:
    print("maximum number is :",max)
