import sys
input = sys.stdin.readline
n = int(input())
a = [0 for i in range(8001)]
s = 0
b = n // 2
ma = -4000
mi = 4000
for _ in range(n):
    k = int(input())
    s += k
    if k > ma:
        ma = k
    if k < mi:
        mi = k
    a[k+4000] += 1
print(round(s / n))
i = 0
while(a[i] <= b):
    b -= a[i]
    i += 1
print(i-4000)
m_idx = -1
m = max(a)
for i in range(0, 8001):
    if a[i] == m:
        if m_idx != -1:
            m_idx = i
            break
        else:
            m_idx = i
print(m_idx - 4000)
print(ma - mi)