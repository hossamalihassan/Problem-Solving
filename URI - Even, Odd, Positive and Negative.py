count_1 = 0
count_2 = 0
count_3 = 0
count_4 = 0

for i in range (0,5):
    a = int(input())
    if (a % 2 == 0):
        count_1 = count_1 + 1
    if (a % 2 != 0):
         count_2 = count_2 + 1
    if (a > 0):
         count_3 = count_3 + 1
    if (a < 0):
         count_4 = count_4 + 1

print(count_1 , "valor(es) par(es)")
print(count_2 , "valor(es) impar(es)")
print(count_3 , "valor(es) positivo(s)")
print(count_4 , "valor(es) negativo(s)")



#3 valor(es) par(es)
#2 valor(es) impar(es)
#1 valor(es) positivo(s)
#3 valor(es) negativo(s)
