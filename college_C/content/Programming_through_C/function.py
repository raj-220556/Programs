def fact( a):
	f = 1
	for  i in range(1,a+1):
		f = f*i
	return f

#name of function  followed with def keyword
#arguments to the function 
#return values from the function 

x=5
y = fact(x)
print(" factorial of x is ", y)

x=10
y = fact(x)
print(" factorial of x is ", y)
