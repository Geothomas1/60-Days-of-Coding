a=[10,20,30,30,30,40,50]
res={}
for i in a:
 if i  in res:
   res[i]+=1
   
 else:
   res[i]=1
   
for k,v in res.items():
 print(k,v)

"""
a=[10,20,30,30,30]
for i in range(len(a)):
    c=0
    for j in range(i,len(a)):
        if(a[i]==a[j]):
            c+=1
    
    print(a[i],c)
    """

