t = int(input())

h = t // 3600
t = t % 3600

m = t // 60
t = t % 60

print("%d:%d:%d"%(h,m,t))

