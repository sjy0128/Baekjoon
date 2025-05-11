t1, e1, f1 = map(int, input().split())
Max = t1*3 + e1*20 + f1*120
t2, e2, f2 = map(int, input().split())
Mel = t2*3 + e2*20 + f2*120
print("Draw" if Max == Mel else ("Max" if Max > Mel else "Mel"))