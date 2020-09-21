a=[10,20,20,20,30,50,10,20,50]
for i in range(len(a)):
    c=0
    f=0
    for j in range(i,len(a)):
        if(a[i]==a[j]):
            c=c+1
    print(a[i],c)