'''String with a Twist
 The program will recieve 3 English words inputs from STDIN

These three words will be read one at a time, in three separate line
The first word should be changed like all vowels should be replaced by %
The second word should be changed like all consonants should be replaced by #
The third word should be changed like all char should be converted to upper case
Then concatenate the three words and print them
Other than these concatenated word, no other characters/string should or message should be written to STDOUT

For example if you print how are you then output should be h%wa#eYOU.'''

str1=str(input("Enter the string:"))
v=['a','e','i','o','u']
for i in str1:
    if i in v:
        str1=str1.replace(i,'*')
print(str1)
str2=str(input("Enter String 2:"))
for i in str2:
    if i not in v:
        str2=str2.replace(i,'#')
print(str2)
str3=str(input("Enter the string 3:"))
print(str3.upper())
print(str1+str2+str3.upper())