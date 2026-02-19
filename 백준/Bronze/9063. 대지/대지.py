import sys
i = sys.stdin.readline
x, y = [], []
for _ in [0] * int(i()):
    a, b = map(int, i().split())
    x.append(a)
    y.append(b)
print((max(x) - min(x)) * (max(y) - min(y)))