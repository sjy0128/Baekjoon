n=int(input())
print(sum(range(1, n+1)))
print(sum(range(1, n+1))**2)
s=0
for i in range(1, n+1):
    s += i**3
print(s)