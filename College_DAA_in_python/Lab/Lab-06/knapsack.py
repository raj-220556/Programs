# Investor Portfolio Selection:
# An investor can invest in various projects, each requiring a certain amount of capital and offering a return.
#  The investor has a limited budget and can invest partially in any project. Maximize the total return.

# Input:

# Number of projects: n = 4
# Capital required: capital = [50, 70, 80, 90]
# Returns: returns = [100, 120, 110,,130]
# Total budget: budget = 200

class project:
    capital,returns,ratio = 0,0,0
    def __init__(self, capital, returns):
        self.capital = capital
        self.returns = returns
        self.ratio = returns / capital


p1 = project(50,100)
p2 = project(70,120)
p3 = project(80,110)
p4 = project(90,130)

projects = [p1,p2,p3,p4]

budget = 200
totalreturns = 0
# Knapsack algorithm

# Sorting data with ratio in decesending order
for i in range(len(projects)):
    for j in range(len(projects)):
        if(projects[i].ratio > projects[j].ratio):
            projects[i],projects[j] = projects[j],projects[i]

for i in range(len(projects)):
    print(projects[i].ratio,projects[i].capital)
for i in range(len(projects)):

    if(budget > 0 and projects[i].capital <= budget):
        budget = budget - projects[i].capital
        totalreturns = totalreturns + projects[i].returns
    else:
        totalreturns = totalreturns + (projects[i].returns*(budget/projects[i].capital))
        break
        

print(f"Maximum Returns of your Budget : {totalreturns}")

