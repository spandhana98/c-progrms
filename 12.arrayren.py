arr=[]
for i in range(int(input("enter the size"))):
    arr.append(int(input()))

def mularr(arr):
    mul=1
    for i in range(0,len(arr)):
        mul=mul*arr[i]
    return mul

res=mularr(arr)
print(res)