while True:
    a = float(input())
    if a < 0: break
    print("Objects weighing", "%.2f"%a, "on Earth will weigh", "%.2f"%(a*0.167), "on the moon.")