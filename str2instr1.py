""" Write a function that accepts 2 strings search string and pattern string and returns TRUE if the pattern string is found in the search string and FALSE if the pattern string is not found in the search string"""
s1=input("Enter the string:")
s2=input("Enter the search String:")
if s2 in s1:
    print("True")
else:
    print("False")