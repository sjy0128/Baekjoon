while True:
    a = input()
    if a == '0': break
    s = 0
    for i in range(5): s += float(a)**i
    print(format(s, ".2f"))