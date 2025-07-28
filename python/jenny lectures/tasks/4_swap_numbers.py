a=int(input("enter the number 1: "))
b=int(input("enter the number 2: "))
# using third variable
c=a
a=b
b=c
print("num1 =",a,"\nnum2 =",b)
# without using varible
a=a+b
b=a-b
a=a-b
print("num1 =",a,"\nnum2 =",b)
# with using * and /
a=a*b
b=a/b
a=a/b
print("num1 =",a,"\nnum2 =",b)


