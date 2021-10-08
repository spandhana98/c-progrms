import re
text1 = input("enter the string")
print(re.findall(r'"(.*?)"', text1))
