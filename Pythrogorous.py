n=int(input("Enter the limit"))
for i in range(1,n+1):
    for j in range(1,i):
        for k in range(1,n+1):
            a=i*i
            b=j*j
            c=k*k
            if((a+b)==c):
                print(j,i,k)