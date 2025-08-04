n, m, v = map(int, input().split())
g = {}
for i in range(n):
    g[i+1] = []
for _ in range(m):
    a, b = map(int, input().split())
    g[a].append(b)
    g[b].append(a)

# DFS
def dfs(s, visited=[False for i in range(n+1)]):
    print(s, end=" ")
    visited[s] = True
    for i in sorted(g[s]):
        if not visited[i]:
            dfs(i, visited)

# BFS
def bfs(v):
    qu = []
    st = set()
    qu.append(v)
    st.add(v)
    while qu:
        x = qu.pop(0)
        print(x, end=" ")
        for i in sorted(g[x]):
            if i not in st:
                st.add(i)
                qu.append(i)

dfs(v)
print()
bfs(v)