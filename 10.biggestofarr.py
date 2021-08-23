x=[]
for i in range(int(input("enter the size"))):
    x.append(int(input()))
print(x)
#ans=sum(x)
res=x[0]
for i in range(1,len(x)):

    if x[i]>res:
        res=x[i]
    #i=i+1
print(res)
