while True:
    name, age, weight = input().split()
    if name == "#" and age == "0" and weight == "0": break
    age, weight = int(age), int(weight)
    
    print(name, "Senior" if age > 17 or weight >= 80 else "Junior")
        