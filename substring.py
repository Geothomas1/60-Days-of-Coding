str=input()
n=len(str)
for i in range(0,n):
    for j in range(i+1,n+1):
        print(str[i:j])