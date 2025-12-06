# Implement TSP using DP method. i.e find minimum cost hamiltonium cycle in a graph use bit wise
# masing to check whether a node is already visited

# Graph edge(A,B, weight): (a,b,15),(a,d,5), (a,c,10) , (b,c,10), (b,d,20), (c,d,10)

graph = [
    [0, 15, 10, 5],
    [15, 0, 10, 20],
    [10, 10, 0, 10],
    [5, 20, 10, 0]
]

n = len(graph)
dp = []
dp.append([[-1]*(2**n)]*n)

print(dp)

def tsp(index, visited):
    if visited == (1 << n) - 1: # (1 << n) - 1 visited all lie 1111
        return graph[index][0]
    
    if dp[index][visited] != -1: 
        return dp[index][visited]
    
    ans = float('inf')
    for i in range(n):
        if visited & (1 << i) == 0:
            newAns = graph[index][i] + tsp(i, visited | (1 << i))
            ans = min(ans, newAns)
    
    dp[index][visited] = ans
    return ans

print(tsp(0, 1))