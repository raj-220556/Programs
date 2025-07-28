# sum of even numbers
# a = range(5)
# # print(a,type(a))  #range(0, 5) <class 'range'>

ranges = input("enter lower and upper range seprate by space :")
range_list = ranges.split()
lower = int(range_list[0])
upper = int(range_list[1])
print(type(lower+1),lower+1)
sum = 0
if lower % 2 == 0:
    for even in range(lower,upper + 1,2):
        sum += even
else:
    for even in range(lower + 1,upper + 1,2):
        sum += even
print(f"sum of even b/w {lower} and {upper} is {sum}")