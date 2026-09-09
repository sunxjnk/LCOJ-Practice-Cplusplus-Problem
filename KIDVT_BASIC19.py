a,b = map(int, input().split())

if b<0 or a<1 or a>12:
    print("INVALID")
else:
    if a == 2:
        if (a%4==0 and a%100!=0) or (a%400==0):
            print("29")
        else:
            print("28")
    elif a==4 or a==6 or a==9 or a==11:
        print("30")
    else:
        print("31")