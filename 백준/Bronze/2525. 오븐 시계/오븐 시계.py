h, m = input().split()
a = int(input())
h = int(h)
m = int(m) + a
h += m // 60
print(h % 24, m % 60)