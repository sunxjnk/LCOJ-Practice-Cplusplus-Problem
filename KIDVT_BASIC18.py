n = int(input())

if n<0:
    print("INVALID")
else:
    if n%4==0:
        if n%100==0:
            if n%400==0:
                print("YES")
            else:
                print("NO")
        else:
            print("YES")
    else:
        print("NO")