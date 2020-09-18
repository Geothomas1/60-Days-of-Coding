n=int(input("Enter the limit:"))
for a in range(1,n):
    for b in range(1,a):
        for c in range(1,b):
            c=c*c
            a=a*a
            b=b*b
            if (c==int(a+b)):
                print(a,b,c)
