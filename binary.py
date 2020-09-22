"""Addition of 2 numbers and printing the result in binary Using Command Line Programming"""
n=int(input("Enter 1st Element:"))
m=int(input("Enter 2nd Element:"))
s=n+m
print(bin(s).replace("0b",""))