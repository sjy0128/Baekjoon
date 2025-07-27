algo = {}
member = {}
for _ in range(int(input())):
    k, v = input().split()
    algo[k] = int(v)
for _ in range(int(input())):
    k, v = input().split()
    member[k] = int(v)
for _ in range(int(input())):
    q = input()
    if q != 'nani ga suki?':
        name = q[:q.index(' ')]
        print('hai!')
    else:
        t = member[name]
        l = [(i, abs(algo[i]-t)) for i in algo]
        l = sorted(l, key=lambda x: (x[1], x[0]))
        print(l[1][0], 'yori mo', l[0][0])