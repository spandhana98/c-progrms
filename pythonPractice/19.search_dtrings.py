import re
def pattern_match(string):
    pattern=input("rnter the list")
    list=[pattern]
    for i in list:
        if re.search('i',string):
          return ('Found it!')
        else:
          return ('not found')
string=input("enter the string")
print(pattern_match(string))