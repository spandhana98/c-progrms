import re
string=input("enter the string")
pattern=input("enter the substring")
for pattern in re.finditer(pattern, string):
    s=pattern.start()
    e=pattern.end()
    print('found %s '%pattern,s,e)