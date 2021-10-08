import re
text = input("enter the string")
print(re.split('; |, |\*|\n',text))