


def tsp_bkt(visited, cur_ind, count, cost):
    global G, n, bound, start_ind
    if cost+G[cur_ind][start_ind] >= bound:
        return
    
    if count == n:
        if cost+G[cur_ind][start_ind] < bound:
            bound = cost+G[cur_ind][start_ind]
        # print(visited, cost)
        return
    
    for i in range(n):
        if feasible(visited, i, count):
            visited[count] = i
            tsp_bkt(visited, i, count+1, cost+G[cur_ind][i])
            visited[count] = -1  # Backtrack

def feasible(visited, i, count):
    global n
    if i not in visited:
        return True
    return False


G = [[0, 15, 20, 10],
    [15, 0, 30, 10],
    [20, 30, 0, 20],
    [10, 10, 20, 0]]
n = len(G)
bound = float('inf')
start_ind = 0
visited = [-1]*n
visited[0] = start_ind
tsp_bkt(visited, start_ind, 1, 0)
