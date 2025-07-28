# name = input("enter your name :")  
name = "raj"
name_type =type(name)

print(name,name_type)
num_1 = 10
num_2 = 12.0
num_1_type = type(num_1)
num_2_type = type(num_2)
print(num_1,num_1_type)
print(num_2,num_2_type)

boolean = num_1 <num_2
print(boolean,type(boolean))

# int has otherones that are decimal,hexadecimal,octal all these are also int type
print(0b10)
print(0o10)
print(0x10)
print(type(0x10))

# other some of points
print(name[0])
print("raj kumar"[2])
print("\"the end\"")
print(5*"raj")
