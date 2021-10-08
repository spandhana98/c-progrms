import re
text = input("enter the string")
newText = re.sub(r"(?<=\d)\s(?=\d)", '', text)
print(newText)