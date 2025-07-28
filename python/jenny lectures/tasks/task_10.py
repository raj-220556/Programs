# love calculator
# doing by "TRUE" and "LOVE" letters in your name count place beside ex:TRUE letter are 4 and LOVE 
# letter are 1 then you are 41% love
# cases 1.above 90 you are made for each other
#       2.below 10 you are not perfect match
#       3.other above 50 you are ok to love
# print percentage of love all cases

girl = input("enter girl name :")
boy = input("enter boy name :")
girl = girl.lower()
boy = boy.lower()
TRUE = 0
LOVE = 0
if('t' or 'r' or 'u' or 'e' in boy or girl):
    count = boy.count('t') + girl.count('t')
    count = count +(boy.count('r') + girl.count('r'))
    count = count +(boy.count('u') + girl.count('u'))
    count = count +(boy.count('e') + girl.count('e'))
    TRUE = count
if('l' or 'o' or 'v' or 'e' in boy or girl):
    count = boy.count('l') + girl.count('l')
    count = count +(boy.count('o') + girl.count('o'))
    count = count +(boy.count('v') + girl.count('v'))
    count = count +(boy.count('e') + girl.count('e'))
    LOVE = count

percent = 10*TRUE+LOVE

print(f"you love percentage is {percent}%")
if percent>90 :
    print("you are made for each other")
elif percent<10 :
    print("better to choose other")
elif percent>50 :
    print("nice couple")
else:
    print("not strong enough")

