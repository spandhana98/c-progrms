x=[]
for k in range(int(input("enter the size"))):
    x.append(int(input()))
def swaplist(arr):
    n=len(arr)
    temp=arr[0]
    arr[0]=arr[n-1]
    arr[n-1]=temp
    return arr
res=swaplist(x)
print(res)

a = []
a.append("Hello")
a.append("Geeks")
a.append("For")
a.append("Geeks")
print("The length of list is: ", len(a))