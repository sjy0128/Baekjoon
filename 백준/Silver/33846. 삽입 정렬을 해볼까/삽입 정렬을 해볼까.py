import sys

n, t = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

print(' '.join(map(str,sorted(a[:t]))),' '.join(map(str,a[t:])))