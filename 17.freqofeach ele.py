arr=[]
for i in range(int(input("enter the size"))):
    arr.append(int(input()))
fr=[None]*len(arr)
visited=-1

for j in range(0,len(arr)):
    count=1;
    for k in range(j+1,len(arr)):
        if(arr[j]==arr[k]):
            count=count+1
            fr[k]=visited
    if(fr[j]!=visited):
        fr[j]=count
for i in range(0, len(fr)):
    if(fr[i] != visited):
        print("    " + str(arr[i]) + "    |    " + str(fr[i]));
print("---------------------");

