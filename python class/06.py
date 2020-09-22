count=s=0
while True:
    try:
        n=input("enter number/done::")
        if n=='done':
            print("sum=" ,s )
            print("count=",count)
            print("average=",(s/count))
            break
        else:
            s=s+int(n)
            count=count+1
    except:
        print("error only numbers") 