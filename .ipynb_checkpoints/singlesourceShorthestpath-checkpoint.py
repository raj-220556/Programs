import heapq
import math
def dijkstra(graph, source):
    n = len(graph)  
    dist = [math.inf] * n
    dist[source] = 0
    minheap = [(0, source)] 
    while minheap:
        d, u = heapq.heappop(minheap)  
        if d > dist[u]:  
            continue
        for v in range(n):
            if graph[u][v] != math.inf and dist[v] > dist[u] + graph[u][v]:
                dist[v] = dist[u] + graph[u][v]
                heapq.heappush(minheap, (dist[v], v))             
    return dist

inf = math.inf
g = [[0,5,2,3,inf],
     [5,0,1,inf,6],
     [2,1,0,5,2],
     [3,inf,5,0,inf],
     [inf,6,2,inf,0]]
dist = dijkstra(g,0)
print(dist)
