import re
text=input("enter the string")
result = re.split("\D+", text)
# Print results.
for element in result:
    print(element)