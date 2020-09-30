 """   Given five positives, Find the minimum and maximum values that can be calculated by summing              
Exactly four the five integers. Then print the respective minimum and maximum values as a single
Line of two space- separated long integer"""
 arr=[10,2,3,1,77]
 minsum=0
    maxsum=0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if(arr[i]>arr[j]):
                temp=arr[i]
                arr[i]=arr[j]
                arr[j]=temp
    for i in range(0,len(arr)-1):
        minsum+=arr[i]
    for i in range(1,len(arr)):
        maxsum+=arr[i]
    print(minsum,maxsum)