'''MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01'''


m = float(input())
hun = m // 100
m = m % 100
print("NOTAS:")
print("%d"%hun ,"nota(s) de R$ 100,00")

m_50 = m // 50
m = m % 50
print("%d"%m_50 ,"nota(s) de R$ 50,00")

m_20 = m // 20
m = m % 20
print("%d"%m_20 ,"nota(s) de R$ 20,00")

m_10 = m // 10
m = m % 10
print("%d"%m_10 ,"nota(s) de R$ 10,00")

m_5 = m // 5
m = m % 5
print("%d"%m_5 ,"nota(s) de R$ 5,00")

m_2 = m // 2
m = m % 2
print("%d"%m_2 ,"nota(s) de R$ 2,00")


print("MOEDAS:")


m_1 = m // 1
m = m % 1
print("%d"%m_1 ,"moeda(s) de R$ 1,00")

m = m * 100

m_50_2 = m // 50
m = m % 50
print("%d"%m_50_2,"moeda(s) de R$ 0.50")

m_25_2 = m // 25
m = m % 25
print("%d"%m_25_2,"moeda(s) de R$ 0.25")

m_10_2 = m // 10
m = m % 10
print("%d"%m_10_2,"moeda(s) de R$ 0.10")

m_5_2 = m // 5
m = m % 5
print("%d"%m_5_2,"moeda(s) de R$ 0.05")

m_1_2 = m // 1
m = m % 1
print("%d"%m_1_2,"moeda(s) de R$ 0.01")


