import csv



# # CLASS ATRIBUTIES
# # there are two types of class atributes...(class.atribute)
# # 1.Class atributes     (atributes that present overall class)
# # 2.Instance atributes  (atributes that present to by calling variable)
# #exampe with code

# class Item():
#     pay_rate =0.8
#     def __init__(self,name : str,prize : float,quantity = 0):
#         # run and validating recevied arguments
#         assert prize >= 0, f"prize is {prize} not greather than or equal to zero"
#         assert quantity >=0, f"quantity is {quantity} not greather than or equal to zero"

#         # Assign to self object
#         self.name =name
#         self.quantity =quantity
#         self.prize =prize

#     def calculation_of_cost(self):
#         return self.quantity * self.prize
    
#     def discount_prize(self):
#         # return self.prize * Item.pay_rate  #class level method
#         # return self.prize * self.pay_rate  #instance level method
#         pass



# item1 =Item("phone", 100, 1)
# # print(item1.calculation_of_cost())

# # print(Item.__dict__) #class level of atributes
# # print(item1.__dict__) #instance level of atributes

# # item1.pay_rate =0.7
# # Item.pay_rate =0.7

# print(item1.discount_prize())


#MULTIPLE INSTANCE LEVELS


class Item():
    pay_rate=0.8
    all = []    #list
    def __init__(self, name :str, prize :int, quantity = 0):
        #run and validating recevied aruguments
        assert prize >= 0 ,f"prize is {prize} not greather than or equal to zero"
        assert quantity >= 0 ,f"quantity is {quantity} not greather than or equal to zero"

        # Assign to self object
        self.name = name
        self.quantity =quantity
        self.prize = prize

        # Excution code
        Item.all.append(self)

    

    # def instantiate_from_csv(self):  this is method become a instance method we class method to do so
  
    @classmethod
    def instantiate_from_csv(cls):
        with open('/home/raj-kumar/Desktop/python/OOPs/items.csv','r') as f :
            reader = csv.DictReader(f)
            items = list(reader)

        for item in items:
            # print(item)
            Item(
                name = item.get('name') ,
                price = float(item.get('price')) ,
                quantity =int(item.get('quantity')) ,
            )

    # static method is used to check the number is integer or float in a class method 

    @staticmethod
    def is_integer(num): #it could not be recevie the object
        # we wiil count out the floats that are point zero
        # for i.e: 5.0, 10.0 and so on 
        if isinstance(num, float):
            # count out the floats taht are point zero
            return num.is_integer()
        elif isinstance(num,int):
            return True
        else :
            return False
        
    def __repr__(self):
        # __repr__ is a magical method returns the STRING
        return f"Item('{self.name}',{self.prize},{self.quantity})"
    

# item1 = Item("phone", 100, 1)
# item2 = Item("laptop", 1000, 3)
# item3 = Item("mouse", 10, 5)
# item4 = Item("keyboard", 50, 5)
# item5 = Item("cable", 75, 5)

# Also take values of these are in csv file(comma separated values) maintain for data

# print(Item.all) 


# Item.instantiate_from_csv()
# print(Item.all)

print(Item.is_integer(7.6))

