# FizzBuzz pogram

# if num%3 print Fizz
# if num%5 print Buzz
# if num%3 and 5 print FizzBuzz
# else print number in between 1 to 100


for i in range(1,101):
    if i % 3 == 0 and i % 5 == 0 :
        print("FizzBuzz")
    elif i % 3 == 0 :
        print("Fizz")
    elif i % 5 == 0 :
        print("Buzz")
    else:
        print(i)
else:
    print("FizzBUzz is completed succesfully")