import re
def match_num(string):
    n=int(input("enter num to match"))
    text = re.compile(r"^9")
    if text.match(string):
        return True
    else:
        return False
string=input("enter the string")
print(match_num(string))
