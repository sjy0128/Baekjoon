import math
for _ in range(int(input())):
    a, b = map(float, input().split())
    print('The height of the triangle is '+"%.2f"%(a / b * 2)+' units')