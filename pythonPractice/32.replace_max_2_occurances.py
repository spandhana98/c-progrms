import re
text = input("enter the string")
print(re.sub("[ ,.]", ":", text, 2))
