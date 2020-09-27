str=input("Enter a string:")
s=list(str)
str=""
v=set("aeiouAEIOU")

for i in s:
    if i in v:
        s.remove(i)
print(str.join(s))

