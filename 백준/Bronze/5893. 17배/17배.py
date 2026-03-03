def b2d(b):
    b = list(b)
    d = 0
    c = 1
    while b:
        d += int(b.pop()) * c
        c *= 2
    return d

def d2b(d):
    b = ""
    c = 1
    while c * 2 <= d:
        c *= 2
    while c:
        if d >= c:
            b += '1'
            d %= c
        else:
            b += '0'
        c //= 2
    return b

print(d2b(b2d(input()) * 17))