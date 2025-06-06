n = int(input())
words = set()
for _ in range(n):
    word = input()
    words.add("%02d"%len(word)+word)
for w in sorted(words):
    print(w[2:])