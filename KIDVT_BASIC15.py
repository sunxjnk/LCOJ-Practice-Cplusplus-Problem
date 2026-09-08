n, m = map(int, input().split())
for i in range(n,0,-1):
    if(i%m==0):
        print(i)
        break