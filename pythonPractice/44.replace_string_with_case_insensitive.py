import re
def replace(old, new, str, caseinsentive = False):
    if caseinsentive:
        return str.replace(old, new)
    else:
        return re.sub(re.escape(old), new, str, flags=re.IGNORECASE)
s='https://authenticate.com'
s = replace("Https", 'http', s)
print(s)