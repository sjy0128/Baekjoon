a = input()
b = input()
a1 = list(a)
b1 = list(b)
n = 0
for i in a:
    if i not in b1:
        n += 1
    else:
        b1.remove(i)
for i in b:
    if i not in a1:
        n += 1
    else:
        a1.remove(i)
print(n)