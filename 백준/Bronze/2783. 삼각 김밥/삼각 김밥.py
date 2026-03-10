v = []

def calc(x, y):
    return 1000 / y * x

def func():
    i = list(map(int, input().split()))
    v.append(calc(i[0], i[1]))

func()
for _ in range(int(input())):
    func()
    
print(round(min(v), 2))