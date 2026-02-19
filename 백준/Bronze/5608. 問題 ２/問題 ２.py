import sys
I = sys.stdin.readline
h = {}
for _ in int(I())*[0]:
    k, v = I().split()
    h[k] = v
for _ in int(I())*[0]:
    c = I()[0]
    print(h[c] if c in h else c, end='')