X=int(input())
N=int(input())
s=0
for _ in range(N):
    a,b=map(int,input().split())
    s+=a*b
print("Yes"if X==s else"No")