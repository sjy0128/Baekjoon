n = int(input())
for _ in range(n):
    a = input().split()
    a[0] = float(a[0])
    for i in range(1, len(a)):
        if a[i] == "@":
            a[0] *= 3
        elif a[i] == "%":
            a[0] += 5
        else:
            a[0] -= 7
    print(format(a[0], ".2f"))