# Write a Python program to find sequences of lowercase letters joined with a underscore.

import re
def pattern_match(string):
    if re.search(r'^[a-z]+_[a-z]+$',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))