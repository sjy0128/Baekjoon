import sys
f=lambda:int(sys.stdin.readline()[:-1])
n=f()
print(sum(f()for _ in[0]*n)-n+1)