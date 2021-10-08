import re
string=input("enter the string")

print("Without extra spaces:",re.sub(r'\s+', '',string))