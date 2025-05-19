n, s = input().split()
if n == '2':
    c = ""
    vn = s
    upper = 0
    for i in range(len(s)):
        if s[i] == '_':
            upper = 1
        else:
            if upper == 1:
                upper = 0
                c += s[i].upper()
            else:
                c += s[i]
else:
    c = s
    vn = ""
    for i in s:
        if i.isupper() == True and len(vn) != 0:
            vn += '_'
        vn += i.lower()
print(c[0].lower() + c[1:])
print(vn)
print(c[0].upper() + c[1:])