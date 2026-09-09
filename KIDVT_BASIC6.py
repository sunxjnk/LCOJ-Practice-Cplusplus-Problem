import math as m
a,b,c = map(float,input().split())
p = (a+b+c)/2
s = m.sqrt(p*(p-a)*(p-b)*(p-c))
print(f"{p*2:.2f}")
print(f"{s:.2f}")