input()
a=list(map(int,input().split()))
s=sum(a)
print(s-min(b for b in a if b%2)if s%2else s)