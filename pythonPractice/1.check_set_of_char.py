import re
def check_string(string):
    Result = re.compile(r'[^a-zA-Z0-9]')
    string = Result.search(string)
    return not bool(string)
string=input("enter the string")
print(check_string(string))