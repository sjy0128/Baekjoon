for _ in range(3):
    s = 0
    for _ in range(int(input())):
        s += int(input())
    print("0" if s == 0 else ("+" if s > 0 else "-"))