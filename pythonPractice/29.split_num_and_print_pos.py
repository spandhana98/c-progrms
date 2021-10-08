import re
# Input.
text=input("enter the input")
for match in re.finditer("\d+", text):
    print(match.group(0))
    print("Index position:", match.start())