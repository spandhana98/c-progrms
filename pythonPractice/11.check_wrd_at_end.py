import re
def pattern_match(string):
    if re.search(r'\w+\S*$',string):
        return ('Found it!')
    else:
        return ('not found')
string=input("enter the string")
print(pattern_match(string))