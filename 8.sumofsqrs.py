
def sumofsqrs(n):
    sm=0
    for i in range(1,n + 1):
        sm = sm + (i * i)
    return sm
res=sumofsqrs(int(input("enter number")))
print(res)