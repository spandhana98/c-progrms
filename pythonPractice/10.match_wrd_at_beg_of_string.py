# Write a Python program that matches a word at the beginning of a string.

import re
def pattern_match(string):
    if re.search(r'^\w+',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))