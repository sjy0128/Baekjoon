def fact(a):
    if a <= 1: return 1
    return a * fact(a-1)

for _ in range(int(input())):
    n, m = map(int, input().split())
    print(fact(m)//(fact(m-n)*fact(n)))