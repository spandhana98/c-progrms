num1=int(input("enter the number"))
def factorial(x):
    if x==0 or x==1:
        return 1
    else:
        return x*factorial(x-1)
res=factorial(num1)
print(res)

