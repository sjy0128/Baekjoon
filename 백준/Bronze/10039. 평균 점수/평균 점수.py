s=0
for _ in range(5):
    t=int(input())
    s+=40 if t<40 else t
print(s//5)