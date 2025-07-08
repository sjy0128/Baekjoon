n, l = map(int, input().split())
h = []
for _ in range(n):
    h.append(input())
print(sorted(h)[l-1])