ans = [0] * 4
while 1:
    a = sorted(list(map(int, input().split())))
    if(a[0] + a[1] <= a[2]):
        break
    ans[0] += 1
    x, y = a[0]**2 + a[1]**2, a[2]**2
    if x == y:
        ans[1] += 1
    elif x > y:
        ans[2] += 1
    else:
        ans[3] += 1
print(*ans)