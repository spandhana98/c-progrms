import re
text = input("enter the string")
res =re.sub(" ", "_",text)
print(res)
res =re.sub("_", " ",res)
print(res)