n=int(input("Enter Year:"))
if(n%4==0 and n%100!=0 and n%400!=0):
    print("{} is leap year".format(n))
else:
    print("{} Not leap Year".format(n))