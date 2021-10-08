import re
def url(str):
   # findall() has been used
   # with valid conditions for urls in string
   ur = re.findall('http[s]?://(?:[a-zA-Z]|[0-9]|[$-_@.&+]|[!*\(\), ]|(?:%[0-9a-fA-F][0-9a-fA-F]))+', str)
   return ur

str = input("enter the url")
print("Url is :: ", url(str))