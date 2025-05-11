a = input()
if a.count('7') == 0:
    if int(a) % 7 != 0:
        print(0)
    else:
        print(1)
else:
    if int(a) % 7 != 0:
        print(2)
    else:
        print(3)