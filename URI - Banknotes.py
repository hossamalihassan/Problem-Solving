#576
#5 nota(s) de R$ 100,00
#1 nota(s) de R$ 50,00
#1 nota(s) de R$ 20,00
#0 nota(s) de R$ 10,00
#1 nota(s) de R$ 5,00
#0 nota(s) de R$ 2,00
#1 nota(s) de R$ 1,00

m = int(input())
print(m)
hun = m // 100
m = m % 100
print(hun ,"nota(s) de R$ 100,00")

m_50 = m // 50
m = m % 50
print(m_50 ,"nota(s) de R$ 50,00")

m_20 = m // 20
m = m % 20
print(m_20 ,"nota(s) de R$ 20,00")

m_10 = m // 10
m = m % 10
print(m_10 ,"nota(s) de R$ 10,00")

m_5 = m // 5
m = m % 5
print(m_5 ,"nota(s) de R$ 5,00")

m_2 = m // 2
m = m % 2
print(m_2 ,"nota(s) de R$ 2,00")

m_1 = m // 1
m = m % 1
print(m_1 ,"nota(s) de R$ 1,00")
