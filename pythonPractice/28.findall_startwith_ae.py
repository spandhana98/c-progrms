import re
# Input.
text=input("enter the string")
list = re.findall("[ae]\w+", text)
# Print result.
print(list)