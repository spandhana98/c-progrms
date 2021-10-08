import re
text = input("enter the string")
for m in re.finditer(r"\w+ly", text):
    print('%d-%d: %s' % (m.start(), m.end(), m.group(0)))