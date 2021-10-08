# Write a Python program that matches a string that has an 'a' followed by anything, ending in 'b'.

import re
def pattern_match(string):
    if re.search(r'a.*?b$',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))