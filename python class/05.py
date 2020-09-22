n=float(input("Enter score between : 0.0 - 1.0:"))
if n > 1.0:
    print("error::out of range")
else:
    if n >= 0.9:
        print('A')
    elif n >= 0.8:
        print('B')
    elif n >= 0.7:
        print('C')
    elif n >= 0.6:
        print('D')
    elif n < 0.6:
        print('F') 