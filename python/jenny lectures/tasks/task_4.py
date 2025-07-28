# caluculate BMI (body mass index) == w/(h*h)
height = float(input("enter the height :"))
weight = float(input("enter the weight :"))
BMI = weight/(height**2)

print("BMI = ",int(BMI))