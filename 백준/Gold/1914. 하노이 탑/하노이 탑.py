def hanoi(n, f, t, a):
    if n == 1:
        print(f, t)
        return
    hanoi(n-1, f, a, t)
    print(f, t)
    hanoi(n-1, a, t, f)

k = 1
n = int(input())
for _ in range(n-1):
    k *= 2
    k += 1
print(k)
if n <= 20:
    hanoi(n, 1, 3, 2)