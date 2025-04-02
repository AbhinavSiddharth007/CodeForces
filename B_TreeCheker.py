def is_connected(graph, n):
    visited = set()
    
    def dfs(node):
        visited.add(node)
        for neighbor in range(n):
            if graph[node][neighbor] == 1 and neighbor not in visited:
                dfs(neighbor)
    
    dfs(0)  
    return len(visited) == n

def is_tree(n, adjacency_matrix):
    edge_count = sum(sum(row) for row in adjacency_matrix) // 2
    
    if edge_count != n - 1:
        return "NO"
    
    if not is_connected(adjacency_matrix, n):
        return "NO"
    
    return "YES"

def main():
    n = int(input().strip())
    adjacency_matrix = [list(map(int, input().split())) for _ in range(n)]
    print(is_tree(n, adjacency_matrix))

if __name__ == "__main__":
    main()

