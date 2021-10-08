import re
def pattern_match(string):
    results = re.finditer(r"([0-9]{1,3})", string)
    print("Number of length 1 to 3")
    for n in results:
        print(n.group(0))
string=input("enter the string")
print(pattern_match(string))

