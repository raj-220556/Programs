# #what is class 
# #lets take an example 
# item = "phone"
# item_price = 100
# item_quantity = 5
# total_item_cost = item_price*item_quantity
# print(type(item))#<class 'str'>             here str has been defined as previsoually in a class
# print(type(item_price))#<class 'int>
# print(type(item_quantity))#<class 'int>
# print(type(total_item_cost))#<class 'int>

# #example
# class item():
#     pass
# item1 = item()
# item1_price = 100
# item1_quantity = 5
# print(type(item1))#<class '__main__.item'>   now here item1 is defined as class item
# print(type(item1_price))#<class 'int>
# print(type(item1_quantity))

# #   CLASS METHODS
# # functions which have been written in defined are called as class methods

# item="aaa"
# print(item.upper()) #upper function that do operations to change upper case letters

# # example code
# class item():
#     def calculation_of_cost(self,x,y):
#         return x*y

# item1 =item()
# item1.name="phone"
# item1.quantity=5
# item1.prize=100
# print(item1.calculation_of_cost(item1.quantity,item1.prize))
        
# MAGICAL Methods
# CONSTRUCTION of __init__

# class Item():
#     def __init__(self, name, quantity, prize):      #this is called as magical method this was excute 
#         self.name=name                              # defaultly without calling
#         self.quantity=quantity
#         self.prize=prize
        
    
#     def calculations_of_item_cost(self,x,y):
#         return x*y

# item1=Item("phone" , 5, 100)
# # item1.name="phone"     #moving into class 
# # item1.quantity = 5
# # item1.prize = 100
# print(item1.name)
# print(item1.quantity)
# print(item1.prize ,"\n")

# item2=Item("laptop", 3, 1000)
# print(item2.name)
# print(item2.quantity)
# print(item2.prize)


# # Perfect code 
# class Item():
#     # Magical method
#     def __init__(self ,name :str, prize :int, quantity =0 ):
#         # Run and validations to the recevied arguments
#         assert prize >=0 ,f"prize is {prize} not greather than or equal to zero"
#         assert quantity >=0 ,f"quantity is {quantity} not greather than or equal to zero"

#         # Assign to self object
#         self.name = name
#         self.prize = prize
#         self.quantity =quantity
#     #class methods
#     def calculation_to_the_cost(self):
#         return self.prize*self.quantity


# item1 = Item("phone", 100, 1)       #if prize or quantity is negative code will get
# item2 = Item("laptop", 1000,3)     # assertition error and print given statement

# print(item1.calculation_to_the_cost()) #100
# print(item2.calculation_to_the_cost()) #3000
