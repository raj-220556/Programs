import math


def tsp_btk(visited, cur_ind, count, cost):
    global G, n,bound, sol
    if(cost+G[cur_ind][0] > bound):
        return

    if count == n:
        if(cost+G[cur_ind][0] < bound):
            bound = cost+G[cur_ind][0]
            sol = visited + [0]
        # print(visited, bound)

        return
    for i in range(n):  
        if i not in visited:
            new_bound = cost+G[cur_ind][i]+G[i][0]
            if(new_bound<bound):
                visited.append(i)
                tsp_btk(visited, i, count + 1, cost + G[cur_ind][i])
                visited.pop()

G = [
    [0, 15, 20, 10],
    [15, 0, 30, 10],
    [20, 30, 0, 20],
    [10, 10, 20, 0]
]
bound = math.inf
n = len(G)
visited = [0]
sol = []
tsp_btk(visited, 0, 1, 0)
print('Shortest path : ',bound)
print("path: ",sol)