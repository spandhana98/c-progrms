# Write a Python program to match a string that contains only upper and lowercase letters, numbers, and underscores

import re
def pattern_match(string):
    if re.search(r'^[a-zA-Z0-9_]*$',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))