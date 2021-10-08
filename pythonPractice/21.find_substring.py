import re
string=input("enter the string")
pattern=input("enter the substring")
for pattern in re.findall(pattern, string):
    print(pattern)