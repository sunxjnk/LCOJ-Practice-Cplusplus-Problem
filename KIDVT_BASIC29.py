a,b,c = map(int,input().split())
u = a
o = c
if u>b:
    u = b
if u>c:
    u = c
if o<b:
    o = b
if  o<a:
    o = a
print(u,o)