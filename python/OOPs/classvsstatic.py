# when to use class methods and whwn to use static methods ?

class Item :
    @staticmethod 
    def is_integer(num):
        '''
        this should do something thst has a relationship with thw class , but not something 
        that must be unique per instance!
        '''
    
    @classmethod 
    def instantiate_from_something(cls):  #like csv,json,yaml files those are used to maintain data
        '''
        This should also do something that has a relationship 
        with the class, but usually, those are used to manipulate
        different structures of data to instantiate objects, like we have done with CSV.
        '''


# main difference between them

# static method not pass object references as the first argument,
# we just pass that is regular parameter 


# however, those could be also called from instances

item1 = Item()
item1.is_integer(5)
item1.instantiate_from_something()