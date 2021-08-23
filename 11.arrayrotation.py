x=[]
for i in range(int(input("enter the size"))):
    x.append(int(input()))
n=len(x)
d=int(input("how many elements to shift"))
print(x)


def splitArr(arr, n, k):
    for i in range(0, k):
        temp = arr[0]
        for j in range(0, n - 1):
            arr[j] = arr[j + 1]

        arr[n - 1] = temp


splitArr(x, n, d)

for i in range(0, n):
    print(x[i], end=' ')



'''def rotateList(arr,d,n):
  arr[:]=arr[d+1:n]+arr[0:d+1]
  return arr
# Driver function to test above function
#arr = [1, 2, 3, 4, 5, 6]
#print(arr)
print("Rotated list is")
print(rotateList(x,2,len(x)))'''









