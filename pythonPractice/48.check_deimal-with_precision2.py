def is_decimal(num):
    import re
    pattern = re.compile(r"""^[0-9]+(\.[0-9]{1,2})?$""")
    result = pattern.search(num)
    return bool(result)
print(is_decimal(input("enter the number")))