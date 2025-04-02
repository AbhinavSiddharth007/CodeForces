import sys
from collections import deque

def solve():
    n, v1, v2 = map(int, sys.stdin.readline().split())
    
    graph = [[] for _ in range(n + 1)]
    for i in range(1, n + 1):
        row = list(map(int, sys.stdin.readline().split()))
        for j in range(1, n + 1):
            if row[j - 1] == 1:
                graph[i].append(j)
    
    queue = deque([v1])
    parent = {v1: -1}
    used = [False] * (n + 1)
    used[v1] = True
    
    while queue:
        u = queue.popleft()
        for v in graph[u]:
            if not used[v]:
                used[v] = True
                parent[v] = u
                queue.append(v)
    
    if not used[v2]:
        print(-1)
        return
    
    path = []
    while v2 != -1:
        path.append(v2)
        v2 = parent[v2]
    
    print(len(path) - 1)
    print(" ".join(map(str, reversed(path))))

solve()
