import math
n, ans = int(input()), 0
p = [tuple(map(int, input().split())) for _ in range(n)]
p.sort(key = lambda x: x[0])
g = dict()
for (x, y) in p:
    if(x in g):
        g[x].append(y)
    else:
        g[x] = [y]
dp = dict()
for i in g:
    dp[i] = [0] * len(g[i])
xs = list(g.keys())
if(len(xs) == 1):
    print(0)
else:
    for i in range(1, len(xs)):
        x, _x = xs[i], xs[i-1]
        for i in range(len(g[x])):
            for j in range(len(g[_x])):
                dp[x][i] = max(dp[x][i], dp[_x][j] + (lambda x1, y1, x2, y2: math.sqrt((x2 - x1)**2 + (y2 - y1)**2))(x, g[x][i], _x, g[_x][j]))
    print(max(dp[xs[-1]]))