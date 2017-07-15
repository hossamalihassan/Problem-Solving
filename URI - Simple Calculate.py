c,a,b = input().split(" ")
a = int(a)
b = float(b)
c_2,a_2,b_2 = input().split(" ")
a_2 = int(a_2)
b_2 = float(b_2)
q = b * a
q_2 = b_2 * a_2
res = q + q_2
print("VALOR A PAGAR: R$ %.2f" %res)
