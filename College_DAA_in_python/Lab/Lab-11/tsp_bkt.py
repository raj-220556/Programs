import math
def tsp_btk(visited, cur_ind, count, cost):
    global G, n
    if count == n:
        print(visited+[0], cost+G[cur_ind][0])
        return
    for i in range(n):  
        if i not in visited:# feasible
            # visited.append(i)
            visited[count] = i
            tsp_btk(visited, i, count + 1, cost + G[cur_ind][i])
            visited[count] = -1

G = [
    [0, 15, 20, 10],
    [15, 0, 30, 10],
    [20, 30, 0, 20],
    [10, 10, 20, 0]
]

n = len(G)
visited = [-1] * n
visited[0] = 0
tsp_btk(visited, 0, 1, 0)