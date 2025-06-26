n, g = input().split()
count = 0
names = set()
p = ['', 'Y', 'F', 'O']
for _ in range(int(n)):
    names.add(input())
print(len(names)//p.index(g))