# permutations using back track

n= 3
a = [i for i in range(n)]

p = []
def permutations(p,i):
   
    if i == n:
        print(p)
        return
    for j in range(n):
        if a[j] not in p:
            p.append(a[j])
            permutations(p,i+1)
            p.pop()
    
permutations(p,0)