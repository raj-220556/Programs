n =int(input("enter the no.of rows u want : "))
p =1 

for i in range(1,n+1):
    for j in range(n-i):
        print("  ",end=" ")
    
    for j in range(0,i+1):
        num = 1
        for k in range(j+1):
            num = num*(i-k)/(k+1)
        print(int(num),end='  ')
    print("\n")
