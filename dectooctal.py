"""n=int(input("enter the decimal number:\n"))
print(oct(n))"""

def dectooctal(n):
    octalnum=[0]*100
    i=0
    while(n!=0):
        octalnum[i]=n%8
        n=int(n/8)
        i+=1
    for j in range(i-1,-1,-1):
        print(octalnum[j],end="")

n=int(input("Enter the number:"))
dectooctal(n)