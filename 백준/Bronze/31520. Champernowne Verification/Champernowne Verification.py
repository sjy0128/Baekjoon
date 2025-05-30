s = input()
c = "1"
k = 1
while len(s) > len(c):
    k += 1
    c += str(k)
print(k if s == c else -1)