n=int(input("Enter the Number"))
a=0
b=0
for i in range(0,n+1):
    if(i%2==0):
        a=a+2
        print(a)
    else:
        b=b+1
        print(b)
if(n%2==0):
    print("{} th term of  this series is :{}".format(n,int(a-2)))
else:
     print("{} th term of  this series is :{}".format(n,int(b-1)))
    



