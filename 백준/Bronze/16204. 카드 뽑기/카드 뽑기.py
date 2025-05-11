n, m, k = map(int, input().split())
print((m if m < k else k) + (n-m if n-m < n-k else n-k))