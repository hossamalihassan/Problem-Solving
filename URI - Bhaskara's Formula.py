import math 
a , b , c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

m = (b*b) - 4 * a * c

if (m <= 0 or a == 0):
    print("Impossivel calcular")
else:
    R1 = (-1*b + math.sqrt(m) ) / (2 * a)
    R2 = (-1*b - math.sqrt(m) ) / (2 * a)
    print("R1 = %.5f"%R1)
    print("R2 = %.5f"%R2)
