# Frame a problem resembling to 1) Fractional knapsack problem 2) Job sequencing with deadlines

# Online Order Fulfillment:
# An e-commerce warehouse has orders, each with a delivery deadline and profit. Each order takes one day to fulfill.
#  Maximize profit by fulfilling orders before their deadlines.

# Input:

# Number of orders: n = 5
# Deadlines: deadlines = [2, 1, 2, 1, 3]
# Profits: profits = [100, 50, 20, 30, 60]

class order:
    ordernum = 0
    deadline,profit = 0,0
    def __init__(self, deadline, profit, ordernum):
        self.ordernum = ordernum
        self.deadline = deadline
        self.profit = profit

maxdeadline = 3
maxprofit = 0
flag = 0
t = [0,0,0]


o1 = order(2,100, 1)
o2 = order(1, 50, 2)
o3 = order(2, 20, 3)
o4 = order(1, 30, 4)
o5 = order(3, 60, 5)

orders = [o1, o2, o3, o4, o5]

orders.sort(key=lambda x:x.profit,reverse=True)

for i in range(len(orders)):
    for k in range(orders[i].deadline-1,-1,-1):
        if(t[k] == 0):
            t[k] = orders[i].ordernum
            maxprofit += orders[i].profit
            flag += 1
            break
    if(maxdeadline == flag):
        break

print(f"maximum profit returned from orders on deadline {maxprofit}")




