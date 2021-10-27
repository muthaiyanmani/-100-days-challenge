size = int(input("Enter the size of array: "))
ascending=[]
descending=[]
for i in range(0,size//2):
    ascending.append(input())
for i in range(size//2,size):
    descending.append(input())

ascending.sort()
descending.sort(reverse=True)

print("The array is: ",ascending+descending)



