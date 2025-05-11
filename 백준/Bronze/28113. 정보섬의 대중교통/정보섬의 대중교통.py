n, a, b = map(int, input().split())
if n <= b:
    if a == b:
        print("Anything")
    elif a > b:
        print("Subway")
    else:
        print("Bus")
else:
    print("Bus")