def rev(s):
    str=""
    for i in s:
        str=i+str
    return str


s=input("Enter the string:")
s1=rev(s)
print(s1)

    