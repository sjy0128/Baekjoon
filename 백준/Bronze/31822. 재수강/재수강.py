sc = input()
count = 0
for _ in range(int(input())):
    if input()[:5] == sc[:5]:
        count += 1
print(count)