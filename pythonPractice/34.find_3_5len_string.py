import re
text = input("enter the string")
print(re.findall(r"\b\w{3,5}\b", text))