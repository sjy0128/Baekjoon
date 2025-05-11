moeum = ['a','e','i','o','u','A','E','I','O','U']

while True:
    s = input()
    if s == "#":
        break
    count = 0
    for i in s:
        if i in moeum:
            count += 1
    print(count)