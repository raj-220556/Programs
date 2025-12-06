
# graph coloring using bac tracking

def isvalid(u,c):
    for i in range(u):
        if d[i][u] == 1 and color[i] == c:
            return False
    return True

def coloring(color, u):
    global d, k 
    if u == n:
        print("sol: ", color)
        return
    for c in range(1, k+1):
        if isvalid(u,c):
            color.append(c)
            coloring(color, u+1)
            color.pop() #backtrack

d = [
    [0,1,0,1],
    [1,0,1,1],
    [0,1,0,1],
    [1,1,1,0]
]
n = 4
k =3
color = []
print('graph coloring solutions:')
coloring(color,0)