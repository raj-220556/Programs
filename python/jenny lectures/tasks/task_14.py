# caluculating average height
heights = input("enter the heights seprate by commas :")
heights = heights.split(",")
sum = 0
length = 0
for height in heights:
    sum += int(height)
    length += 1
print(f"average height is {round(sum/length)}")   



