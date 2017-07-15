count = 0
Sum = 0
for i in range (0,6):
    x = float(input())
    if (x > 0):
        count = count + 1
        Sum += x
b = Sum / count
print("%d"%count , "valores positivos")
print("%.1f"%b)
