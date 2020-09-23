"""Python prg to find kth element from an unsorted array"""
n=int(input("Enter the size of array:"))
k=int(input("Enter the kth element to find:"))
a=[]
for i in range(n):
    a.append(input())

for i in range(len(a)):
    min_index=i
    for j in range(i+1,len(a)):
        if (a[min_index]>a[j]):
            min_index=j
            a[i],a[min_index]=a[min_index],a[i]
print(a)
print(a[k])
