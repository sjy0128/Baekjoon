a,b,c=map(int,input().split())
print(a*(b if b>c else c)//(b if b<c else c))