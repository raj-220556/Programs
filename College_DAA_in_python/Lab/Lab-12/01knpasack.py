

p =[100,20,40,80,70]
w = [7,1,3,4,3]
c = 10
n = len(p)

sol=[]
def knapsack01(sol,i,wc):
    if i == n or c == wc :
        print(sol)
        return
    for j in range(n):
        if j not in sol and w[j]+wc <= c:
            sol.append(j)
            knapsack01(sol,i+1,wc+w[j])
            sol.pop()
    
knapsack01(sol, 0,0)