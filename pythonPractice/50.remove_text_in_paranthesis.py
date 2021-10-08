import re
string = input("enter the string")

modified_string = re.sub(r"\([^()]*\)", "", string)

print(modified_string)