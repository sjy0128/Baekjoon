n = int(input())
a = list(map(int, input().split()))
ans = []
for i in range(n):
    ans.insert(i - a[i], i+1)
print(*ans)