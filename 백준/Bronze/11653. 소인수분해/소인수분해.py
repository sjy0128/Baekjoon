x = int(input())
i = 2

while x != 1:
    if x % i == 0:
        print(i)
        x /= i
    else:
        i += 1