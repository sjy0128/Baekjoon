def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)
def lcm(a, b):
    return a * b // gcd(a, b) 
s = input()
t = input()
l = lcm(len(s), len(t))
print(int(s * (l // len(s)) == t * (l // len(t))))