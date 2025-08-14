from math import *
a, b = map(int, input().split())
a *= 2
c = (-a + int(sqrt(a*a+(-4*b)))) // 2
d = (-a - int(sqrt(a*a+(-4*b)))) // 2
if c == d:
    print(c)
elif c > d:
    print(d, c)
else:
    print(c, d)