S=int(input())
i = 0
s = 0
while True:
    i += 1
    s += i
    if s>S:
        break;
print(i-1)