# Python3 program to find sum in Nth group

# Check if given array is Monotonic
def isMonotonic(A):
    return (all(A[i] <= A[i + 1] for i in range(len(A) - 1)) or
            all(A[i] >= A[i + 1] for i in range(len(A) - 1)))


# Driver program
a=[]
for k in range(int(input("enter size"))):
    a.append(int(input()))

# Print required result
print(isMonotonic(a))


