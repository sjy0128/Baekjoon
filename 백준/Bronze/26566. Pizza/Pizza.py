import math
for _ in range(int(input())):
    a1, p1 = map(int, input().split())
    r2, p2 = map(int, input().split())
    print("Whole pizza" if r2*math.pi**2/p2 > a1/p1 else "Slice of pizza")