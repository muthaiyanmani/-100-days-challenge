
size=int(input(("Enter size of array: ")))
arr=[]
for i in range(size):
    arr.append(input())

# method 1
def method1():
    print("Smallest number in array: ",min(arr))

#method 2
def method2():
    arr.sort()
    print("The Smallest value in array: ",arr[0])

# method 3
def method3():
    min=arr[0]
    for i in range(0,len(arr)):
        if(arr[i]<min):
            min=arr[i]
    print("The smallest number in array is: ",min)


method2()

