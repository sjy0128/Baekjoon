n, m = map(int, input().split())
arr = [i for i in range(0, n+1)]
for k in range(m):
    i, j = map(int, input().split())
    arr[i:j+1] = arr[j:i-1:-1]
for i in arr[1:]:
    print(i, end=" ")