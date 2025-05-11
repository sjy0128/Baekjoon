n = int(input())
s = 0
arr = list(map(int, input().split()))
for i in arr:
    s += i/max(arr)*100
print(s/n)