ra = {
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
}
no = True
for _ in range(int(input())):
    if not input() in ra:
        no = False
        break
print("No" if no else "Yes")