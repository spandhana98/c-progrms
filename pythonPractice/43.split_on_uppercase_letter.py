import re
def split_uppercase(value):
    return re.sub(r'([A-Z])', r' \1', value)
string=input("enter the string")
print(split_uppercase(string))