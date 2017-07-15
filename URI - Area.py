a , b , c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

#rectangled triangle

ret = 0.5 * a * c
print("TRIANGULO: %.3f" %ret)

#-------------------

#circle

cir = 3.14159 * c * c
print("CIRCULO: %.3f" %cir)

#-------------------

# trapezium

tra = 0.5 * (a + b) * c
print("TRAPEZIO: %.3f" %tra)

#-------------------

#square

squ = b * b
print("QUADRADO: %.3f" %squ)

#-------------------

#rectangle

rec = a * b
print("RETANGULO: %.3f" %rec)
