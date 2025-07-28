class atm():
    def __init__(self,acc_no : int,bal =0):
        assert bal >=0 ,f"balance is {bal} must be greather than or equal to zero"

        self.acc_no =acc_no
        self.bal = bal

    def withdraw(self):
        money = int(input("enter the amount to withdraw : "))
        if self.bal >= money : 
            self.bal = self.bal - money
            print(f"money has been succesfully withdraw")
        else:
            print(f"you do not have sufficent balance")   
        
    def deposit(self):
        amount = int(input("enter the amount to deposit"))
        if amount >=0:
            self.bal = self.bal + amount
            print(f"money has been sucessfully deposited")
        else:
            print(f"{amount} is not valid to deposit money")
keshava = atm(2020,6000)

keshava.withdraw()