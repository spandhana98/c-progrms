import re
IP = "196.08.056.168"
string = re.sub('\.[0]*', '.', IP)
print(string)