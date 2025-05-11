def f(a,b):
    if b==0:return a
    return f(b,a%b)
t=int(input())
for _ in range(t):
    a, b=map(int,input().split())
    print(max(a,b)//f(a,b)*min(a,b))