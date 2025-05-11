h, m, s = input().split()
a = int(input())
h = int(h)
m = int(m)
s = int(s)
s += a
m += s // 60
s %= 60
h += m // 60
m %= 60
print(h % 24, m, s)