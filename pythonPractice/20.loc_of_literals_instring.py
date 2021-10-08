import re
string=input("enter the string")
pattern=input("enter the pattern")
match = re.search(pattern, string)
s = match.start()
e = match.end()
print(s,e)