#Write a Python program that matches a string that has an a followed by three 'b'.

import re
def pattern_match(string):
    if re.search(r'ab{3}',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))