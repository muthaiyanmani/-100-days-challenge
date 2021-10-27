size=int(input("Enter the size: "))
arr=[]
for i in range(size):
    arr.append(input())

for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        if(arr[i]>arr[j]):
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
print("The sorted array is: ",arr)