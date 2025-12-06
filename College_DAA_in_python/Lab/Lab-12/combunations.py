# combinations using backtrack

n = 3
a = [i for i in range(n)]
c = []

def combinations(c, i):
    print(c)
    for j in range(i,n):
        if a[j] not in c:
            c.append(a[j])
            combinations(c, j+1)
            c.pop()

combinations(c,0)
