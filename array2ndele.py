n=int(input("How many number you want to enter:"))
l=[]
for i in range(n):
    l.append(int(input()))
max1=max2=l[1]
for i in range(len(l)):
    if (l[i]>max1):
        max2=max1
        max1=l[i]
    elif(l[i]>max2 and l[i]<max1):
        max2=l[i]

print("Largest1:",max1)
print("Second Largest:",max2)

