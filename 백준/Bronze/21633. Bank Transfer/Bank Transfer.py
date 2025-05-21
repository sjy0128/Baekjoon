k = int(input())
s = 25 + k*0.01
if s < 100:
    s = 100
elif s > 2000:
    s = 2000
print(s)