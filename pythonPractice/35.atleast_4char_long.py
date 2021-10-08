import re
text = input("enter the string")
print(re.findall(r"\b\w{4,}\b", text))