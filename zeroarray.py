"""shift all zero array element to last"""

arr=[1,9,8,4,0,0,2,7,0,6,0]
for i in arr:
    if(i==0):
        arr.remove(i)
        arr.append(i)
print(arr)