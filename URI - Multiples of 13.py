x = int(input())
y = int(input())
count = 0
if (x > y):
    for i in range(y , x+1):
        if(i % 13 != 0):
            count = count + i
if (y > x):
    for i in range(x , y+1):
        if(i % 13 != 0):
            count = count + i
print(count)
