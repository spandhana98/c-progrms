x=[]
for i in range(int(input("enter the size"))):
    x.append(int(input()))
print(x)
#ans=sum(x)
res=0
for i in range(0,len(x)):
    res=res+x[i]
    #i=i+1
print(res)

