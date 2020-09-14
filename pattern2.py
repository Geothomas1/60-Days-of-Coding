n=int(input("Enter the Number"))
a=1
b=1
for i in range(1,n+1):
    if(i%2==0):
        a=a*2
        print(a)
    else:
        b=b*3
        print(b)
if(n%2==0):
    print("{} th term of  this series is :{}".format(n,int(a/2)))
else:
     print("{} th term of  this series is :{}".format(n,int(b/3)))
    



