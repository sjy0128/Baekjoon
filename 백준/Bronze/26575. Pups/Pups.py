import math
for _ in range(int(input())):
    a, b, c = map(float, input().split())
    print('$'+"%.2f"%(a * b * c))