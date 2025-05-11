a,b,c=map(int,input().split())
if a==b==c:print(10000+a*1000)
elif a!=b!=c!=a:print(max(a,b,c)*100)
else:print((a if a==b or a==c else b)*100+1000)