"""Write a function that uses character handling library functions to determine the number of upper case, lower case, digits, spaces and punctuation characters in the specified text"""
n=input("Enter a String:")
c=s=d=spa=p=0
str=[]
str=n
for i in range(len(str)):
    if (str[i].isupper()):
        c+=1
    elif(str[i].islower()):
        s+=1
    elif(str[i].isdigit()):
        d+=1
    elif(str[i].isspace()):
        spa+=1
    elif(str[i].ispunct()):
        p+=1

print("UpperCase Count",c)
print("LowerCase Count",s)
print("Digit Count",d)
print("Space Count",spa)
print("Punctuation",p)

