A=[[7,2,3],[2,3,9],[4,8,6]]
d1=d2=0
for i in range (len(A)):
    for j in range(len(A)):
        if(i==j):
            d1+=A[i][j]
        if((i+j)==(len(A)-1)):
            d2+=A[i][j]
print(abs(d1-d2))

        