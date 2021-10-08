import re

if __name__ == '__main__':
    input = input("enter the string")

    s = re.sub(r'[^a-zA-Z0-9]', '', input)
    print(s)