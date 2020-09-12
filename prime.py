def prime(n):
    if n>1:
        for i in range(2,n):
            if(n%i==0):
                print("{} is not prime number".format(n))
                break
        else:
            print("{} is prime number".format(n))
  
num=int(input("Enter Number:"))
if num>0:
    prime(num)
else:
    print("Enter a positive number")
