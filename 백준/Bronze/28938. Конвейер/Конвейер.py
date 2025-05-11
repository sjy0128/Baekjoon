n = int(input())
pos = sum(map(int, input().split()))
print("Stay" if pos == 0 else ("Right" if pos > 0 else "Left"))