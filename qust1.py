"""
Problem
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, ……..
This series is a mixture of 2 series – all the odd terms in this series form a Fibonacci series and all the even terms are the prime numbers in ascending order.

Write a program to find the Nth term in this series.

The value N is a Positive integer that should be read from STDIN.
The Nth term that is calculated by the program should be written to STDOUT.
Other than the value of Nth term, no other characters/strings or message should be written to STDOUT.
For example, when N = 14, the 14th term in the series is 17. So only the value 17 should be printed to STDOUT.

"""
def fib(n):
    a=0
    b=1
    for i in range(1,n+1):
        c=a+b
        a=b
        b=c
    print(a)
def prime(n):
    count=0
    i=2
    while i:
        f=0
        for j in range(2,i):
            if (i%j==0):
                f=1
                break
        if(f==0):
            count+=1
            if(count==n):
                print(i)
                break
        i=i+1


num=int(input("Enter the number:"))
if(num%2==0):
    prime(int(num/2))
else:
    fib((int(num/2)+1))