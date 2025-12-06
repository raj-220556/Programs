import time
def sumofsubsetsss(sum,i):
    global t,sol,n,a
    if sum == t:
        print(sol)
        return
    if sum > t or i == n:
        return
    for j in range(i,n):
        if a[j] not in sol:
            sol.append(a[j])
            sumofsubsetsss(sum+a[j],j+1)
            sol.pop()

a = [2,3,6,7]
t = 7
sol = []
n = len(a)

start_time = time.time()
sumofsubsetsss(0,0)
end_time = time.time()
print(f"exectiontime time : {start_time-end_time}")