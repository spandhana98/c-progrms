import re
def pattern_match(string):
    if re.search(r'ab+?',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))