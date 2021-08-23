def compoundintrest(P,R,T):
    A=P*(pow((1+R/100),T))
    return A-P
a=float(input("principle"))
b=float(input("rate of intrest"))
c=float(input("time"))
res=compoundintrest(a,b,c)
print(res)